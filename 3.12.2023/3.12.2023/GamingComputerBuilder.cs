namespace _3._12._2023;

public class GamingComputerBuilder : IComputerBuilder
{
    private Computer _computer;

    public GamingComputerBuilder()
    {
        _computer = new();
    }
    
    
    
    public void BuildMotherboard()
    {
        Console.WriteLine("Enter motherboard for gaming computer: ");

        Console.WriteLine("1.ASUS ROG Strix Z590-E Gaming");
        Console.WriteLine("2.MSI MPG B550 Gaming Edge WiFi");
        Console.WriteLine("3.GIGABYTE Aorus X570 Master");

        UInt16 choice = UInt16.Parse(Console.ReadLine());
        switch (choice)
        {
            case 1:
                _computer.Motherboard = "ASUS ROG Strix Z590-E Gaming";
                _computer.Motherboard += "\n";
                break;
            case 2:
                _computer.Motherboard = "MSI MPG B550 Gaming Edge WiFi";
                _computer.Motherboard += "\n";
                break;
            case 3:
                _computer.Motherboard = "GIGABYTE Aorus X570 Master";
                _computer.Motherboard += "\n";
                break;
        }
    }

    public void BuildCPU()
    {
        Console.WriteLine("Enter CPU for gaming computer: ");

        Console.WriteLine("1.Intel Core i9-11900K");
        Console.WriteLine("2.AMD Ryzen 9 5900X");
        Console.WriteLine("3.AMD Ryzen 7 5800X");
        
        UInt16 choice = UInt16.Parse(Console.ReadLine());
        switch (choice)
        {
            case 1:
                _computer.CPU = "Intel Core i9-11900K";
                _computer.CPU += "\n";
                break;
            case 2:
                _computer.CPU = "AMD Ryzen 9 5900X";
                _computer.CPU += "\n";
                break;
            case 3:
                _computer.CPU = "AMD Ryzen 7 5800X";
                _computer.CPU += "\n";
                break;
        }
    }

    public void BuildRAM()
    {
        
        Console.WriteLine("Enter RAM for gaming computer: ");

        Console.WriteLine("1.Corsair Vengeance LPX");
        Console.WriteLine("2.Kingston HyperX Fury");
        Console.WriteLine("3.Corsair Dominator Platinum RGB");
        
        UInt16 choice = UInt16.Parse(Console.ReadLine());
        switch (choice)
        {
            case 1:
                _computer.RAM = "Corsair Vengeance LPX";
                _computer.RAM += "\n";
                break;
            case 2:
                _computer.RAM = "Kingston HyperX Fury";
                _computer.RAM += "\n";
                break;
            case 3:
                _computer.RAM = "Corsair Dominator Platinum RGB";
                _computer.RAM += "\n";
                break;
        }
    }
    
    public void BuildGPU()
    {
        
        Console.WriteLine("Enter GPU for gaming computer: ");

        Console.WriteLine("1.NVIDIA GeForce RTX 3080");
        Console.WriteLine("2.AMD Radeon RX 6800 XT");
        Console.WriteLine("3.NVIDIA GeForce RTX 3060 Ti");
        
        UInt16 choice = UInt16.Parse(Console.ReadLine());
        switch (choice)
        {
            case 1:
                _computer.GPU = "NVIDIA GeForce RTX 3080";
                _computer.GPU += "\n";
                break;
            case 2:
                _computer.GPU = "AMD Radeon RX 6800 XT";
                _computer.GPU += "\n";
                break;
            case 3:
                _computer.GPU = "NVIDIA GeForce RTX 3060 Ti";
                _computer.GPU += "\n";
                break;
        }
    }

    public void BuildStorage()
    {
        
        Console.WriteLine("Enter storage for gaming computer: ");

        Console.WriteLine("1.Samsung 860 EVO SATA SSD ");
        Console.WriteLine("2.Samsung 970 EVO Plus NVMe M.2 SSD");
        
        UInt16 choice = UInt16.Parse(Console.ReadLine());
        switch (choice)
        {
            case 1:
                _computer.Storage = "Samsung 860 EVO SATA SSD";
                _computer.Storage += "\n";
                break;
            case 2:
                _computer.Storage = "Samsung 970 EVO Plus NVMe M.2 SSD";
                _computer.Storage += "\n";
                break;
        }
    }

    public void BuildSystemCooling()
    {
        Console.WriteLine("Enter system cooling for gaming computer: ");

        Console.WriteLine("1.Corsair iCUE H170i Elite Capellix XT");
        Console.WriteLine("2.Thermalright. Peerless Assassin 120 SE");

        
        UInt16 choice = UInt16.Parse(Console.ReadLine());
        switch (choice)
        {
            case 1:
                _computer.SystemCooling = "Corsair iCUE H170i Elite Capellix XT";
                _computer.SystemCooling += "\n";
                break;
            case 2:
                _computer.SystemCooling = "Thermalright. Peerless Assassin 120 SE";
                _computer.SystemCooling += "\n";
                break;
        }
        
    }

    public void BuildPSU()
    {
        Console.WriteLine("Enter PSU for gaming computer: ");

        Console.WriteLine("1.Corsair. CX450");
        Console.WriteLine("2.MSI MEG Ai1000P PCIe 5");
        Console.WriteLine("3.XPG. Core Reactor 650W");
        Console.WriteLine("4.Cooler Master. V750 Gold V2");


        
        UInt16 choice = UInt16.Parse(Console.ReadLine());
        switch (choice)
        {
            case 1:
                _computer.PSU = "Corsair. CX450";
                _computer.PSU += "\n";
                break;
            case 2:
                _computer.PSU = "MSI MEG Ai11000P PCIe 5.";
                _computer.PSU += "\n";
                break;
            case 3:
                _computer.PSU = "XPG. Core Reactor 650W";
                _computer.PSU += "\n";
                break;
            case 4:
                _computer.PSU = "Cooler Master. V750 Gold V2";
                _computer.PSU += "\n";
                break;
        }
    }

    public void BuildCase()
    {
        Console.WriteLine("Enter case for gaming computer: ");

        Console.WriteLine("1.NZXT H510");
        Console.WriteLine("2.Cooler Master MasterBox Q300L");
        Console.WriteLine("3.Lian Li Lancool II Mesh");

        
        
        UInt16 choice = UInt16.Parse(Console.ReadLine());
        switch (choice)
        {
            case 1:
                _computer.Case = "NZXT H510";
                _computer.Case += "\n";
                break;
            case 2:
                _computer.Case = "Cooler Master MasterBox Q300L";
                _computer.Case += "\n";
                break;
            case 3:
                _computer.Case = "Lian Li Lancool II Mesh";
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