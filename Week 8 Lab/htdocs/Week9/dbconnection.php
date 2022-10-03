<?php
$host = 'localhost';
$username = 'root';
$pw = '';
$dbname = 'users';

$con =  mysqli_connect($host,$username,$pw,$dbname);

if(!$con){
    die('Could not Connect MySql Server:'.mysql_error());
}
?>