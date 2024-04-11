<html>
<head>
	<title>Add Data</title>
</head>

<body>
<?php

// Conexao com o banco de dados
require_once("dbConnection.php");

// Verifica se no form do produto.php foi clicado o botao pra adicionar
if (isset($_POST['submit'])) {
    // Medida de seguranca, qualquer input digitado pelo usuario tera seus caracteres especiais escapados,
    // serao tratados como texto
	$nome = mysqli_real_escape_string($mysqli, $_POST['nome']);
	$email = mysqli_real_escape_string($mysqli, $_POST['email']);
	$senha = mysqli_real_escape_string($mysqli, $_POST['senha']);
		
    // Cria um novo id
    $id_arr = mysqli_query($mysqli, "select id_usuario from usuario order by id_usuario desc");
    $id_old = mysqli_fetch_array($id_arr);
    $id = $id_old[0] + 1;
    echo $id;
    // Insere os dados no banco 
    $result = mysqli_query($mysqli, "INSERT INTO usuario VALUES ('$id','$nome', '$email', '$senha')");
		
    header("Location: usuario.php");
}
?>
</body>
</html>
