<html>  
<body>  
<form method="post">  
    Please Enter a number:  <br><br>
    <input type="number" name="number">  
    <input type="submit" value="Submit">  
</form>  
</body>  
</html>  
<?php   
    if($_POST){  
        $number = $_POST['number'];   
        if(($number % 2) == 0){  
            echo "$number is an Even number";  
        }else{  
            echo "$number is Odd number";  
        }  
    }  
?>  