<?php
// Include the database connection file
require_once("dbConnection.php");

if (isset($_POST['update'])) {
	// Escape special characters in a string for use in an SQL statement
	$id = mysqli_real_escape_string($mysqli, $_POST['id_admin']);
	$login = mysqli_real_escape_string($mysqli, $_POST['login']);
	$senha = mysqli_real_escape_string($mysqli, $_POST['senha']);
	
    $result = mysqli_query($mysqli, "UPDATE admin SET `login` = '$login', `senha` = '$senha' WHERE `id_admin` = $id");
    header("Location: admin.php");
}

