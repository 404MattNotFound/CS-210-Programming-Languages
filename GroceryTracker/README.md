# Grocery Tracker Program

## Purpose
The purpose of the program is to simulate a shopping cart system that users can interact with. The user is able to:
- View item frequencies.
- Display a histogram of item frequencies.

The system reads items from an input file, processes them, and saves the updated frequencies to a backup file.

---

## Program Design

### Item Class
The `Item` class represents an individual item with attributes for the item name and its frequency.

#### Key Methods:
- `getName()`: Returns the name of the item.
- `getFrequency()`: Returns the frequency of the item.
- `setName()`: Sets the name of the item.
- `setFrequency()`: Sets the frequency of the item.
- `printItem()`: Prints the item's name and its frequency.

### Cart Class
The `Cart` class manages a collection of items, allowing for adding, removing, and modifying items.

#### Key Methods:
- `addItem()`: Adds a new item to the cart.
- `removeItem()`: Removes an item from the cart.
- `printItems()`: Prints all items in the cart along with their frequencies.
- `printHistogram()`: Displays a histogram of the item frequencies.
- `findItemFrequency()`: Searches for an item by name and returns its frequency.
- `loadFromFile()`: Loads items and their frequencies from an input file.
- `saveToFile()`: Saves the current item frequencies to a backup file.

### Main Program (main.cpp)
The main program:
- Prints a menu with options to search for items, print items, or show a histogram.
- Handles user input and file errors and saves item frequencies.

---

## Functionality

### Menu System
The user is prompted with a menu that has the following options:
1. Find item frequency.
2. Print all items and their frequencies.
3. Display a histogram of item frequencies.
4. Exit the program.

### Find Item Frequency
- The program searches for an item by its name and displays the frequency of that item.

### Print All Items and Frequencies
- Lists all items in the cart along with their corresponding frequencies.

### Print Item Histogram
- Displays a histogram using asterisks (`*`) to represent item frequencies visually.

---

## File Handling
- The program loads data from an input file and saves the updated data to a backup file.
- If the input file is missing or there is an error reading it, an error message is displayed.

---

## Screenshots

### Program Menu:
![Program Menu Screenshot](https://github.com/user-attachments/assets/e5e3fe92-f0bf-4762-af07-1e920bb145fa)

### Item Frequency Search:
![Item Frequency Search Screenshot****](https://github.com/user-attachments/assets/c9e21425-7ccc-4641-ae07-92c48b43c935)

### Print All Items and Frequencies:
![Print All Items Screenshot](https://github.com/user-attachments/assets/a0251e56-24a3-4c3c-bf66-dc4c3fb8538d)

### Histogram Display:
![Histogram Display Screenshot](https://github.com/user-attachments/assets/05ee193e-5247-4ed8-b027-687c6f2aeb15)
