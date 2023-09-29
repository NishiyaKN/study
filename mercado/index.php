<?php
require_once("dbConnection.php");

$result = mysqli_query($mysqli, "SELECT * FROM produto ORDER BY id_produto DESC");
// Mostra erros se houver
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
		// Vai pegando cada linha de dados e coloca em uma array associativa
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

