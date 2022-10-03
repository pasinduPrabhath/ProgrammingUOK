<!DOCTYPE html>
<html>
<head>
	<title> Form </title>
	<style> 
	Body {
  		font-family: Calibri, Helvetica, sans-serif;
  		background-image: url('03_1.jpg');
  		background-repeat: no-repeat;
  		background-attachment: fixed;  
  		background-size: cover;
		}
	button { 
       	background-color:#210EAF; 
       	width: 100%;
       	color: white; 
        	padding: 15px; 
        	margin: 10px 0px; 
        	border: none; 
        	cursor: pointer; 
         	} 
 	form { 
        	border: 3px solid #f1f1f1; 
    		} 
 
	input[type=text], input[type=email], input[type=number] { 
        	width: 100%; 
        	margin: 8px 0;
        	padding: 12px 20px; 
        	display: inline-block; 
        	border: 2px solid green; 
        	box-sizing: border-box; 
    		}
 	button:hover { 
        	opacity: 0.7; 
    		} 
    
 	.container { 
        	padding: 25px; 
        	background-color: lightblue;
    		} 
	</style>
</head>
<body>
	<h1> Contact Form </h1>
	<form>
      	<div class = "container">
     			<label>Name : </label> 
			<input type="text" name="name" placeholder= "Name">
			<label>Email : </label> 
			<input type="email" name="email" placeholder= "Email">
			<label>Phone : </label> 
			<input type="number" name="phone" placeholder= "Phone No">
			<label>Message : </label> 
			<input type="text" name="msg" placeholder= "Your Message Here"></textarea>
			<button type="submit" name="submit">Send</button>
         	</div>
	</form>
</body>
</html>