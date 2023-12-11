

using _3._12._2023_FactoryMethod;
using _3._12._2023_FactoryMethod.Factories;


Console.WriteLine("Choose automobile model for create");

Console.WriteLine("1.Sedan");
Console.WriteLine("2.SUV");
Console.WriteLine("3.Truck");


UInt16 choice = UInt16.Parse(Console.ReadLine());


switch (choice)
{
    case 1:
    {
        IAutomobileFactory automobileFactory = new SedanFactory();
        Sedan sedan = automobileFactory.CreateAutomobile<Sedan>();
        Console.WriteLine(sedan.GetModel());
        break; 
    }
    case 2:
    {
        IAutomobileFactory automobileFactory = new SUVFactory();
        SUV suv = automobileFactory.CreateAutomobile<SUV>();
        Console.WriteLine(suv.GetModel());
        break;
    }
    case 3:
    {
        IAutomobileFactory automobileFactory = new TruckFactory();
        Truck truck = automobileFactory.CreateAutomobile<Truck>();
        Console.WriteLine(truck.GetModel());
        break;
    }
}
   







