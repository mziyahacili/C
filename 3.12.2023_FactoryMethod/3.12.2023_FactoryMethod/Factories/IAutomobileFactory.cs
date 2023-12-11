namespace _3._12._2023_FactoryMethod.Factories;

public interface IAutomobileFactory
{
    public T CreateAutomobile<T>() where T : IAutomobile;
}