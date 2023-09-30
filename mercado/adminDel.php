<?php
require_once("dbConnection.php");

// Pega o id a partir da URL
$id = $_GET['id'];

// Executa a delecao
$result = mysqli_query($mysqli, "DELETE FROM admin WHERE id_admin = $id");

// Volta pra pagina inicial
header("Location:admin.php");
?>
