// Write a programme to enter items name, quantity and unit price. If total price is greater than 10000 then discount is 10% of total price, if total price is grater than 7000 but less than 10000 then discount is 7% of total price, if total price is greater than 5000 but less than 7000 then discount is 5% of total price, otherwise discount is 3% of total price. Print item name, total price and current price of the item using function call by value.

#include<iostream>
using namespace std;

int discount_price (int &item_price) {

    int discount;

    if (item_price > 10000) {
        discount = (item_price * 10) / 100;
    }
    else if (item_price > 7000 && item_price <= 10000) {
        discount = (item_price * 7) / 100;
    }
    else if (item_price > 5000 && item_price < 7000) {
        discount = (item_price * 5) / 100;
    }
    else {
        discount = (item_price * 3) / 100;
    }

    return discount;
}

int main () {

    string item_name;

    cout << "Enter the name of the item: ";
    cin >> item_name;

    int item_quantity, item_price;

    cout << "Enter the quantity of that item: ";
    cin >> item_quantity;

    cout << "Enter the price of the item: ";
    cin >> item_price;

    int current_price = discount_price(item_price);

    int discount_price = item_price - current_price;

    cout << "Your name of item is: " << item_name << endl;
    cout << "Quantity of the item is: " << item_quantity << endl;
    cout << "The price of the item: " << item_price << endl;
    cout << "Discount given on that item: " << discount_price << endl;
    cout << "Discounted price of given item is: " << current_price << endl;

    return 0;
}