<?php 
require_once("dbConnection.php");

// Pega o input do usuario
$username = $_POST['username'];
$password = $_POST['password'];

// Escapa caracteres especiais como medida de seguranca 
$username = mysqli_real_escape_string($mysqli, $username);
$password = mysqli_real_escape_string($mysqli, $password);

// Faz um query para verificar se o login existe e esta certo
$query = "SELECT * FROM admin WHERE login='$username' AND senha='$password'";
$result = mysqli_query($mysqli, $query);

if (mysqli_num_rows($result) == 1) {
    // Se houver uma linha retornada quer dizer que esta correto o login e senha, vai pra tela de controle
    header("Location: controleAdmin.php");
    exit();
} else {
    // Se nao houver, volta pra pagina de login
    header("Location: login.php?error=1");
    exit();
}
?>

