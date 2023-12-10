﻿namespace _3._12._2023_FactoryMethod.Factories;

public class TruckFactory : AutomobileFactory
{
    private string _make;
    private readonly string _model;
    private string _color;

    public TruckFactory(string make, string color)
    {
        _make = make;
        _model = "Sedan";
        _color = color;
    }
    
    public override IAutomobile GetAutomobile()
    {
        Truck factory = new(_make, _color);
        
        return factory;
    }
}