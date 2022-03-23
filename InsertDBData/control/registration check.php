<?php
include("../model/model.php");
if (isset($_POST["submit"]))
{

   $fanme = $_POST["fname"];
   $lname = $_POST["lname"];
   $age = $_POST["age"];
   $salary = $_POST["salary"];

   if (empty ($fanme) || empty($lname)|| empty ($age)||empty ($salary))
   {
        echo "please insert all field";
   }
   else
    {
        echo "anything";
        $mydb = new DB();
        $conobj=$mydb->opencon();

        $mydb->InsertData($fanme,$lname, $age,$salary,"person",$conobj);
        $mydb->closecon($conobj);
    }
}
?>