#include "Inventory.h"
#include <iostream>
#include <vector>

// Forward declaration of functions
void initializeInventory(std::vector<Inventory>& inv);
void printMenu();
void chooseOption(int menuChoice, std::vector<Inventory> inv);
void displayInventory(const std::vector<Inventory> inv);

// Implementation of functions

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

// Function to print menu and get user choice
void printMenu() {
    int choice;
	std::cout << "Enter 1 to display the inventory" << std::endl;
    std::cout << "Enter 2 to search for an item" << std::endl;
    std::cout << "Enter 3 to update the quantity of an item" << std::endl;
    std::cout << "Enter 4 to update the price of an item" << std::endl;
    std::cout << "Enter 0 to exit the program" << std::endl;
    std::cout << "Enter your choice: ";
}

// Function to perform actions based on user choice
void chooseOption(std::vector<Inventory> inv) {
	bool validChoice = false;
	int choice;
	while(!validChoice) {	
		std::cin >> choice;
		switch (choice) {
			case 1:
				displayInventory(inv);
				validChoice = true;
				break;
			case 2:
				 // Add search functionality here
				validChoice = true;
				break;
			case 3:
				 // Add update quantity functionality here
				validChoice = true; 
				break;
			case 4:
				 // Add update price functionality here
				validChoice = true;
				break;
			case 0:
				std::cout << "Exiting the program. Goodbye!" << std::endl;
				validChoice = true;
				break;
			default:
				std::cout << "Invalid choice. Try again." << std::endl;
				break;
		}
	}
}

// Function to display inventory
void displayInventory(const std::vector<Inventory> inv)  {
   	std::cout << std::endl;
	for(auto &item : inv) {
		item.displayItemDetails();
   		std::cout << "---------------------------" << std::endl; 
	}
}

// Main function
int main() {
    // Create a vector to store items
    std::vector<Inventory> inventory;
    // Add some items to the inventory
    initializeInventory(inventory);
    // Get user choice and perform actions
    printMenu();
	chooseOption(inventory);
    return 0;
}

