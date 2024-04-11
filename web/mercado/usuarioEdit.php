<?php
require_once("dbConnection.php");

// Pega o id a partir da URL
$id = $_GET['id'];

// Seleciona todos os dados dessa id
$result = mysqli_query($mysqli, "SELECT * FROM usuario WHERE id_usuario = $id");

// Coloca os dados em uma array associativa 
$resultData = mysqli_fetch_assoc($result);

$nome = $resultData['nome'];
$email = $resultData['email'];
$senha = $resultData['senha'];
?>

<html>
<head>	
	<title>Editar usuario</title>
</head>

<body>
    <h2>Editar usuario</h2>
    <p>
	    <a href="usuario.php">Voltar</a>
    </p>
	
	<form name="edit" method="post" action="usuarioEditAction.php">
		<table border="0">
			<tr> 
				<td>Nome</td>
				<td><input type="text" name="nome" value="<?php echo $nome; ?>"></td>
			</tr>
			<tr> 
				<td>Email</td>
				<td><input type="text" name="email" value="<?php echo $email; ?>"></td>
			</tr>
			<tr> 
				<td>Senha</td>
				<td><input type="text" name="senha" value="<?php echo $senha; ?>"></td>
			</tr>
			<tr>
				<td><input type="hidden" name="id_usuario" value=<?php echo $id; ?>></td>
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
