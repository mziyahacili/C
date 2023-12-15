namespace _7._12._2023;

public class OrderConfirmedState : IOrderState
{
    private Order _order;

    public void SetOrder(Order order)
    {
        _order = order;
    }
    public void ConfirmOrder()
    {
        Console.WriteLine("Order is already confirmed");
    }

    public void ShipOrder()
    {
        Console.WriteLine("Shipping the order");
        _order.State = new OrderShippedState();
    }

    public void DeliverOrder()
    {
        Console.WriteLine("Cancelling the order");
    }

    public void CancelOrder()
    {
        Console.WriteLine("Cancelling the order");
        _order.State = new OrderCancelledState();
    }
}