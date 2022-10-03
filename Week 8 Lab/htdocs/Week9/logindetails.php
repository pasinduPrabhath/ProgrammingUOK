<?php
include_once 'dbconnection.php';

$name = 'user5';
$pw = 'abcd5';

$sql = "INSERT INTO login(username,password) VALUES ('$name','$pw')";

if(mysqli_query($con,$sql)){
    echo "New record has been succesfully updated!";
}
else{
    echo "Error:"."-".mysqli_error($con);
}
mysqli_close($con);
?>