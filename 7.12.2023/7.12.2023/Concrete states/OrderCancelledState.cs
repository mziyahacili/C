namespace _7._12._2023;

public class OrderCancelledState : IOrderState
{
     private Order _order;

     public void SetOrder(Order order)
     {
          _order = order;
     }
     public void ConfirmOrder()
     {
          Console.WriteLine("Cannot confirm the order after cancellation.");
     }

     public void ShipOrder()
     {
          Console.WriteLine("Cannot ship the order after cancellation.");
     }

     public void DeliverOrder()
     {
          Console.WriteLine("Cannot deliver the order after cancellation.");
     }

     public void CancelOrder()
     {
          Console.WriteLine("Order is already cancelled.");
     }
}