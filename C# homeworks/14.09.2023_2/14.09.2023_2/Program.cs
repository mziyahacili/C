using System.Threading.Channels;
using _14._09._2023_2;

try
{
    Calculator calculator = new();

    Calculator.MathOperation addOperation = calculator.Add;
    Console.WriteLine(addOperation(4, 10));

    Calculator.MathOperation subtractOperation = calculator.Subtract;
    Console.WriteLine(subtractOperation(10, 3));

    Calculator.MathOperation multiplyOperation = calculator.Multiply;
    Console.WriteLine(multiplyOperation(3, 2));

    Calculator.MathOperation divideOperation = calculator.Divide;
    double result = multiplyOperation(10, 0);
    Console.WriteLine(result);
    
    Console.WriteLine(addOperation(12, 321));
    Console.WriteLine(subtractOperation(3, 3));
    Console.WriteLine(multiplyOperation(40, 0));
    Console.WriteLine(divideOperation(45, 5));

}
catch (Exception e)
{
    Console.WriteLine(e.Message);
}





