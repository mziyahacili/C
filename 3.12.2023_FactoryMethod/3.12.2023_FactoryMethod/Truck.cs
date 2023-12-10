namespace _3._12._2023_FactoryMethod;

public class Truck : IAutomobile
{
    private string _make;
    private readonly string _model;
    private string _color;

    public Truck(string make, string color)
    {
        _make = make;
        _model = "Truck";
        _color = color;
    }


    public string Make { get; set; }
    
    public string Model => _model;
    
    public string Color { get; set; }
    
    public string GetModel() => _model;
}