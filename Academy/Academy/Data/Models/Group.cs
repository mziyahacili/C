namespace Academy.Data.Models;

public class Group
{
    public string Id { get; set; } = Guid.NewGuid().ToString();
    public string Name { get; set; }
    public string FacultyId { get; set; }
    public string TeacherId { get; set; }

    public Faculty Faculty { get; set; }  // Связь с факультетом
    public Teacher Teacher { get; set; }  // Связь с преподавателем
    public ICollection<Student> Students { get; set; }  // Связь со студентами
}
