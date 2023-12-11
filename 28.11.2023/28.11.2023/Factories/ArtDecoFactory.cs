using _28._11._2023.Classes;

namespace _28._11._2023.Factories;

public class ArtDecoFactory : IFurnitureFactory
{
    public IChair CreateChair()
    {
        return new ArtDecoChair();
    }

    public ISofa CreateSofa()
    {
        return new ArtDecoSofa();
    }

    public ITable CreateTable()
    {
        return new ArtDecoTable();
    }
}