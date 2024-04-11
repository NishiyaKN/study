<?php
// Include the database connection file
require_once("dbConnection.php");

if (isset($_POST['update'])) {
	// Escape special characters in a string for use in an SQL statement
	$id = mysqli_real_escape_string($mysqli, $_POST['id_usuario']);
	$nome = mysqli_real_escape_string($mysqli, $_POST['nome']);
	$email = mysqli_real_escape_string($mysqli, $_POST['email']);
	$senha = mysqli_real_escape_string($mysqli, $_POST['senha']);
	
    $result = mysqli_query($mysqli, "UPDATE usuario SET `nome` = '$nome', `email` = '$email', `senha` = '$senha' WHERE `id_usuario` = $id");
    header("Location: usuario.php");
}

