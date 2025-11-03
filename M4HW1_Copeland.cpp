/*
CSC 134
M4HW1 
Timothy Copeland
11/2/25
Silver Tier
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    int i = 1;

    // Ask the user for a number from 1 to 12
    cout << "Enter a number from 1 to 12: ";
    cin >> num;

    // Input validation (optional but good practice)
    if (num < 1 || num > 12) {
        cout << "Number must be between 1 and 12." << endl;
        return 0;
    }

    // While loop to print the multiplication table
    while (i <= 12) {
        cout << num << " times " << i << " is " << num * i << "." << endl;
        i++;
    }

    return 0;
}
