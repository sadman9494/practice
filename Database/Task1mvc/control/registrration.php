<html>
    <body>
        <?php

        $fname = $lname = $age= $designation=$email=$language1=$lamnguage2=$language3=$email="";
        if(isset($_POST["submit"]))
        {
            $fname = $_POST["firstname"];
            $lname = $_POST["lastname"];
            $age =   $_POST["age"];
            $desgnation = $_POST ["designation"];
            $language1 = $_POST["language1"];
            $language2 = $_POST["language2"];
            $language3 = $_POST["language3"];
            $password = $_POST["password"]
            $email = $_POST["email"];

           if(!isset($_post[$_POST["designation"])||empty($_POST["firstname"])||empty($_POST["lastname"]) || empty($_POST["age"] )|| empty($_POST["email"] || empty($_POST["password"])|| 
           !isset($_POST("language1")) || !isset($_POST("language2")) || !isset($_POST("language3")) )
           {
               echo "All field must be filled ";
           }
           else 
            {
                if strlen(($_POST["firstname"]) > 3 )
                {
                    echo "please give a valid name ";
                }
                
                if strlen($lname) > 3 )
                {
                    echo "please give a valid last name ";
                }

                if ($age > 18 )
                {
                    echo "please give a age ";
                }

                if empty($email )
                {
                    echo "please give a valid email ";
                }
                


            }
        }
        ?>
    </body>
</html>