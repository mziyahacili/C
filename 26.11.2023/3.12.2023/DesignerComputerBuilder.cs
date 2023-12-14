namespace _3._12._2023;

public class DesignerComputerBuilder : IComputerBuilder
{
    private Computer _computer;

    public DesignerComputerBuilder()
    {
        _computer = new();
    }
    public void BuildMotherboard()
    {
        Console.WriteLine("Enter motherboard for designer pc");

        Console.WriteLine("1.ASUS ProArt Z490-Creator 10G");
        Console.WriteLine("2.GIGABYTE Designare Z390");
        Console.WriteLine("3.GIGABYTE TRX40 Designare");
        Console.WriteLine("4.MSI MPG Z590 Gaming Edge WiFi:");
        Console.WriteLine("5.ASUS ProArt B550-Creator:");
        
        UInt16 choice = UInt16.Parse(Console.ReadLine());
        switch (choice)
        {
            case 1:
                _computer.Motherboard = "ASUS ProArt Z490-Creator 10G";
                _computer.Motherboard += "\n";
                break;
            case 2:
                _computer.Motherboard = "GIGABYTE Designare Z390";
                _computer.Motherboard += "\n";
                break;
            case 3:
                _computer.Motherboard = "GIGABYTE TRX40 Designare";
                _computer.Motherboard += "\n";
                break;
            case 4:
                _computer.Motherboard = "MSI MPG Z590 Gaming Edge WiFi:";
                _computer.Motherboard += "\n";
                break;
            case 5:
                _computer.Motherboard = "ASUS ProArt B550-Creator:";
                _computer.Motherboard += "\n";
                break;
        }
    }
                        
    public void BuildCPU()
    {
        Console.WriteLine("Enter CPU for designer pc");

        Console.WriteLine("1.Intel Core i9-11900K");
        Console.WriteLine("2.AMD Ryzen 9 5950X");
        Console.WriteLine("3.Intel Core i5-12600K");
        Console.WriteLine("4.AMD Ryzen 5 5600X");
        
        UInt16 choice = UInt16.Parse(Console.ReadLine());
        switch (choice)
        {
            case 1:
                _computer.CPU = "Intel Core i9-11900K";
                _computer.CPU += "\n";
                break;
            case 2:
                _computer.CPU = "AMD Ryzen 9 5950X";
                _computer.CPU += "\n";
                break;
            case 3:
                _computer.CPU = "Intel Core i5-12600K";
                _computer.CPU += "\n";
                break;
            case 4:
                _computer.CPU = "AMD Ryzen 5 5600X";
                _computer.CPU += "\n";
                break;
        }
    }

    public void BuildRAM()
    {
        Console.WriteLine("Enter RAM for designer pc");

        Console.WriteLine("1.Corsair Vengeance LPX DDR4");
        Console.WriteLine("2.G.Skill Ripjaws V Series DDR4");
        Console.WriteLine("3.Corsair Dominator Platinum RGB DDR4");
        Console.WriteLine("4.HyperX Predator DDR4");
        
        UInt16 choice = UInt16.Parse(Console.ReadLine());
        switch (choice)
        {
            case 1:
                _computer.RAM = "Corsair Vengeance LPX DDR4";
                _computer.RAM += "\n";
                break;
            case 2:
                _computer.RAM = "G.Skill Ripjaws V Series DDR4";
                _computer.RAM += "\n";
                break;
            case 3:
                _computer.RAM = "Corsair Dominator Platinum RGB DDR4";
                _computer.RAM += "\n";
                break;
            case 4:
                _computer.RAM = "HyperX Predator DDR4";
                _computer.RAM += "\n";
                break;
        }
    }

    public void BuildGPU()
    {
        Console.WriteLine("Enter GPU for designer pc");

        Console.WriteLine("1.NVIDIA GeForce RTX 3080");
        Console.WriteLine("2.NVIDIA Quadro RTX 5000");
        Console.WriteLine("3.NVIDIA Quadro P2000");
        Console.WriteLine("4.AMD Radeon Pro WX 7100");
        Console.WriteLine("5.AMD Radeon RX 6800 XT");

    UInt16 choice = UInt16.Parse(Console.ReadLine());
        switch (choice)
        {
            case 1:
                _computer.GPU = "NVIDIA GeForce RTX 3080";
                _computer.GPU += "\n";
                break;
            case 2:
                _computer.GPU = "NVIDIA Quadro RTX 5000";
                _computer.GPU += "\n";
                break;
            case 3:
                _computer.GPU = "NVIDIA Quadro P2000";
                _computer.GPU += "\n";
                break;
            case 4:
                _computer.GPU = "AMD Radeon Pro WX 7100";
                _computer.GPU += "\n";
                break;
            case 5:
                _computer.GPU = "AMD Radeon RX 6800 XT";
                _computer.GPU += "\n";
                break;
        }
        
    }

    public void BuildStorage()
    {
        Console.WriteLine("Enter storage for designer pc");

        Console.WriteLine("1.Samsung 970 EVO Plus NVMe SSD");
        Console.WriteLine("2.Samsung 860 EVO SATA SSD");
        Console.WriteLine("3.Samsung T5 Portable SSD");
        
        UInt16 choice = UInt16.Parse(Console.ReadLine());

        switch (choice)
        {
            case 1:
                _computer.Storage = "Samsung 970 EVO Plus NVMe SSD";
                _computer.Storage += "\n";
                break;
            case 2:
                _computer.Storage = "Samsung 860 EVO SATA SSD";
                _computer.Storage += "\n";
                break;
            case 3:
                _computer.Storage = "Samsung T5 Portable SSD";
                _computer.Storage += "\n";
                break;
        }
    }

    public void BuildSystemCooling()
    {
        Console.WriteLine("Enter system cooling for designer pc");

        Console.WriteLine("1.Noctua NH-D15");
        Console.WriteLine("2.NZXT Kraken X63:");
        Console.WriteLine("3.Noctua NF-A14 PWM");
        
        UInt16 choice = UInt16.Parse(Console.ReadLine());

        switch (choice)
        {
            case 1:
                _computer.SystemCooling = "Noctua NH-D15";
                _computer.SystemCooling += "\n";
                break;
            case 2:
                _computer.SystemCooling = "NZXT Kraken X63:";
                _computer.SystemCooling += "\n";
                break;
            case 3:
                _computer.SystemCooling = "Noctua NF-A14 PWM";
                _computer.SystemCooling += "\n";
                break;
        }
    }

    public void BuildPSU()
    {
        Console.WriteLine("Enter PSU for designer pc");

        Console.WriteLine("1.Seasonic Focus GX-850");
        Console.WriteLine("2.Corsair RM850x");
        Console.WriteLine("3.Thermaltake Toughpower GF1 850W");

        UInt16 choice = UInt16.Parse(Console.ReadLine());

        switch (choice)
        {
            case 1:
                _computer.PSU = "Seasonic Focus GX-850";
                _computer.PSU += "\n";
                break;
            case 2:
                _computer.PSU = "Corsair RM850x";
                _computer.PSU += "\n";
                break;
            case 3:
                _computer.PSU = "Thermaltake Toughpower GF1 850W";
                _computer.PSU += "\n";
                break;
        }
    }

    public void BuildCase()
    {
        Console.WriteLine("Enter case for designer pc");

        Console.WriteLine("1.Fractal Design Define 7");
        Console.WriteLine("2.Pure Base 500");
        Console.WriteLine("3.Antec NSK4100");

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
        }
    }

    public Computer GetComputer()
    {
        Computer computer = _computer;

        _computer = new();

        return computer;
    }
}