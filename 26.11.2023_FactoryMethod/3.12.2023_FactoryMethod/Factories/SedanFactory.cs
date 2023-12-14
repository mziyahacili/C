namespace _3._12._2023_FactoryMethod.Factories;

public class SedanFactory : IAutomobileFactory
{
    public T CreateAutomobile<T>() where T : IAutomobile
    {
        var automobile = Activator.CreateInstance<T>();
        return automobile;
    }
}