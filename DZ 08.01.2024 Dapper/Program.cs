using System.Data;
using System.Data.SqlClient;
using Dapper;
using DZDapper;

var connectionString = "Data Source=localhost;Initial Catalog=Academy_21_12_2023; Integrated Security=True;";

using IDbConnection conn = new SqlConnection(connectionString);

#region Read
var selectSql = "SELECT * FROM Teachers";

var Teachers = conn.Query<Teacher>(selectSql);

foreach (var teacher in Teachers)
{
    Console.WriteLine($"{teacher.Id} {teacher.Name} {teacher.Surname} {teacher.Salary}");
}
#endregion

#region Create
var newTeacher = new Teacher
{
    Name = "Ziya",
    Surname = "Hacili",
    Salary = 50000
};

var insertSql = "INSERT INTO Teachers (Name, Surname, Salary) VALUES (@Name, @Surname, @Salary);";
conn.Execute(insertSql, newTeacher);

var selectSql = "SELECT * FROM Teachers;";
var teachers = conn.Query<Teacher>(selectSql);

foreach (var teacher in teachers)
{
    Console.WriteLine($"{teacher.Id} {teacher.Name} {teacher.Surname} {teacher.Salary}");
}
#endregion

#region Delete

var deleteSql = "DELETE FROM Teachers where Name = 'John'";
conn.Execute(deleteSql);

var selectSql = "SELECT * FROM Teachers;";
var teachers = conn.Query<Teacher>(selectSql);

foreach (var teacher in teachers)
{
    Console.WriteLine($"{teacher.Id} {teacher.Name} {teacher.Surname} {teacher.Salary}");
}

#endregion

#region Update

var updateSql = "UPDATE Teachers SET Salary = @NewSalary WHERE Name = @TeacherName";

var parameters = new { NewSalary = 500000, TeacherName = "Ziya" };

conn.Execute(updateSql, parameters);

var selectSql = "SELECT * FROM Teachers;";
var teachers = conn.Query<Teacher>(selectSql);

foreach (var teacher in teachers)
{
    Console.WriteLine($"{teacher.Id} {teacher.Name} {teacher.Surname} {teacher.Salary}");
}

#endregion