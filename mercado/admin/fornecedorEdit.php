<?php
require_once("dbConnection.php");

// Pega o id a partir da URL
$id = $_GET['id'];

// Seleciona todos os dados dessa id
$result = mysqli_query($mysqli, "SELECT * FROM fornecedor WHERE id_forn = $id");

// Coloca os dados em uma array associativa 
$resultData = mysqli_fetch_assoc($result);

$nome = $resultData['nome'];
$endereco = $resultData['endereco'];
$cnpj = $resultData['cnpj'];
?>

<html>
<head>	
	<title>Editar Admin</title>
</head>

<body>
    <h2>Editar Admin</h2>
    <p>
	    <a href="fornecedor.php">Voltar</a>
    </p>
	
	<form name="edit" method="post" action="fornecedorEditAction.php">
		<table border="0">
			<tr> 
				<td>Nome</td>
				<td><input type="text" name="nome" value="<?php echo $nome; ?>"></td>
			</tr>
			<tr> 
				<td>Endereco</td>
				<td><input type="text" name="email" value="<?php echo $endereco; ?>"></td>
			</tr>
			<tr> 
				<td>CNPJ</td>
				<td><input type="text" name="senha" value="<?php echo $cnpj; ?>"></td>
			</tr>
			<tr>
				<td><input type="hidden" name="id_fornecedor" value=<?php echo $id; ?>></td>
				<td><input type="submit" name="update" value="Atualizar"></td>
			</tr>
		</table>
	</form>
<script>
let campos = document.getElementsByTagName("input");
campos[5].addEventListener("click", ()=>{
for(let i = 0; i < campos.length -2; i++){
    if(campos[i].value === ""){
        alert("Preencha todos os campos");
        event.preventDefault();
        break;
    }
}
});
</script>
</body>
</html>
