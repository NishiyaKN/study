// Importando bibliotecas

const mysql = require('mysql2');

// Criando conexao com banco de dados local
const connection = mysql.createConnection({
  host: '127.0.0.1',
  user: 'root', 
  password: 'Nobara38!', 
  database: 'mercado' 
});

connection.connect((err) => {
  if (err) {
    console.error('Error connecting to MySQL:', err);
    return;
  }
  console.log('Connected to MySQL database!');
});

const express = require("express");
const cors = require("cors");

// Criacao do servidor express
const app = express();
const port = 3000;

// Configuracao do express
app.use(express.json());

// Configuracao do cors
app.use(cors());

// ROTAS PARA A PAGINA DE PRODUTOS
// Rota para listar todos os produtos
app.get("/produtos", (req,res) =>{
    const sqlQuery = 'SELECT * FROM produtos';

  // Query pra pegar todos os dados
  connection.query(sqlQuery, (err, results, fields) => {
    if (err) {
      console.error('Error executing query:', err);
      res.status(500).json({ error: 'Internal server error' });
      return;
    }
    res.json(results);
  });
})

app.get('/produtos/:id_produto', (req, res) => {
    const productId = parseInt(req.params.id_produto);
  
    const sqlQuery = 'SELECT * FROM produtos WHERE id_produto = ?';
  
    connection.query(sqlQuery, [productId], (err, results) => {
      if (err) {
        console.error('Error executing query:', err);
        res.status(500).json({ error: 'Internal server error' });
        return;
      }
  
      if (results.length === 0) {
        res.status(404).json({ message: 'Produto não encontrado' });
      } else {
        const produtos = results[0];
        res.json(produtos);
      }
    });
  });

// Rota para adicionar um novo produto
app.post('/produtos', (req, res) => {
    const {id_produto, nome, categoria, quantidade, preco } = req.body;
  
    if (!id_produto || !nome || !categoria || !quantidade || !preco) {
      res.status(400).json({ error: 'Preencha todos os campos' });
      return;
    }
  
    // Query pra pegar o maior numero de id na tabela
    // connection.query('SELECT MAX(id) as maxId FROM produtos', (err, maxIdResults) => {
    //   if (err) {
    //     console.error('Error retrieving max ID:', err);
    //     res.status(500).json({ error: 'Internal server error' });
    //     return;
    //   }
  
      // Coloca como proximo id o id maximo acrescido de 1
      // const nextId = (maxIdResults[0].maxId || 0) + 1;
  
      // Insere os dados
      const insertQuery = 'INSERT INTO produtos (id_produto, nome, categoria, quantidade, preco) VALUES (?, ?, ?, ?, ?)';
      const values = [id_produto, nome, categoria, quantidade, preco];
  
      connection.query(insertQuery, values, (err, insertResults) => {
        if (err) {
          console.error('Error inserting data:', err);
          res.status(500).json({ error: 'Internal server error' });
          return;
        }
  
        res.status(201).json({ message: 'Data inserted successfully', id: id_produto});
      });
    });
  

// Rota para atualizar um produto
app.put('/produtos/:id_produto', (req, res) => {
    const productId = parseInt(req.params.id_produto);
    const updatedProduto = req.body;
  
    // Verifica se o id existe
    const checkExistenceQuery = 'SELECT * FROM produtos WHERE id_produto = ?';
    connection.query(checkExistenceQuery, [productId], (err, results) => {
      if (err) {
        console.error('Error executing query:', err);
        res.status(500).json({ error: 'Internal server error' });
        return;
      }
  
      if (results.length === 0) {
        res.status(404).json({ message: 'Produto não encontrado' });
      } else {
        // Query pra fazer o update
        const updateQuery = 'UPDATE produtos SET ? WHERE id_produto = ?';
        connection.query(updateQuery, [updatedProduto, productId], (err, updateResults) => {
          if (err) {
            console.error('Error executing update query:', err);
            res.status(500).json({ error: 'Internal server error' });
            return;
          }

          res.json({ ...updatedProduto, id_produto: productId });
        });
      }
    });
  });

// Rota para remover um produto
app.delete('/produtos/:id_produto', (req, res) => {
    const productId = parseInt(req.params.id_produto);
  
    // Verifica se o dado existe antes de deletar
    const checkExistenceQuery = 'SELECT * FROM produtos WHERE id_produto = ?';
    connection.query(checkExistenceQuery, [productId], (err, results) => {
      if (err) {
        console.error('Error executing query:', err);
        res.status(500).json({ error: 'Internal server error' });
        return;
      }
  
      if (results.length === 0) {
        res.status(404).json({ message: 'Produto não encontrado' });
      } else {
        // Query pra deletar o dado
        const deleteQuery = 'DELETE FROM produtos WHERE id_produto = ?';
        connection.query(deleteQuery, [productId], (err, deleteResults) => {
          if (err) {
            console.error('Error executing delete query:', err);
            res.status(500).json({ error: 'Internal server error' });
            return;
          }

          res.json({ message: 'Produto excluído com sucesso' });
        });
      }
    });
  });
  
