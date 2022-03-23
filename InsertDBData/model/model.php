<?php
class DB
{

  function opencon()
  {
    $DBHostname = "localhost";
    $DBUsername = "root";
    $DBpass = "";
    $DBName = "testdb2";
    $conn = new mysqli($DBHostname , $DBUsername ,$DBpass , $DBName);
    if ($conn->connect_error)
    {
        die( "connection was succesfull");
    
    }
    return $conn;
  }



 function InsertData($fname ,$lname,$age,$salary,$tablename,$conn)
 {
     echo" enterde";
  $sqlstr = "INSERT INTO $tablename(fname,lname,age,salary) VALUES ('$fname','$lname',$age,$salary)";
   if($conn->query($sqlstr)=== TRUE)
    {
    echo "Data inserted";
     }
   else
   {
    "filed to insert".$conn->error;
   }
 }

function Closecon($conn)
{
    $conn->close();
}


}


?>