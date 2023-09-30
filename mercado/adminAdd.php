<html>
<head>
	<title>Add Data</title>
</head>

<body>
<?php

// Conexao com o banco de dados
require_once("dbConnection.php");

if (isset($_POST['submit'])) {
    // Medida de seguranca, qualquer input digitado pelo usuario tera seus caracteres especiais escapados,
    // serao tratados como texto
	$login = mysqli_real_escape_string($mysqli, $_POST['login']);
	$senha = mysqli_real_escape_string($mysqli, $_POST['senha']);
		
    // Cria um novo id
    $id_arr = mysqli_query($mysqli, "select id_admin from admin order by id_admin desc");
    $id_old = mysqli_fetch_array($id_arr);
    $id = $id_old[0] + 1;
    echo $id;
    // Insere os dados no banco 
    $result = mysqli_query($mysqli, "INSERT INTO admin VALUES ('$id','$login', '$senha')");
		
    header("Location: admin.php");
}
?>
</body>
</html>
