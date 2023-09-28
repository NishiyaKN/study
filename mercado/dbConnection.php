<?php
$databaseHost = '127.0.0.1'; 
$databaseName = 'mercadao';
$databaseUsername = 'root';
$databasePassword = 'Nobara38!';

    ini_set('display_errors', true);
    error_reporting(-1);
$mysqli = mysqli_connect($databaseHost, $databaseUsername, $databasePassword, $databaseName);
?>
