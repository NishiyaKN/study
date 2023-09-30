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
	$endereco = mysqli_real_escape_string($mysqli, $_POST['endereco']);
	$cnpj = mysqli_real_escape_string($mysqli, $_POST['cnpj']);
		
    // Cria um novo id
    $id_arr = mysqli_query($mysqli, "select id_forn from fornecedor order by id_forn desc");
    $id_old = mysqli_fetch_array($id_arr);
    $id = $id_old[0] + 1;
    echo $id;
    // Insere os dados no banco 
    $result = mysqli_query($mysqli, "INSERT INTO fornecedor VALUES ('$id','$nome', '$endereco', '$cnpj')");
		
    header("Location: fornecedor.php");
}
?>
</body>
</html>
