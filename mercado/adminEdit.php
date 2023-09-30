<?php
require_once("dbConnection.php");

// Pega o id a partir da URL
$id = $_GET['id'];

// Seleciona todos os dados dessa id
$result = mysqli_query($mysqli, "SELECT * FROM admin WHERE id_admin = $id");

// Coloca os dados em uma array associativa 
$resultData = mysqli_fetch_assoc($result);

$login = $resultData['login'];
$senha = $resultData['senha'];
?>

<html>
<head>	
	<title>Editar admin</title>
</head>

<body>
    <h2>Editar admin</h2>
    <p>
	    <a href="admin.php">Voltar</a>
    </p>
	
	<form name="edit" method="post" action="adminEditAction.php">
		<table border="0">
			<tr> 
				<td>Login</td>
				<td><input type="text" name="login" value="<?php echo $login; ?>"></td>
			</tr>
			<tr> 
				<td>Senha</td>
				<td><input type="text" name="senha" value="<?php echo $senha; ?>"></td>
			</tr>
			<tr>
				<td><input type="hidden" name="id_admin" value=<?php echo $id; ?>></td>
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