// ROTAS PARA A PAGINA DE ADMIN //

// Rota para listar todos os admins
app.get("/admins", (req,res) =>{
    const sqlQuery = 'SELECT * FROM admins';

  // Query pra pegar todos os dados
  connection.query(sqlQuery, (err, results, fields) => {
    if (err) {
      console.error('Error executing query:', err);
      res.status(500).json({ error: 'Internal server error' });
      return;
    }
    res.json(results);
  });
})

app.get('/admins/:id_admin', (req, res) => {
    const adminId = parseInt(req.params.id_admin);
  
    const sqlQuery = 'SELECT * FROM admins WHERE id_admin = ?';
  
    connection.query(sqlQuery, [adminId], (err, results) => {
      if (err) {
        console.error('Error executing query:', err);
        res.status(500).json({ error: 'Internal server error' });
        return;
      }
  
      if (results.length === 0) {
        res.status(404).json({ message: 'Produto não encontrado' });
      } else {
        const admins = results[0];
        res.json(admins);
      }
    });
  });

// Rota para adicionar um novo produto
app.post('/admins', (req, res) => {
    const {id_admin, login, senha} = req.body;
  
    if (!id_admin || !login || !senha) {
      res.status(400).json({ error: 'Descricao, quantidade, and valor are required fields' });
      return;
    }
  
    // Query pra pegar o maior numero de id na tabela
    // connection.query('SELECT MAX(id) as maxId FROM admins', (err, maxIdResults) => {
    //   if (err) {
    //     console.error('Error retrieving max ID:', err);
    //     res.status(500).json({ error: 'Internal server error' });
    //     return;
    //   }
  
      // Coloca como proximo id o id maximo acrescido de 1
      // const nextId = (maxIdResults[0].maxId || 0) + 1;
  
      // Insere os dados
      const insertQuery = 'INSERT INTO admins (id_admin, login, senha) VALUES (?, ?, ?)';
      const values = [id_admin, login, senha];
  
      connection.query(insertQuery, values, (err, insertResults) => {
        if (err) {
          console.error('Error inserting data:', err);
          res.status(500).json({ error: 'Internal server error' });
          return;
        }
  
        res.status(201).json({ message: 'Data inserted successfully', id: id_admin});
      });
    });
  

// Rota para atualizar um produto
app.put('/admins/:id_admin', (req, res) => {
    const adminId = parseInt(req.params.id_admin);
    const updatedAdmin = req.body;
  
    // Verifica se o id existe
    const checkExistenceQuery = 'SELECT * FROM admins WHERE id_admin = ?';
    connection.query(checkExistenceQuery, [adminId], (err, results) => {
      if (err) {
        console.error('Error executing query:', err);
        res.status(500).json({ error: 'Internal server error' });
        return;
      }
  
      if (results.length === 0) {
        res.status(404).json({ message: 'Produto não encontrado' });
      } else {
        // Query pra fazer o update
        const updateQuery = 'UPDATE admins SET ? WHERE id_admin = ?';
        connection.query(updateQuery, [updatedAdmin, adminId], (err, updateResults) => {
          if (err) {
            console.error('Error executing update query:', err);
            res.status(500).json({ error: 'Internal server error' });
            return;
          }

          res.json({ ...updatedAdmin, id_admin: adminId });
        });
      }
    });
  });

// Rota para remover um produto
app.delete('/admins/:id_admin', (req, res) => {
    const adminId = parseInt(req.params.id_admin);
  
    // Verifica se o dado existe antes de deletar
    const checkExistenceQuery = 'SELECT * FROM admins WHERE id_admin = ?';
    connection.query(checkExistenceQuery, [adminId], (err, results) => {
      if (err) {
        console.error('Error executing query:', err);
        res.status(500).json({ error: 'Internal server error' });
        return;
      }
  
      if (results.length === 0) {
        res.status(404).json({ message: 'Produto não encontrado' });
      } else {
        // Query pra deletar o dado
        const deleteQuery = 'DELETE FROM admins WHERE id_admin = ?';
        connection.query(deleteQuery, [adminId], (err, deleteResults) => {
          if (err) {
            console.error('Error executing delete query:', err);
            res.status(500).json({ error: 'Internal server error' });
            return;
          }

          res.json({ message: 'Produto excluído com sucesso' });
        });
      }
    });
  });

