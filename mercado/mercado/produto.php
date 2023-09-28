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

	<form action="produtoAdd.php" method="post" name="add">
		<table width="25%" border="0">
			<tr> 
				<td>Nome</td>
				<td><input type="text" name="nome"></td>
			</tr>
			<tr> 
				<td>Categoria</td>
				<td><input type="text" name="categoria"></td>
			</tr>
			<tr> 
				<td>Quantidade</td>
				<td><input type="text" name="quantidade"></td>
			</tr>
			<tr> 
				<td>Preço</td>
				<td><input type="text" name="preco"></td>
			</tr>
			<tr> 
				<td></td>
				<td><input type="submit" name="submit" value="Adicionar"></td>
			</tr>
		</table>
	</form>
	<table width='80%' border=0>
		<tr bgcolor='#DDDDDD'>
			<td><strong>Nome</strong></td>
			<td><strong>Categoria</strong></td>
			<td><strong>Quantidade</strong></td>
			<td><strong>Preço</strong></td>
			<td><strong>Ações</strong></td>
		</tr>
<script>
let campos = document.getElementsByTagName("input");
campos[4].addEventListener("click", ()=>{
for(let i = 0; i < campos.length -1; i++){
    if(campos[i].value === ""){
        alert("Preencha todos os campos");
        event.preventDefault();
        break;
    }
}
});

</script>
		<?php
		// Fetch the next row of a result set as an associative array
		while ($res = mysqli_fetch_assoc($result)) {
			echo "<tr>";
			echo "<td>".$res['nome']."</td>";
			echo "<td>".$res['categoria']."</td>";
			echo "<td>".$res['quantidade']."</td>";	
			echo "<td>".$res['preco']."</td>";	
			echo "<td><a href=\"produtoEdit.php?id=$res[id_produto]\">Editar</a> | 
			<a href=\"produtoDel.php?id=$res[id_produto]\" onClick=\"return confirm('Tem certeza que quer remover este item?')\">Remover</a></td>";
		}
		?>
	</table>
</body>
</html>
