namespace _3._12._2023;

public class ComputerDirector
{
    private readonly IComputerBuilder _builder;

    public ComputerDirector(IComputerBuilder builder)
    {
        _builder = builder;
    }

    public void BuildGaming()
    {
        _builder.BuildMotherboard();
        _builder.BuildCPU();
        _builder.BuildGPU();
        _builder.BuildRAM();
        _builder.BuildRAM();
        _builder.BuildGPU();
        _builder.BuildStorage();
        _builder.BuildSystemCooling();
        _builder.BuildCase();
    }

    public void BuildOffice()
    {
        _builder.BuildMotherboard();
        _builder.BuildCPU();
        _builder.BuildGPU();
        _builder.BuildRAM();
        _builder.BuildGPU();
        _builder.BuildStorage();
        _builder.BuildCase();
    }

    public void BuildDesigner()
    {
        _builder.BuildMotherboard();
        _builder.BuildCPU();
        _builder.BuildGPU();
        _builder.BuildRAM();
        _builder.BuildGPU();
        _builder.BuildStorage();
        _builder.BuildSystemCooling();
        _builder.BuildCase();
    }
    
}