using System.Text;

namespace _3._12._2023;

public class Computer
{
    public string CPU { get; set; }
    public string GPU{ get; set; }
    public string Motherboard { get; set; } 
    public string RAM { get; set; }
    public string Storage { get; set; }
    public string PSU { get; set; }
    public string SystemCooling { get; set; }
    public string Case { get; set; }
    
    public override string ToString() =>
        new StringBuilder()
            .Append(CPU)
            .Append(GPU)
            .Append(Motherboard)
            .Append(RAM)
            .Append(Storage)
            .Append(PSU)
            .Append(SystemCooling)
            .Append(Case)
            .ToString();
}