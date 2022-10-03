<?php
include_once 'dbconnection.php';


if(!$con){
    die('Could not Connect MySql Server:'.mysql_error());
}
$name = $_POST['name'];
$pw = $_POST['pw'];

$sql = "SELECT * FROM login WHERE username = '$name' AND password = '$pw'";

$result = mysqli_query($con,$sql) or die(mysql_error());
$numrows = mysqli_num_rows($result);
if($numrows > 0){   
    echo "<script type='text/javascript'>alert('Succesfully logged in!');
    window.location='loginwelcome.php';
    </script>";
    die();
    
}
else{
    echo "<script type='text/javascript'>alert('Wrong Username or Password');
    window.location='loginpage.php';
    </script>";
}   
?>