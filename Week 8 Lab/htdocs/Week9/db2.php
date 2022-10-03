<?php
include_once 'send.php';

$name = 'PasinduPrabhath';
$email = 't@gmail.com';
$phone = '1234567890';
$msg = 'HIs';

$sql = "INSERT INTO details(name,email,phone,msg) VALUES('$name','$email','$phone','$msg')";

if(mysqli_query($con,$sql)){
    echo "New record has been added succesfully!";
}
else{
    echo "Error:".$sql."-".mysqli_error($con);
}
mysqli_close($con);
?>