using System.Text;

namespace _3._12._2023_Proxy;

public class User
{
    public string Id { get; set; }
    public string Name { get; set; }
    public string Surname { get; set; }

    public override string ToString() =>
        new StringBuilder()
            .AppendLine(Id)
            .AppendLine(Name)
            .AppendLine(Surname)
            .ToString();
    
}