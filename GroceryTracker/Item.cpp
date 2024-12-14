#include "Item.h"
#include <iostream>
using namespace std;

// Constructor
Item::Item() : name("none"), frequency(0) {}
Item::Item(string itemName, int freq) : name(itemName), frequency(freq) {}

string Item::getName() const {
    return name;
}

int Item::getFrequency() const {
    return frequency;
}

void Item::setName(const string& itemName) {
    name = itemName;
}

void Item::setFrequency(int freq) {
    frequency = freq;
}

// Print item name and its frequency
void Item::printItem() const {
    cout << name << ": " << frequency << endl;
}
