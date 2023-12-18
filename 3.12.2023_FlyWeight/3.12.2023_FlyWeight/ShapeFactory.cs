namespace _3._12._2023_FlyWeight;


public class ShapeFactory
{
    private Dictionary<string, IShape> shapes = new Dictionary<string, IShape>();

    public IShape GetCircle(string color)
    {
        if (shapes.ContainsKey(color))
        {
            return shapes[color];
        }
        else
        {
            IShape circle = new Circle(color);
            shapes.Add(color,circle);
            return circle;
        }
    }
}
