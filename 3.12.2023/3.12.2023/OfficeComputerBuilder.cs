using System.Runtime.CompilerServices;
using System.Threading.Channels;

namespace _3._12._2023;

public class OfficeComputerBuilder : IComputerBuilder
{
    private Computer _computer;

    public OfficeComputerBuilder()
    {
        _computer = new();
    }
    public void BuildMotherboard()
    {
        Console.WriteLine("Enter office motherboard for office pc");

        Console.WriteLine("1.ASUS Prime B450M-A/CSM");
        Console.WriteLine("2.GIGABYTE B550M DS3H");
        Console.WriteLine("3.GIGABYTE B450 AORUS M");
        
        UInt16 choice = UInt16.Parse(Console.ReadLine());
        switch (choice)
        {
            case 1:
                _computer.Motherboard = "ASUS Prime B450M-A/CSM";
                _computer.Motherboard += "\n";
                break;
            case 2:
                _computer.Motherboard = "GIGABYTE B550M DS3H";
                _computer.Motherboard += "\n";
                break;
            case 3:
                _computer.Motherboard = "GIGABYTE B450 AORUS M";
                _computer.Motherboard += "\n";
                break;
        }
    }
                        
    public void BuildCPU()
    {
        Console.WriteLine("Enter CPU for office pc");

        Console.WriteLine("1.Intel Core i3-10100");
        Console.WriteLine("2.AMD Ryzen 3 3200G");
        Console.WriteLine("3.Intel Pentium Gold G6400");
        
        UInt16 choice = UInt16.Parse(Console.ReadLine());
        switch (choice)
        {
            case 1:
                _computer.CPU = "Intel Core i3-10100";
                _computer.CPU += "\n";
                break;
            case 2:
                _computer.CPU = "AMD Ryzen 3 3200G";
                _computer.CPU += "\n";
                break;
            case 3:
                _computer.CPU = "Intel Pentium Gold G6400";
                _computer.CPU += "\n";
                break;
        }
    }

    public void BuildRAM()
    {
        Console.WriteLine("Enter RAM for office pc");

        Console.WriteLine("1.Crucial Ballistix Sport LT DDR4");
        Console.WriteLine("2.Team T-Force Vulcan Z DDR4");
        Console.WriteLine("3.Kingston HyperX Fury DDR4");
        Console.WriteLine("4.G.Skill Ripjaws V Series DDR4");
        
        UInt16 choice = UInt16.Parse(Console.ReadLine());
        switch (choice)
        {
            case 1:
                _computer.RAM = "Crucial Ballistix Sport LT DDR4";
                _computer.RAM += "\n";
                break;
            case 2:
                _computer.RAM = "Team T-Force Vulcan Z DDR4";
                _computer.RAM += "\n";
                break;
            case 3:
                _computer.RAM = "Kingston HyperX Fury DDR4";
                _computer.RAM += "\n";
                break;
            case 4:
                _computer.RAM = "G.Skill Ripjaws V Series DDR4";
                _computer.RAM += "\n";
                break;
        }
    }

    public void BuildGPU()
    {
        Console.WriteLine("Enter GPU for office pc");

        Console.WriteLine("1.NVIDIA GT 1030");
        Console.WriteLine("2.AMD Radeon RX 550");
        
        UInt16 choice = UInt16.Parse(Console.ReadLine());
        switch (choice)
        {
            case 1:
                _computer.GPU = "NVIDIA GT 1030";
                _computer.GPU += "\n";
                break;
            case 2:
                _computer.GPU = "AMD Radeon RX 550";
                _computer.GPU += "\n";
                break;
        }
        
    }

    public void BuildStorage()
    {
        Console.WriteLine("Enter storage for office pc");

        Console.WriteLine("1.Seagate Barracuda 1TB or 2TB 7200 RPM HDD");
        Console.WriteLine("2.Samsung 860 EVO SATA SSD");
        
        UInt16 choice = UInt16.Parse(Console.ReadLine());

        switch (choice)
        {
            case 1:
                _computer.Storage = "Seagate Barracuda 1TB or 2TB 7200 RPM HDD";
                _computer.Storage += "\n";
                break;
            case 2:
                _computer.Storage = "Samsung 860 EVO SATA SSD";
                _computer.Storage += "\n";
                break;
        }
    }

    public void BuildSystemCooling()
    {
        Console.WriteLine("Enter system cooling for office pc");

        Console.WriteLine("1.NZXT Kraken 240");
        
        UInt16 choice = UInt16.Parse(Console.ReadLine());

        switch (choice)
        {
            case 1:
                _computer.SystemCooling = "NZXT Kraken 240";
                _computer.SystemCooling += "\n";
                break;
        }
        
    }

    public void BuildPSU()
    {
        Console.WriteLine("Enter PSU for office pc");

        Console.WriteLine("1.Seasonic S12III 450W");
        Console.WriteLine("2.EVGA 500 W1, 80+ WHITE 500W");
        Console.WriteLine("3.Thermaltake Smart 430W");

        UInt16 choice = UInt16.Parse(Console.ReadLine());

        switch (choice)
        {
            case 1:
                _computer.PSU = "Seasonic S12III 450W";
                _computer.PSU += "\n";
                break;
            case 2:
                _computer.PSU = "EVGA 500 W1, 80+ WHITE 500W";
                _computer.PSU += "\n";
                break;
            case 3:
                _computer.PSU = "Thermaltake Smart 430W";
                _computer.PSU += "\n";
                break;
        }
    }

    public void BuildCase()
    {
        Console.WriteLine("Enter case for office pc");

        Console.WriteLine("1.Fractal Design Define Mini C");
        Console.WriteLine("2.Pure Base 500");
        Console.WriteLine("3.Antec NSK4100");
        Console.WriteLine("4.Cooler Master Silencio S400");
        Console.WriteLine("5.SilverStone Precision Series PS15");

        UInt16 choice = UInt16.Parse(Console.ReadLine());

        switch (choice)
        {
            case 1:
                _computer.Case = "Fractal Design Define Mini C";
                _computer.Case += "\n";
                break;
            case 2:
                _computer.Case = "Pure Base 500";
                _computer.Case += "\n";
                break;
            case 3:
                _computer.Case = "Antec NSK4100";
                _computer.Case += "\n";
                break;
            case 4:
                _computer.Case = "Cooler Master Silencio S400";
                _computer.Case += "\n";
                break;
            case 5:
                _computer.Case = "SilverStone Precision Series PS15";
                _computer.Case += "\n";
                break;
        }
    }

    public Computer GetComputer()
    {
        Computer computer = _computer;

        _computer = new();

        return computer;
    }
}