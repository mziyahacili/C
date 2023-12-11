using _28._11._2023.Factories;
namespace _28._11._2023.Creaters;

public class SofaCreater
{
    private ISofa _sofa;

    public void Style()
    {
        Console.WriteLine("Сhoose what style you want");

        
        Console.WriteLine("1.Art-deco style");
        Console.WriteLine("2.Victorian style");
        Console.WriteLine("3.Modern style");

        UInt16 choiceStyle = UInt16.Parse(Console.ReadLine());

        switch (choiceStyle)
        {
            case 1:
            {
                IFurnitureFactory sofaFactory = new ArtDecoFactory();
                _sofa = sofaFactory.CreateSofa();
                _sofa.Relax();
                
                break;
            }
            case 2:
            {
                IFurnitureFactory sofaFactory = new VictorianFactory();
                _sofa = sofaFactory.CreateSofa();
                _sofa.Relax();
                
                break;
            }
            case 3:
            {
                IFurnitureFactory sofaFactory = new ModernFactory();
                _sofa = sofaFactory.CreateSofa();
                _sofa.Relax();
                
                break;
            }
        }
    }
}