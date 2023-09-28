<?php
// Include the database connection file
require_once("dbConnection.php");

if (isset($_POST['update'])) {
	// Escape special characters in a string for use in an SQL statement
	$id = mysqli_real_escape_string($mysqli, $_POST['id_produto']);
	$nome = mysqli_real_escape_string($mysqli, $_POST['nome']);
	$categoria = mysqli_real_escape_string($mysqli, $_POST['categoria']);
	$quantidade = mysqli_real_escape_string($mysqli, $_POST['quantidade']);	
	$preco = mysqli_real_escape_string($mysqli, $_POST['preco']);	
	
    $result = mysqli_query($mysqli, "UPDATE produto SET `nome` = '$nome', `categoria` = '$categoria', `quantidade` = '$quantidade', `preco` = '$preco' WHERE `id_produto` = $id");
    header("Location: produto.php");
}

