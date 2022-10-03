<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Login Form</title>
  </head>
  <style>
    h1 {
      text-align: center;
      padding-bottom: 15px;
    }
    body {
      background-color: rgb(179, 234, 243);
    }
    .login {
      width: 350px;
      margin-left: auto;
      margin-right: auto;
      border: 3px solid rgb(110, 185, 138);
      padding: 34px;
      margin-top: 205px;
      background-color: rgb(199, 213, 148);
      padding-bottom: 80px;
    }
    input {
      margin-left: 35px;
    }
    button {
      align-items: center;
      position: relative;
      left: 230px;
    }
  </style>
  <body>
    <div class="login">
      <h1>User Logging</h1>
      <form action="loginvalidate.php" method="POST">
        <label for="username">Username</label>
        <input type="text" name="name" />
        <br /><br />
        <label for="password">Password</label>
        <input type="text" name="pw" /><br /><br />
        <button type="submit">Login</button>
      </form>
    </div>
  </body>
</html>
