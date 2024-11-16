#include "clock.h"
#include <iostream>

void mainMenu() {
    unsigned int choice;

    while (true) {
        // Display the time on both clocks
        displayClocks(getHour(), getMinute(), getSecond());

        // User menu 
        cout << endl;
        cout << nCharString(26, '*') << endl;
        cout << "* 1. Add One Hour        *" << endl;
        cout << "* 2. Add One Minute      *" << endl;
        cout << "* 3. Add One Second      *" << endl;
        cout << "* 4. Exit Program        *" << endl;
        cout << nCharString(26, '*') << endl;

        // Get valid user input between 1 and 4
        choice = getMenuChoice(4);

        if (choice == 1) {
            // Add one hour to the time
            addOneHour();
        }
        else if (choice == 2) {
            // Add one minute to the time
            addOneMinute();
        }
        else if (choice == 3) {
            // Add one second to the time
            addOneSecond();
        }
        else if (choice == 4) {
            std::cout << "Exiting program. Goodbye!\n";

            // Exit the program
            break;
        }
    }
}