// ROTAS PARA A PAGINA DE FORNECEDORES //
// Rota para listar todos os fornecedores
app.get("/fornecedores", (req,res) =>{
    const sqlQuery = 'SELECT * FROM fornecedores';

  // Query pra pegar todos os dados
  connection.query(sqlQuery, (err, results, fields) => {
    if (err) {
      console.error('Error executing query:', err);
      res.status(500).json({ error: 'Internal server error' });
      return;
    }
    res.json(results);
  });
})

app.get('/fornecedores/:id_forn', (req, res) => {
    const fornId = parseInt(req.params.id_forn);
  
    const sqlQuery = 'SELECT * FROM fornecedores WHERE id_forn = ?';
  
    connection.query(sqlQuery, [fornId], (err, results) => {
      if (err) {
        console.error('Error executing query:', err);
        res.status(500).json({ error: 'Internal server error' });
        return;
      }
  
      if (results.length === 0) {
        res.status(404).json({ message: 'Produto não encontrado' });
      } else {
        const fornecedores = results[0];
        res.json(fornecedores);
      }
    });
  });

// Rota para adicionar um novo produto
app.post('/fornecedores', (req, res) => {
    const {id_forn, nome, endereco, cnpj} = req.body;
  
    if (!id_forn || !nome || !endereco || !cnpj) {
      res.status(400).json({ error: 'Descricao, quantidade, and valor are required fields' });
      return;
    }
  
    // Query pra pegar o maior numero de id na tabela
    // connection.query('SELECT MAX(id) as maxId FROM fornecedores', (err, maxIdResults) => {
    //   if (err) {
    //     console.error('Error retrieving max ID:', err);
    //     res.status(500).json({ error: 'Internal server error' });
    //     return;
    //   }
  
      // Coloca como proximo id o id maximo acrescido de 1
      // const nextId = (maxIdResults[0].maxId || 0) + 1;
  
      // Insere os dados
      const insertQuery = 'INSERT INTO fornecedores (id_forn, nome, endereco, cnpj) VALUES (?, ?, ?, ?)';
      const values = [id_forn, nome, endereco, cnpj];
  
      connection.query(insertQuery, values, (err, insertResults) => {
        if (err) {
          console.error('Error inserting data:', err);
          res.status(500).json({ error: 'Internal server error' });
          return;
        }
  
        res.status(201).json({ message: 'Data inserted successfully', id: id_forn});
      });
    });
  

// Rota para atualizar um produto
app.put('/fornecedores/:id_forn', (req, res) => {
    const fornId = parseInt(req.params.id_forn);
    const updatedForn = req.body;
  
    // Verifica se o id existe
    const checkExistenceQuery = 'SELECT * FROM fornecedores WHERE id_forn = ?';
    connection.query(checkExistenceQuery, [fornId], (err, results) => {
      if (err) {
        console.error('Error executing query:', err);
        res.status(500).json({ error: 'Internal server error' });
        return;
      }
  
      if (results.length === 0) {
        res.status(404).json({ message: 'Produto não encontrado' });
      } else {
        // Query pra fazer o update
        const updateQuery = 'UPDATE fornecedores SET ? WHERE id_forn = ?';
        connection.query(updateQuery, [updatedForn, fornId], (err, updateResults) => {
          if (err) {
            console.error('Error executing update query:', err);
            res.status(500).json({ error: 'Internal server error' });
            return;
          }

          res.json({ ...updatedForn, id_forn: fornId });
        });
      }
    });
  });

// Rota para remover um produto
app.delete('/fornecedores/:id_forn', (req, res) => {
    const fornId = parseInt(req.params.id_forn);
  
    // Verifica se o dado existe antes de deletar
    const checkExistenceQuery = 'SELECT * FROM fornecedores WHERE id_forn = ?';
    connection.query(checkExistenceQuery, [fornId], (err, results) => {
      if (err) {
        console.error('Error executing query:', err);
        res.status(500).json({ error: 'Internal server error' });
        return;
      }
  
      if (results.length === 0) {
        res.status(404).json({ message: 'Produto não encontrado' });
      } else {
        // Query pra deletar o dado
        const deleteQuery = 'DELETE FROM fornecedores WHERE id_forn = ?';
        connection.query(deleteQuery, [fornId], (err, deleteResults) => {
          if (err) {
            console.error('Error executing delete query:', err);
            res.status(500).json({ error: 'Internal server error' });
            return;
          }

          res.json({ message: 'Produto excluído com sucesso' });
        });
      }
    });
  });

