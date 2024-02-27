// Copyright 
#include "Inventory.h"

// Create some initial inventory items
void initializeInventory(std::vector<Inventory>& inv) {
    // Create two instances specifying all instance variables
    inv.push_back(Inventory(1, "Item A", 10, 15.99));
    inv.push_back(Inventory(2, "Item B", 5, 24.99));
    // Create an empty instance and use setters to initialize
    inv.push_back(Inventory());
    size_t invSize = inv.size();
    inv[invSize - 1].setItemID(3);
    inv[invSize - 1].setItemName("Item C");
    inv[invSize - 1].setQuantity(8);
    inv[invSize - 1].setPrice(19.99);
}

int main() {
    // Create a vector to store items
    std::vector<Inventory> inventory;
    // Add some items to the inventory
    initializeInventory(inventory);

    // Add main function code here and add helper functions above

    return 0;
}
