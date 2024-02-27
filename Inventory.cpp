#include "Inventory.h"
#include <iostream>
#include <iomanip>
Inventory::Inventory(int id, const std::string& name, int quantity, double price) {
    this->itemID = id;
    this->itemName = name;
    this->quantity = quantity;
    this->price = price;
}

// Parameterized constructor
Inventory::Inventory() {
    this->itemID = 0;
    this->itemName = "";
    this->quantity = 0;
    this->price = 0.0;
}
// Getter and setter functions
int Inventory::getItemID() const {
    return itemID;
}

void Inventory::setItemID(int id) {
    itemID = id;
}

const std::string& Inventory::getItemName() const {
    return itemName;
}

void Inventory::setItemName(const std::string& name) {
    itemName = name;
}

int Inventory::getQuantity() const {
    return quantity;
}

void Inventory::setQuantity(int qty) {
    quantity = qty;
}

double Inventory::getPrice() const {
    return price;
}

void Inventory::setPrice(double itemPrice) {
    price = itemPrice;
}

// Display item details
void Inventory::displayItemDetails() const {
    std::cout << "Item ID: " << itemID << std::endl;
    std::cout << "Item Name: " << itemName << std::endl;
    std::cout << "Quantity: " << quantity << std::endl;
    std::cout << "Price: $" << std::fixed << std::setprecision(2) << price << std::endl;
}
