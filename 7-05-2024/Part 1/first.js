// Список покупок
let shoppingList = [
    { name: 'Milk', quantity: 2, bought: false },
    { name: 'Bread', quantity: 1, bought: true },
    { name: 'Eggs', quantity: 10, bought: false }
];

function displayShow(list){
    let bought = [];
    let notBought = [];
    let sortList = [];
    for (let i = 0; i < list.length; i++) {
        if(list[i].bought == true)
        {
            bought.push(list[i]);
        }
        if(list[i].bought == false){
            notBought.push(list[i]);
        }
    }

    sortList = [...notBought, ...bought];
    return sortList;
}


function addProduct(name, quantity) {
    const existingItem = shoppingList.find(item => item.name === name);
    
    if (existingItem) {
        existingItem.quantity += quantity;
    } else {
        shoppingList.push({ name, quantity, bought: false });
    }
}

function buyProduct(name) {
    const item = shoppingList.find(item => item.name === name);
    
    if (item) {
        item.bought = true;
    } else {
        console.log(`Product ${name} not found in the shopping list.`);
    }
}

