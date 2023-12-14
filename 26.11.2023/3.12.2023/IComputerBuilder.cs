namespace _3._12._2023;

public interface IComputerBuilder
{
    void BuildMotherboard();
    void BuildCPU();
    void BuildRAM();
    void BuildGPU();
    void BuildStorage();
    void BuildSystemCooling();
    void BuildPSU();
    void BuildCase();

    Computer GetComputer();
}