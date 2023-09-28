<html>
<head>
	<title>Add Data</title>
</head>

<body>
<?php
// Include the database connection file
require_once("dbConnection.php");

if (isset($_POST['submit'])) {
	// Escape special characters in string for use in SQL statement	
	$nome = mysqli_real_escape_string($mysqli, $_POST['nome']);
	$categoria = mysqli_real_escape_string($mysqli, $_POST['categoria']);
	$quantidade = mysqli_real_escape_string($mysqli, $_POST['quantidade']);
	$preco = mysqli_real_escape_string($mysqli, $_POST['preco']);
		
	// Check for empty fields
	if (empty($nome) || empty($categoria) || empty($quantidade) || empty($preco)) {
		if (empty($name)) {
			echo "<font color='red'>Name field is empty.</font><br/>";
		}
		
		if (empty($age)) {
			echo "<font color='red'>Age field is empty.</font><br/>";
		}
		
		if (empty($email)) {
			echo "<font color='red'>Email field is empty.</font><br/>";
		}
		
		// Show link to the previous page
		echo "<br/><a href='javascript:self.history.back();'>Go Back</a>";
	} else { 
		// If all the fields are filled (not empty) 

        // Create a new, valid id
        /* $id_count = mysqli_query($mysqli, "select count(id_produto) from produto"); */
        /* $id_old = mysqli_fetch_array($id_count); */
        /* $id = $id_old[0] + 1; */
        $id_arr = mysqli_query($mysqli, "select id_produto from produto order by id_produto desc");
        $id_old = mysqli_fetch_array($id_arr);
        $id = $id_old[0] + 1;
        echo $id;
		// Insert data into database
		$result = mysqli_query($mysqli, "INSERT INTO produto VALUES ('$id','$nome', '$categoria', '$quantidade','$preco')");
		
		// Display success message
        header("Location: index.php");
	}
}
?>
</body>
</html>
