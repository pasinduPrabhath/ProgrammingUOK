<?php
include_once 'connection.php';

    $name = $_POST['name'];
	$id = $_POST['id']; 
	$age = $_POST['age'];
    $bullet = $_POST['bullet'];

	$qry = "SELECT * FROM details WHERE studentId = '$id' AND Name = '$name'";

    if($name == "" || $id == "" || $age == ""){
        echo "<script type='text/javascript'>alert('Please fill all details!');
        window.location ='screen.php'
        </script>";
    }
    if($age > 24){
        echo "<script type='text/javascript'>alert('Sorry! Age should be less than 24');
        window.location ='screen.php'
        </script>";
    }
    if($bullet == 0){
        echo "<script type='text/javascript'>alert('You should register first!');
        window.location ='screen.php'
        </script>";
    }
   
	$result = mysqli_query($con,$qry);
	$resultCount = mysqli_num_rows($result);

    if($resultCount){
        echo "Succesfully Printed!";
    }
    else{
        echo"Invalid User!";
    }

?>