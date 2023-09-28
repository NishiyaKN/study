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
	
	// Check for empty fields
	if (empty($nome) || empty($categoria) || empty($quantidade)) {
		if (empty($name)) {
			echo "<font color='red'>Name field is empty.</font><br/>";
		}
		
		if (empty($age)) {
			echo "<font color='red'>Age field is empty.</font><br/>";
		}
		
		if (empty($email)) {
			echo "<font color='red'>Email field is empty.</font><br/>";
		}
	} else {
		// Update the database table
		$result = mysqli_query($mysqli, "UPDATE produto SET `nome` = '$nome', `categoria` = '$categoria', `quantidade` = '$quantidade', `preco` = '$preco' WHERE `id_produto` = $id");
		
		// Display success message
		echo "<p><font color='green'>Data updated successfully!</p>";
		echo "<a href='produto.php'>View Result</a>";
	}
}

