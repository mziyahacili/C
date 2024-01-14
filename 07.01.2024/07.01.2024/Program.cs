
using System.Data;
using System.Data.SqlClient;
using Microsoft.Extensions.Configuration;


var builder = new ConfigurationBuilder();
builder.AddJsonFile("appsettings.json");


var config = builder.Build();
using SqlConnection conn = new(config.GetConnectionString("Default"));
conn.Open(); 

var command = new SqlCommand("select * from Students", conn);

using (var res = command.ExecuteReader())
{
    while (res.Read())
    {
        Console.WriteLine($"{res[0]}\t{res[1]}");
    }
 
}


command = new SqlCommand("select count(*) from Students", conn);

object result = command.ExecuteScalar();

if (result!=null)
{
    int intRes = (int)result;
    Console.WriteLine(intRes);
}
 

//ExecuteScalar
command = new SqlCommand("select AVG(age) from Students", conn);
object result2 = command.ExecuteScalar();

if (result2!= null)
{
    int res2Int = (int)result2;
    Console.WriteLine(res2Int);
}

command = new SqlCommand("select SUM(age) from Students", conn);
object res3 = command.ExecuteScalar();

if (res3!=null)
{
    int res3Int = (int)res3;
    Console.WriteLine(res3Int);
}

command = new SqlCommand("select count(*) from Students where age > 15", conn);
object res4 = command.ExecuteScalar();

if (res4!=null)
{
    int res4Int = (int)res4;
    Console.WriteLine(res4Int);
}

command = new SqlCommand("select name from Students where Age = 16",conn);
object res5 = command.ExecuteScalar();

if (res5!=null)
{
    string res5String = (string)res5;
    Console.WriteLine(res5String);
}



//ExecuteNonQuery - изменяет данные в базе данных

command = new SqlCommand("insert into Students(name,surname,age) values('Rustam','Niftaliyev',26)",conn);
int rowsAffected = command.ExecuteNonQuery();

if (rowsAffected > 0)
    Console.WriteLine("Request accepted!");
else
    Console.WriteLine("Request canceled!");

command = new SqlCommand("delete from Students where age = 16",conn);
int rowsDeleted = command.ExecuteNonQuery();

if (rowsDeleted > 0)
    Console.WriteLine("Request accepted!");
else
    Console.WriteLine("Request canceled!");


command = new SqlCommand("update Students set age = 20 where name = 'Elnur'",conn);
int rowsUpdate = command.ExecuteNonQuery();
    
if (rowsUpdate > 0)
    Console.WriteLine("Request accepted!");
else
    Console.WriteLine("Request canceled!");

