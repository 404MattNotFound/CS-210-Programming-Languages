#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item {
private:
    string name;
    int frequency;

public:
    // Constructor
    Item();
    Item(string itemName, int freq);

    // Get the item name
    string getName() const;
    // Get the frequency of the item
    int getFrequency() const;

    // Set the item name
    void setName(const string& itemName);
    // Set the frequency
    void setFrequency(int freq);

    // Print the item and its frequency
    void printItem() const;
};

#endif
