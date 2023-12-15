namespace _7._12._2023;

public interface IOrderState
{
    public void SetOrder(Order order);
    public void ConfirmOrder();
    public void ShipOrder();
    public void DeliverOrder();
    public void CancelOrder();
}