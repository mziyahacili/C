
namespace Academy.Data.Models;

public class Faculty
{
    public string Id { get; set; } = Guid.NewGuid().ToString();
    public string Name { get; set; }
    public ICollection<Group> Groups { get; set; }  // Связь с группами
}
