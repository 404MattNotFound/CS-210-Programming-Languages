#include "clock.h"
#include <iostream>

// Global time variables
unsigned int hours = 0;
unsigned int minutes = 0;
unsigned int seconds = 0;

// Adds one hour to the time
void addOneHour() {
    // Increment hour, wrap around after 23
    hours = (hours + 1) % 24;  
}

// Adds one minute to the time
void addOneMinute() {
    if (minutes == 59) {
        minutes = 0;
        // If minutes is 59, reset to 0 and increment the hour
        addOneHour();  
    }
    else {
        minutes++;
    }
}

// Adds one second to the time
void addOneSecond() {
    if (seconds == 59) {
        seconds = 0;
        // If seconds is 59, reset to 0 and increment the minute
        addOneMinute();  
    }
    else {
        seconds++;
    }
}

// Formats a number as 2 digits
string twoDigitString(unsigned int n) {
    if (n < 10) {
        return "0" + std::to_string(n);
    }
    else {
        return std::to_string(n);
    }
}

// Generates a string of length n, each character a c
string nCharString(size_t length, char c) {
    string result = "";
    for (size_t i = 0; i < length; ++i) {
        result += c;
    }
    return result;
}

// Formats time in 24-hour format
string formatTime24(unsigned int h, unsigned int m, unsigned int s) {
    return twoDigitString(h) + ":" + twoDigitString(m) + ":" + twoDigitString(s);
}

// Formats time in 12-hour format
string formatTime12(unsigned int h, unsigned int m, unsigned int s) {
    string am_pm;
    unsigned int hour12;

    if (h == 0) {
        hour12 = 12;
        am_pm = "AM";
    }
    else {
        if (h >= 12) {
            hour12 = (h > 12) ? h - 12 : 12;
            am_pm = "PM";
        }
        else {
            hour12 = h;
            am_pm = "AM";
        }
    }

    return twoDigitString(hour12) + ":" + twoDigitString(m) + ":" + twoDigitString(s) + " " + am_pm;
}

// Display the clocks in both 12-hour and 24-hour formats
void displayClocks(unsigned int h, unsigned int m, unsigned int s) {
    cout << nCharString(27, '*') << nCharString(3, ' ') << nCharString(27, '*') << endl;
    cout << '*' << nCharString(6, ' ') << "12-HOUR CLOCK" << nCharString(6, ' ') << '*' << nCharString(3, ' ');
    cout << '*' << nCharString(6, ' ') << "24-HOUR CLOCK" << nCharString(6, ' ') << '*' << endl;;
    cout << '*' << nCharString(7, ' ') << formatTime12(h, m, s) << nCharString(7, ' ') << '*' << nCharString(3, ' ');
    cout << '*' << nCharString(8, ' ') << formatTime24(h, m, s) << nCharString(9, ' ') << '*' << endl;
    cout << nCharString(27, '*') << nCharString(3, ' ') << nCharString(27, '*') << endl;
}

// Gets menu choice from the user
unsigned int getMenuChoice(unsigned int maxChoice) {
    unsigned int choice;

    // Continuously prompt the user until a valid input is given
    while (true) {
        cin >> choice;

        // Check if the input is within the valid range
        if (choice >= 1 && choice <= maxChoice) {
            return choice;
        }
        // If input is not valid, the loop continues
    }
}

// Getter/Setter functions for current time
unsigned int getHour() {
    return hours;
}

unsigned int getMinute() {
    return minutes;
}

unsigned int getSecond() {
    return seconds;
}

void setHour(unsigned int h) {
    hours = h;
}

void setMinute(unsigned int m) {
    minutes = m;
}

void setSecond(unsigned int s) {
    seconds = s;
}
