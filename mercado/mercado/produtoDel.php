<?php
require_once("dbConnection.php");

// Pega o id a partir da URL
$id = $_GET['id'];

// Executa a delecao
$result = mysqli_query($mysqli, "DELETE FROM produto WHERE id_produto = $id");

// Volta pra pagina inicial
header("Location:produto.php");
?>
