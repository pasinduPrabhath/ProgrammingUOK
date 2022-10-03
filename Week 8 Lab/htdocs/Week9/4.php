<?php
include_once 'send.php';

$sql = "SELECT * FROM details";

$query = mysqli_query($con,$sql);

if(!$query)
{
    echo "Query does not work." .mysqli_error($con);die;
}

while ($data = mysqli_fetch_array($query)){
    echo "Name =".$data['name']."<br>";
    echo "Email =".$data['email']."<br>";
    echo "Phone =".$data['phone']."<br>";
    echo "Message =".$data['msg']."<br>";
}
?>