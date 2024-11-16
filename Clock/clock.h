#include <string>;

using namespace std;

// These are the declaration of functions
void addOneHour();
void addOneMinute();
void addOneSecond();
void displayClocks(unsigned int h, unsigned int m, unsigned int s);
void mainMenu();

// These are the utility functions
string twoDigitString(unsigned int n);
string nCharString(size_t n, char c);
string formatTime24(unsigned int h, unsigned int m, unsigned int s);
string formatTime12(unsigned int h, unsigned int m, unsigned int s);

// These are time-related getters and setters
unsigned int getHour();
unsigned int getMinute();
unsigned int getSecond();

void setHour(unsigned int h);
void setMinute(unsigned int m);
void setSecond(unsigned int s);

// Function to get user menu choice
unsigned int getMenuChoice(unsigned int maxChoice);
