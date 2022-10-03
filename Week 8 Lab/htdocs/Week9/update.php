<?php
include_once 'send.php';

$sql = "UPDATE contact SET name = 'bimal' WHERE id=0";

$querry = mysqli_query($con,$sql);
if(!query){
    echo "Query does not work".mysqli_error($con);die;
}
else
{
    echo "Data Successfully Updated";
}