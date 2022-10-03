<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <div class="form">
    <h1>Please input your name:</h1>
    <form action="" name = "form" method = "get">
    
        <input type="text"  name="named">
  
        <button>Submit Name</button>
        </form>

    </div>
    <?php 
        if(isset($_GET['named'])): ?>
            Your name is 
                <?php echo $_GET["named"]; ?>
    <?php 
        endif; ?>
    
</body>

</html>