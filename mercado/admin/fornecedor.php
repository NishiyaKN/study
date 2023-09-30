<?php
require_once("dbConnection.php");

// Pega todos os dados da tabela produto
$result = mysqli_query($mysqli, "SELECT * FROM fornecedores ORDER BY id_forn DESC");
    ini_set('display_errors', true);
    error_reporting(-1);
?>

<html>
<head>	
	<title>Mercado</title>
</head>

<body>
	<h2>Mercado</h2>

    <a href="/mercado/controleAdmin.php">Voltar</a>
	<form action="fornecedorAdd.php" method="post" name="add">
		<table width="25%" border="0">
			<tr> 
				<td>Nome</td>
				<td><input type="text" name="nome"></td>
			</tr>
			<tr> 
				<td>Endereço</td>
				<td><input type="text" name="endereco"></td>
			</tr>
			<tr> 
				<td>CNPJ</td>
				<td><input type="text" name="cnpj"></td>
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
			<td><strong>Endereço</strong></td>
			<td><strong>CNPJ</strong></td>
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
		// Pega os dados e preenche as tabelas
		while ($res = mysqli_fetch_assoc($result)) {
			echo "<tr>";
			echo "<td>".$res['nome']."</td>";
			echo "<td>".$res['endereco']."</td>";
			echo "<td>".$res['cnpj']."</td>";
			echo "<td><a href=\"fornecedorEdit.php?id=$res[id_forn]\">Editar</a> | 
			<a href=\"fornecedorDel.php?id=$res[id_forn]\" onClick=\"return confirm('Tem certeza que quer remover este item?')\">Remover</a></td>";
		}
		?>
	</table>
</body>
</html>
