namespace _3._12._2023_FactoryMethod;

public interface IAutomobile
{
    public string Make { get; set; }
    public string Model{ get;}
    public string Color { get; set; }
    
    public string GetModel();
}