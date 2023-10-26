// Importando bibliotecas
const express = require("express");
const cors = require("cors");
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

// Criacao do servidor express
const app = express();
const port = 3000;

// Configuracao do express
app.use(express.json());

// Configuracao do cors
app.use(cors());

let produtos = [
    {id: 1, descricao: "Teclado",quantidade: 25, valor: 20.00},
    {id: 2, descricao: "Mouse",quantidade: 41, valor: 10.00},
    {id: 3, descricao: "Monitor",quantidade: 5, valor: 200.00},
];

// Rota para listar todos os produtos
app.get("/produtos", (req,res) =>{
    console.log("get");
    // Retorna uma lista de produtos
    res.json(produtos);
})

//Rota para obter um produto por ID
app.get("/produtos/:id", (req,res) =>{
    // Obtem o ID
    const id = parseInt(req.params.id);
    // Procura o produto no array
    const produto = produtos.find((produto) => produto.id === id);
    // Retorna o produto encontrado ou um erro
    if(produto){
        res.json(produto);
    }
    else{
        res.status(404).json({message: "Produto nao encontrado"});
    }
});

// Rota para adicionar um novo produto
app.post("/produtos", (req,res) =>{
    // Obtem os dados do produto
    const newproduto = req.body;
    // Adiciona o produto ao array
    produtos.push(newproduto);
    // Retorna o novo produto
    res.status(201).json(newproduto);
    const query = 'INSERT INTO users SET ?';
connection.query(query, user, (error, results, fields) => {
    if (error) {
        console.error('Erro ao inserir usuário:', error);
        return;
    }
    console.log('Usuário inserido com sucesso! ID:', results.insertId);
});
});

// Rota para atualizar um produto
app.put("/produtos/:id",(req,res)=> {
    // Obtem o ID do produto
    const id = parseInt(req.params.id);
    // Obtem os dados do produto
    const updatedproduto = req.body;
    // Procura o produto no array
    const index = produtos.findIndex((produto)=>produto.id === id);
    // Atualiza o produto encontrado ou retorna um erro
    if (index !== -1){
        produtos[index] = { ...produtos[index], ...updatedproduto};
        res.json(produtos[index]);
    }
    else{
        res.status(404).json({message:"Produto nao encontrado"});
    }
});
// Rota para remover um produto
app.delete("/produtos/:id", (req,res) =>{
    // Obtem o ID do produto
    const id = parseInt(req.params.id);
    // Procura o produto no array
    const index = produtos.findIndex((produto) => produto.id === id);
    // Remove o produto encontrado ou retorna um erro
    if(index !== -1){
        const removedproduto = produtos.splice(index,1);
        res.json(removedproduto[0]);
    }
    else{
        res.status(404).json({message: "Produto nao encontrado"});
    }
});

// Inicia o servidor
app.listen(port,() => {
    console.log(`Servidor iniciado na porta ${port}`);
})
