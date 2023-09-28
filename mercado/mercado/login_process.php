<?php // Include the database connection file
require_once("dbConnection.php");

// Get user input from the form
$username = $_POST['username'];
$password = $_POST['password'];

// Protect against SQL injection (better to use prepared statements)
$username = mysqli_real_escape_string($mysqli, $username);
$password = mysqli_real_escape_string($mysqli, $password);

// Query the database for the user
$query = "SELECT * FROM admin WHERE login='$username' AND senha='$password'";
$result = mysqli_query($mysqli, $query);

// Check if a row was returned (authentication success)
if (mysqli_num_rows($result) == 1) {
    // Authentication successful, redirect to a welcome page or dashboard
    header("Location: produto.php");
    exit();
} else {
    // Authentication failed, redirect back to the login page with an error message
    header("Location: login.php?error=1");
    exit();
}
?>