// ROTAS PARA A PAGINA DE USUARIOS //
// Rota para listar todos os usuarios
app.get("/usuarios", (req,res) =>{
    const sqlQuery = 'SELECT * FROM usuarios';

  // Query pra pegar todos os dados
  connection.query(sqlQuery, (err, results, fields) => {
    if (err) {
      console.error('Error executing query:', err);
      res.status(500).json({ error: 'Internal server error' });
      return;
    }
    res.json(results);
  });
})

app.get('/usuarios/:id_usuario', (req, res) => {
    const usuarioId = parseInt(req.params.id_usuario);
  
    const sqlQuery = 'SELECT * FROM usuarios WHERE id_usuario = ?';
  
    connection.query(sqlQuery, [usuarioId], (err, results) => {
      if (err) {
        console.error('Error executing query:', err);
        res.status(500).json({ error: 'Internal server error' });
        return;
      }
  
      if (results.length === 0) {
        res.status(404).json({ message: 'Produto não encontrado' });
      } else {
        const usuarios = results[0];
        res.json(usuarios);
      }
    });
  });

// Rota para adicionar um novo produto
app.post('/usuarios', (req, res) => {
    const {id_usuario, nome, email, senha} = req.body;
  
    if (!id_usuario || !nome || !email || !senha) {
      res.status(400).json({ error: 'Descricao, quantidade, and valor are required fields' });
      return;
    }
  
    // Query pra pegar o maior numero de id na tabela
    // connection.query('SELECT MAX(id) as maxId FROM usuarios', (err, maxIdResults) => {
    //   if (err) {
    //     console.error('Error retrieving max ID:', err);
    //     res.status(500).json({ error: 'Internal server error' });
    //     return;
    //   }
  
      // Coloca como proximo id o id maximo acrescido de 1
      // const nextId = (maxIdResults[0].maxId || 0) + 1;
  
      // Insere os dados
      const insertQuery = 'INSERT INTO usuarios (id_usuario, nome, email, senha) VALUES (?, ?, ?, ?)';
      const values = [id_usuario, nome, email, senha];
  
      connection.query(insertQuery, values, (err, insertResults) => {
        if (err) {
          console.error('Error inserting data:', err);
          res.status(500).json({ error: 'Internal server error' });
          return;
        }
  
        res.status(201).json({ message: 'Data inserted successfully', id: id_usuario});
      });
    });
  

// Rota para atualizar um produto
app.put('/usuarios/:id_usuario', (req, res) => {
    const usuarioId = parseInt(req.params.id_usuario);
    const updatedUsuario = req.body;
  
    // Verifica se o id existe
    const checkExistenceQuery = 'SELECT * FROM usuarios WHERE id_usuario = ?';
    connection.query(checkExistenceQuery, [usuarioId], (err, results) => {
      if (err) {
        console.error('Error executing query:', err);
        res.status(500).json({ error: 'Internal server error' });
        return;
      }
  
      if (results.length === 0) {
        res.status(404).json({ message: 'Produto não encontrado' });
      } else {
        // Query pra fazer o update
        const updateQuery = 'UPDATE usuarios SET ? WHERE id_usuario = ?';
        connection.query(updateQuery, [updatedUsuario, usuarioId], (err, updateResults) => {
          if (err) {
            console.error('Error executing update query:', err);
            res.status(500).json({ error: 'Internal server error' });
            return;
          }

          res.json({ ...updatedUsuario, id_usuario: usuarioId });
        });
      }
    });
  });

// Rota para remover um produto
app.delete('/usuarios/:id_usuario', (req, res) => {
    const usuarioId = parseInt(req.params.id_usuario);
  
    // Verifica se o dado existe antes de deletar
    const checkExistenceQuery = 'SELECT * FROM usuarios WHERE id_usuario = ?';
    connection.query(checkExistenceQuery, [usuarioId], (err, results) => {
      if (err) {
        console.error('Error executing query:', err);
        res.status(500).json({ error: 'Internal server error' });
        return;
      }
  
      if (results.length === 0) {
        res.status(404).json({ message: 'Produto não encontrado' });
      } else {
        // Query pra deletar o dado
        const deleteQuery = 'DELETE FROM usuarios WHERE id_usuario = ?';
        connection.query(deleteQuery, [usuarioId], (err, deleteResults) => {
          if (err) {
            console.error('Error executing delete query:', err);
            res.status(500).json({ error: 'Internal server error' });
            return;
          }

          res.json({ message: 'Produto excluído com sucesso' });
        });
      }
    });
  });
// Inicia o servidor
app.listen(port,() => {
    console.log(`Servidor iniciado na porta ${port}`);
})
