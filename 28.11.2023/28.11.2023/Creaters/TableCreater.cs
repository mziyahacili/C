using _28._11._2023.Classes;
using _28._11._2023.Classes.ModernStyle;
using _28._11._2023.Classes.VictorianStyle;
using _28._11._2023.Factories;
namespace _28._11._2023.Creaters;

public class TableCreater
{
    private ITable _table;

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
                IFurnitureFactory tableFactory = new ArtDecoFactory();
                _table = tableFactory.CreateTable();
                _table.PutItem();
                
                break;
            }
            case 2:
            {
                IFurnitureFactory tableFactory = new VictorianFactory();
                _table = tableFactory.CreateTable();
                _table.PutItem();
                
                break;
            }
            case 3:
            {
                IFurnitureFactory tableFactory = new ModernFactory();
                _table = tableFactory.CreateTable();
                _table.PutItem();
                
                break;
            }
        }
    }
}