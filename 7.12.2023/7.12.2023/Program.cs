using _7._12._2023;

Order order = new Order(new OrderConfirmedState());


order.State.SetOrder(order);

order.ConfirmOrder();
order.ShipOrder();
order.DeliverOrder();

order.CancelOrder();
