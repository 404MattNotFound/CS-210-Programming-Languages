#include <iostream>
#include <string>
#include "Cart.h"
#include <stdexcept>

using namespace std;

void displayMenu() {
    cout << "\nMenu:\n";
    cout << "1. Find frequency of an item\n";
    cout << "2. Print all items and frequencies\n";
    cout << "3. Print item histogram\n";
    cout << "4. Exit\n";
}

int main() {
    Cart cart;
    string inputFile = "CS210_Project_Three_Input_File.txt";
    string backupFile = "frequency.dat";

    try {
        // Load items from the input file and count frequencies
        cart.loadFromFile(inputFile);

        // Display the menu and interact with the user
        int choice;
        do {
            displayMenu();
            cout << "Enter your choice: \n";
            cin >> choice;

            if (choice == 1) {
                string itemName;
                cout << "Enter item name to search: \n";
                cin >> itemName;

                int freq = cart.findItemFrequency(itemName);
                if (freq > 0) {
                    cout << itemName << " frequency: " << freq << endl;
                }
                else {
                    cout << "Item not found.\n";
                }

            }
            else if (choice == 2) {
                cart.printItems();
            }
            else if (choice == 3) {
                cart.printHistogram();
            }
            else if (choice == 4) {
                cout << "Exiting program.\n";
                break;
            }
            else {
                cout << "Invalid choice, please try again.\n";
            }
        } while (choice != 4);

        // Save frequencies to a backup file
        cart.saveToFile(backupFile);
        cout << "Backup file saved as " << backupFile << endl;

    }
    catch (const runtime_error& e) {
        cerr << e.what() << endl;
    }

    return 0;
}
