namespace _7._12._2023;

public class OrderDeliveredState : IOrderState
{
    private Order _order;

    public void SetOrder(Order order)
    {
        _order = order;
    }
    public void ConfirmOrder()
    {
        Console.WriteLine("Cannot confirm the order after delivery.");
    }

    public void ShipOrder()
    {
        Console.WriteLine("Cannot ship the order after delivery.");
    }

    public void DeliverOrder()
    {
        Console.WriteLine("Order is already delivered.");
    }

    public void CancelOrder()
    {
        Console.WriteLine("Cannot cancel the order after delivery.");
    }
}