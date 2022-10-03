<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Print</title>
  </head>
  <body>
    <form name="myform" action="validation.php" method="POST">
      <table>
        <tr>
          <td><label for="id">ID</label></td>
          <td><input type="number" name="id" /></td>
        </tr>
        <tr>
          <td><label for="Name">Name</label></td>
          <td><input type="text" name="name" /></td>
        </tr>
        <tr>
          <td><label for="Age">Age</label></td>
          <td><input type="number" name="age" /></td>
        </tr>
        <tr>
          <td><label for="Registered">Registered</label></td>
          <td><input type="radio" name="bullet" value="1" />Yes</td>
          <td><input type="radio" name="bullet" value="0" />No</td>
        </tr>
      </table>
      <button type="submit" onclick="validation()">Print ID</button>
    </form>
    <!-- <script>
      function validation() {
        if (document.myform.id.value == 0) {
          alert("gg");
          window.location = "screen.html";
        }
      }
    </script> -->
  </body>
</html>
