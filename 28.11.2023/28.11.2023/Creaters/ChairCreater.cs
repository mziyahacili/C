using _28._11._2023.Classes;
using _28._11._2023.Factories;

namespace _28._11._2023.Creaters;

public class ChairCreater
{
    private IChair _chair;
    
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
                IFurnitureFactory chairFactory = new ArtDecoFactory();
                _chair = chairFactory.CreateChair();
                _chair.Sit();
                
                break;
            }
            case 2:
            {
                IFurnitureFactory chairFactory = new VictorianFactory();
                _chair = chairFactory.CreateChair();
                _chair.Sit();
                break;
            }
            case 3:
            {
                IFurnitureFactory chairFactory = new ModernFactory();
                _chair = chairFactory.CreateChair();
                _chair.Sit();
                
                break;
            }
        }
    }
}