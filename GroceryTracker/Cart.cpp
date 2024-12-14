#include "Cart.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <stdexcept>

using namespace std;

// Constructor
Cart::Cart() {}

// Load items from a file and count frequencies
void Cart::loadFromFile(const string& filename) {
    ifstream inputFile(filename);
    if (!inputFile) {
        throw runtime_error("Error: File not found");
    }

    string itemName;
    while (inputFile >> itemName) {
        // Increment item frequency in the map
        items[itemName].setName(itemName);
        items[itemName].setFrequency(items[itemName].getFrequency() + 1);
    }

    inputFile.close();
}

// Save item frequencies to a file
void Cart::saveToFile(const string& filename) const {
    ofstream outputFile(filename);
    for (const auto& pair : items) {
        outputFile << pair.first << " " << pair.second.getFrequency() << endl;
    }
    outputFile.close();
}

// Add item to the cart (or increment frequency)
void Cart::addItem(const string& itemName) {
    items[itemName].setName(itemName);
    items[itemName].setFrequency(items[itemName].getFrequency() + 1);
}

// Remove item from the cart
void Cart::removeItem(const string& itemName) {
    auto it = items.find(itemName);
    if (it != items.end()) {
        items.erase(it);
    }
    else {
        cout << "Item not found!" << endl;
    }
}

// Print all items and their frequencies
void Cart::printItems() const {
    if (items.empty()) {
        cout << "No items in cart." << endl;
        return;
    }

    cout << "\nItems and Frequencies:" << endl;
    for (const auto& pair : items) {
        pair.second.printItem();
    }
}

// Print histogram of item frequencies
void Cart::printHistogram() const {
    if (items.empty()) {
        cout << "No items in cart." << endl;
        return;
    }

    cout << "\nHistogram:" << endl;
    for (const auto& pair : items) {
        cout << pair.first << " ";
        for (int i = 0; i < pair.second.getFrequency(); ++i) {
            cout << "*";
        }
        cout << endl;
    }
}

// Find frequency of a specific item
int Cart::findItemFrequency(const string& itemName) const {
    auto it = items.find(itemName);
    if (it != items.end()) {
        return it->second.getFrequency();
    }
    return 0;
}
