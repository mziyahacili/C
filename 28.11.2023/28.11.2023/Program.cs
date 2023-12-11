using System.Globalization;
using _28._11._2023;
using _28._11._2023.Classes;
using _28._11._2023.Creaters;
using _28._11._2023.Factories;


Console.WriteLine("Choose what furniture you want");
Console.WriteLine("1.Chair");
Console.WriteLine("2.Sofa");
Console.WriteLine("3.Table");

UInt16 choice = UInt16.Parse(Console.ReadLine());

switch (choice)
{
    case 1:
    {
        ChairCreater chairCreater = new();
        chairCreater.Style();
        
        break;
    }
    case 2:
    {
        SofaCreater sofaCreater = new();
        sofaCreater.Style();
        
        break;
    }
    case 3:
    {
        TableCreater tableCreater = new TableCreater();
        tableCreater.Style();
        
        break;
    }
}