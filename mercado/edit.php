<?php
// Include the database connection file
require_once("dbConnection.php");

// Get id from URL parameter
$id = $_GET['id'];

// Select data associated with this particular id
$result = mysqli_query($mysqli, "SELECT * FROM produto WHERE id_produto = $id");

// Fetch the next row of a result set as an associative array
$resultData = mysqli_fetch_assoc($result);

$nome = $resultData['nome'];
$categoria = $resultData['categoria'];
$quantidade = $resultData['quantidade'];
$preco = $resultData['preco'];
?>

<html>
<head>	
	<title>Editar Produto</title>
</head>

<body>
    <h2>Editar Produto</h2>
    <p>
	    <a href="index.php">Home</a>
    </p>
	
	<form name="edit" method="post" action="editAction.php">
		<table border="0">
			<tr> 
				<td>Nome</td>
				<td><input type="text" name="nome" value="<?php echo $nome; ?>"></td>
			</tr>
			<tr> 
				<td>Descrição</td>
				<td><input type="text" name="categoria" value="<?php echo $categoria; ?>"></td>
			</tr>
			<tr> 
				<td>Quantidade</td>
				<td><input type="text" name="quantidade" value="<?php echo $quantidade; ?>"></td>
			</tr>
			<tr> 
				<td>Preço</td>
				<td><input type="text" name="preco" value="<?php echo $preco; ?>"></td>
			</tr>
			<tr>
				<td><input type="hidden" name="id_produto" value=<?php echo $id; ?>></td>
				<td><input type="submit" name="update" value="Update"></td>
			</tr>
		</table>
	</form>
</body>
</html>
