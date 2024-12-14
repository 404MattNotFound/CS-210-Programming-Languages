#ifndef CART_H
#define CART_H

#include <vector>
#include "Item.h"
#include <map>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Cart {
private:
    // Map of items with their frequencies
    map<string, Item> items;

public:
    // Constructor
    Cart();

    // Add item to the cart or increment frequency
    void addItem(const string& itemName);
    // Remove item from the cart
    void removeItem(const string& itemName);
    // Print all items and frequencies
    void printItems() const;
    // Print the histogram of item frequencies
    void printHistogram() const;
    // Find frequency of a specific item
    int findItemFrequency(const string& itemName) const;

    // Load items from a file
    void loadFromFile(const string& filename);
    // Save item frequencies to a backup file
    void saveToFile(const string& filename) const;
};

#endif
