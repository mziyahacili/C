using Academy.Data.Models;

public class Teacher
{
    public string Id { get; set; } = Guid.NewGuid().ToString();
    public string FirstName { get; set; }
    public string LastName { get; set; }
    public string Subject { get; set; }

   
    public string DepartmentId { get; set; }  
    public Department Department { get; set; }
}
