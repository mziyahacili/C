namespace _7._12._2023;

public class Order
{
    private IOrderState _state;

    public Order(IOrderState state)
    {
        _state = state;
    }

    public IOrderState State
    {
        get { return _state;}
        set { _state = value; }
    }

    public void ConfirmOrder()
    {
        _state.ConfirmOrder();
    }

    public void ShipOrder()
    {
        _state.ShipOrder();
    }

    public void DeliverOrder()
    {
        _state.DeliverOrder();
    }

    public void CancelOrder()
    {
        _state.CancelOrder();
    }
    
}