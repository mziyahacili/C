namespace _14._09._2023_2;

public class Calculator
{
    public double Add(double a, double b) => a + b;
    public double Subtract(double a, double b) => b - a;
    public double Multiply(double a, double b) => a * b;

    public double Divide(double a, double b)
    {
        if (b == 0)
            throw new Exception("Not number!");
        return a / b;
    }

    public delegate double MathOperation(double a, double b);
    
}


