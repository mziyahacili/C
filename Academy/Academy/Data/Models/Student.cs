namespace Academy.Data.Models;

public class Student
{
    public string Id { get; set; } = Guid.NewGuid().ToString();
    public string FirstName { get; set; }
    public string LastName { get; set; }
    public DateTime DateOfBirth { get; set; }
    public string GroupId { get; set; }
    public Group Group { get; set; }  // Связь с группой
}








