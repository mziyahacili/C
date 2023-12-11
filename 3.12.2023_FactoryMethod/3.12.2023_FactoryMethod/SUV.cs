namespace _3._12._2023_FactoryMethod;

public class SUV : IAutomobile
{
    public string Make { get; set; }
    public string Color { get; set; }
    
    public string GetModel() => "SUV";
}