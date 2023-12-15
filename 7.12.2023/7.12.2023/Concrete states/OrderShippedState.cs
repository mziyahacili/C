namespace _7._12._2023;

public class OrderShippedState : IOrderState
{
    private Order _order;

    public void SetOrder(Order order)
    {
        _order = order;
    }
    public void ConfirmOrder()
    {
        Console.WriteLine("Cannot confirm the order after shipping.");
    }

    public void ShipOrder()
    {
        Console.WriteLine("Order is already shipped.");
    }

    public void DeliverOrder()
    {
        Console.WriteLine("Delivering the order.");
        _order.State = new OrderDeliveredState();

    }

    public void CancelOrder()
    {
        Console.WriteLine("Cancelling the order");
    }
}