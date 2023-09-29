<?php
// Include the database connection file
require_once("dbConnection.php");

// Fetch data in descending order (lastest entry first)
$result = mysqli_query($mysqli, "SELECT * FROM produto ORDER BY id_produto DESC");
    ini_set('display_errors', true);
    error_reporting(-1);
?>

<html>
<head>	
	<title>Mercado</title>
</head>

<body>
	<h2>Mercado</h2>
    <a href="login.php">Login</a>
    <h3>Produtos</h3>

	<table width='80%' border=0>
		<tr bgcolor='#DDDDDD'>
			<td><strong>Nome</strong></td>
			<td><strong>Categoria</strong></td>
			<td><strong>Quantidade</strong></td>
			<td><strong>Preço</strong></td>
		</tr>
<script>

</script>
		<?php
		// Fetch the next row of a result set as an associative array
		while ($res = mysqli_fetch_assoc($result)) {
			echo "<tr>";
			echo "<td>".$res['nome']."</td>";
			echo "<td>".$res['categoria']."</td>";
			echo "<td>".$res['quantidade']."</td>";	
			echo "<td>".$res['preco']."</td>";	
		}
		?>
	</table>
</body>
</html>

