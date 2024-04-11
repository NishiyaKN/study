<?php
require_once("dbConnection.php");

// Pega o id a partir da URL
$id = $_GET['id'];

// Executa a delecao
$result = mysqli_query($mysqli, "DELETE FROM forncedor WHERE id_forn = $id");

// Volta pra pagina inicial
header("Location:forncedor.php");
?>
