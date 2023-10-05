// Importando bibliotecas

const mysql = require('mysql2');

// Criando conexao com banco de dados local
const connection = mysql.createConnection({
  host: '127.0.0.1',
  user: 'root', 
  password: 'Nobara38!', 
  database: 'mercado_exemplo' 
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

app.get('/produtos/:id', (req, res) => {
    const productId = parseInt(req.params.id);
  
    const sqlQuery = 'SELECT * FROM produtos WHERE id = ?';
  
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
    const { descricao, quantidade, valor } = req.body;
  
    if (!descricao || !quantidade || !valor) {
      res.status(400).json({ error: 'Descricao, quantidade, and valor are required fields' });
      return;
    }
  
    // Query pra pegar o maior numero de id na tabela
    connection.query('SELECT MAX(id) as maxId FROM produtos', (err, maxIdResults) => {
      if (err) {
        console.error('Error retrieving max ID:', err);
        res.status(500).json({ error: 'Internal server error' });
        return;
      }
  
      // Coloca como proximo id o id maximo acrescido de 1
      const nextId = (maxIdResults[0].maxId || 0) + 1;
  
      // Insere os dados
      const insertQuery = 'INSERT INTO produtos (id, descricao, quantidade, valor) VALUES (?, ?, ?, ?)';
      const values = [nextId, descricao, quantidade, valor];
  
      connection.query(insertQuery, values, (err, insertResults) => {
        if (err) {
          console.error('Error inserting data:', err);
          res.status(500).json({ error: 'Internal server error' });
          return;
        }
  
        res.status(201).json({ message: 'Data inserted successfully', id: nextId });
      });
    });
  });
  

// Rota para atualizar um produto
app.put('/produtos/:id', (req, res) => {
    const productId = parseInt(req.params.id);
    const updatedProduto = req.body;
  
    // Verifica se o id existe
    const checkExistenceQuery = 'SELECT * FROM produtos WHERE id = ?';
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
        const updateQuery = 'UPDATE produtos SET ? WHERE id = ?';
        connection.query(updateQuery, [updatedProduto, productId], (err, updateResults) => {
          if (err) {
            console.error('Error executing update query:', err);
            res.status(500).json({ error: 'Internal server error' });
            return;
          }

          res.json({ ...updatedProduto, id: productId });
        });
      }
    });
  });

// Rota para remover um produto
app.delete('/produtos/:id', (req, res) => {
    const productId = parseInt(req.params.id);
  
    // Verifica se o dado existe antes de deletar
    const checkExistenceQuery = 'SELECT * FROM produtos WHERE id = ?';
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
        const deleteQuery = 'DELETE FROM produtos WHERE id = ?';
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
  

// Inicia o servidor
app.listen(port,() => {
    console.log(`Servidor iniciado na porta ${port}`);
})
