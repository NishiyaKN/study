<?php
require_once("dbConnection.php");

// Pega todos os dados da tabela produto
$result = mysqli_query($mysqli, "SELECT * FROM usuario ORDER BY id_usuario DESC");
    ini_set('display_errors', true);
    error_reporting(-1);
?>

<html>
<head>	
	<title>Alterar usuario</title>
</head>

<body>
	<h2>Alterar usuario</h2>

    <a href="/mercado/controleAdmin.php">Voltar</a>
	<form action="usuarioAdd.php" method="post" name="add">
		<table width="25%" border="0">
			<tr> 
				<td>Nome</td>
				<td><input type="text" name="nome"></td>
			</tr>
			<tr> 
				<td>Email</td>
				<td><input type="text" name="email"></td>
			</tr>
			<tr> 
				<td>Senha</td>
				<td><input type="text" name="senha"></td>
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
			<td><strong>Email</strong></td>
			<td><strong>Senha</strong></td>
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
			echo "<td>".$res['email']."</td>";
			echo "<td>".$res['senha']."</td>";
			echo "<td><a href=\"usuarioEdit.php?id=$res[id_usuario]\">Editar</a> | 
			<a href=\"usuarioDel.php?id=$res[id_usuario]\" onClick=\"return confirm('Tem certeza que quer remover este item?')\">Remover</a></td>";
		}
		?>
	</table>
</body>
</html>
