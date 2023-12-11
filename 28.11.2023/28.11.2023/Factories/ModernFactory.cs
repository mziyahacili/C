using _28._11._2023.Classes.ModernStyle;

namespace _28._11._2023.Factories;

public class ModernFactory : IFurnitureFactory
{
    public IChair CreateChair()
    {
        return new ModernChair();
    }

    public ISofa CreateSofa()
    {
        return new ModernSofa();
    }

    public ITable CreateTable()
    {
        return new ModernTable();
    }
}