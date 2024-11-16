#include "clock.h"
#include <iostream>

using namespace std;

int main() {
    // Get the time input from the user
    unsigned int h, m, s;

    // Prompt user for current time
    cout << "Enter the current time:\n";
    cout << "Hours (0-23): ";
    cin >> h;
    cout << "Minutes (0-59): ";
    cin >> m;
    cout << "Seconds (0-59): ";
    cin >> s;

    // Set the initial time
    setHour(h);
    setMinute(m);
    setSecond(s);

    // Call mainMenu 
    mainMenu();

    return 0;
}
