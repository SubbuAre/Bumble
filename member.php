<?php
session_start();
if(!isset($_SESSION["sess_user"])){
    header("location:login.php");
} else {
?>
<!doctype html>
<html>
<head>
<title>Welcome</title>
</head>
<body>
<h2>Welcome, <?=$_SESSION['sess_user'];?>!</h2>
</body>
</html>
<?php
}
?>