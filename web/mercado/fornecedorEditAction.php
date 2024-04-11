<?php
// Include the database connection file
require_once("dbConnection.php");

if (isset($_POST['update'])) {
	// Escape special characters in a string for use in an SQL statement
	$id = mysqli_real_escape_string($mysqli, $_POST['id_forn']);
	$nome = mysqli_real_escape_string($mysqli, $_POST['nome']);
	$endereco = mysqli_real_escape_string($mysqli, $_POST['endereco']);
	$cnpj = mysqli_real_escape_string($mysqli, $_POST['cnpj']);
	
    $result = mysqli_query($mysqli, "UPDATE fornecedor SET `nome` = '$nome', `endereco` = '$endereco', `cnpj` = '$cnpj' WHERE `id_forn` = $id");
    header("Location: fornecedor.php");
}

