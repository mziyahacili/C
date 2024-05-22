let array = [
    {name: "Bread", quantity: 2, price: 1.50},
    {name: "Milk", quantity: 1, price: 3.20},
    {name: "Cheese", quantity: 1, price: 10}
]

function displayShow(arr){
    arr.forEach(item => {
        console.log(`${item.name} - Quantity: ${item.quantity}, One price: ${item.price}`);
    });
}

function allPrice(arr){
    let sum = 0;
    arr.forEach(item => {
        sum += item.price;
    });
    return sum;
}

function expensivePrice(arr){
    if (arr.length === 0) {
        return null; 
    }
    
    let mostExpensive = arr[0]; 
    
    arr.forEach(item => {
        if (item.price > mostExpensive.price) {
            mostExpensive = item; 
        }
    });
    
    return mostExpensive;
}

function averagePrice(arr){
    let totalCost = 0;
    let totalQuantity = 0;

    arr.forEach(item => {
        totalCost += item.price * item.quantity; 
        totalQuantity += item.quantity; 
    });

    if (totalQuantity === 0) {
        return 0; 
    } else {
        return totalCost / totalQuantity; 
    }
}

console.log(averagePrice(array));
