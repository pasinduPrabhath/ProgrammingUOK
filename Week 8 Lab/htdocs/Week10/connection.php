<?php
$host = "localhost";
$user = "root";
$pass = "";
$db = "idprint";

	$con = new mysqli($host,$user,$pass,$db);
	if (!$con)
	{
		echo "There are some problems while connecting the database";
	}
?>