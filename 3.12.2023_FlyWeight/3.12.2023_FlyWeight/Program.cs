using _3._12._2023_FlyWeight;

ShapeFactory shapeFactory = new ShapeFactory();

IShape blueCircle = shapeFactory.GetCircle("Blue");

blueCircle.Draw(10,20);







