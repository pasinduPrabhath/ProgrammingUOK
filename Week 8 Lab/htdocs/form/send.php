<?php
$host = "localhost";
$user = "root";
$pass = "";
$db = "form";

	$con = new mysqli($host,$user,$pass,$db);
	if (!$con)
	{
		echo "There are some problems while connecting the database";
	}
	// There are no errors, so let's get data from the form

	$name = $_POST['name'];
	$email = $_POST['email']; 
	$phone = $_POST['phone'];
	$msg = $_POST['msg'];

	// Now we have collected the form data to variables
	// Let's insert them to the table

	$qry = "INSERT INTO `contact`(`name`, `email`, `phone`, `msg`) VALUES ('$name','$email',$phone,'$msg')";

	$insert = mysqli_query($con,$qry);
	if(!$insert)
	{
		echo "There are some problems while inserting data";
	}
	else
	{
		echo "Data Inserted";
	}
	if(mysqli_query($con, $qry)){
		$last_id = mysqli_insert_id($con);
		echo "New Record Created Succesfullly. Last inserted ID is:".$last_id;
	}else{
		echo "Error: ".$qry."<br>".mysqli_error($con);
	}
?>