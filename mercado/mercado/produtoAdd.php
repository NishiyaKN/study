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
	$categoria = mysqli_real_escape_string($mysqli, $_POST['categoria']);
	$quantidade = mysqli_real_escape_string($mysqli, $_POST['quantidade']);
	$preco = mysqli_real_escape_string($mysqli, $_POST['preco']);
		
	// Verifica se existe algum campo vazio
	if (empty($nome) || empty($categoria) || empty($quantidade) || empty($preco)) {
        echo "<font color='red'>Preencha todos os campos.</font><br/>";

		// Mostra link para retornar a pagina principal
		echo "<br/><a href='javascript:self.history.back();'>Go Back</a>";
    } 
    else { 
        // Cria um novo id
        $id_arr = mysqli_query($mysqli, "select id_produto from produto order by id_produto desc");
        $id_old = mysqli_fetch_array($id_arr);
        $id = $id_old[0] + 1;
        echo $id;
        // Insere os dados no banco 
		$result = mysqli_query($mysqli, "INSERT INTO produto VALUES ('$id','$nome', '$categoria', '$quantidade','$preco')");
		
header("Location: produto.php");
	}
}
?>
</body>
</html>
