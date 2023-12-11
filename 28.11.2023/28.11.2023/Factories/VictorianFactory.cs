using _28._11._2023.Classes.ModernStyle;
using _28._11._2023.Classes.VictorianStyle;

namespace _28._11._2023.Factories;

public class VictorianFactory : IFurnitureFactory
{
    public IChair CreateChair()
    {
        return new VictorianChair();
    }

    public ISofa CreateSofa()
    {
        return new VictorianSofa();
    }

    public ITable CreateTable()
    {
        return new VictorianTable();
    }
}