namespace _3._12._2023_FlyWeight;


class Circle : IShape
{
    private string _color;
    private int _radius = 5;

    public Circle(string color)
    {
        _color = color;
    }
    
    public void Draw(int x, int y)
    {
        Console.WriteLine($"Color {_color} radius {_radius}");
    }
}
