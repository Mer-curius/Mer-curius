/*
CSC 134
M5HWQ2
Timothy Copeland
11/9/25
Silver Tier
*/

#include <iostream>
using namespace std;

int main() {
    double width, length, height;

    // Ask the user for input
    cout << "Enter the width of the block: ";
    cin >> width;
    cout << "Enter the length of the block: ";
    cin >> length;
    cout << "Enter the height of the block: ";
    cin >> height;

    // Input validation: sides must be greater than 0
    if (width <= 0 || length <= 0 || height <= 0) {
        cout << "Error: All dimensions must be greater than zero." << endl;
        return 0;
    }

    // Calculate the volume
    double volume = width * length * height;

    // Display the result
    cout << "The volume of the block is " << volume << " cubic units." << endl;

    return 0;
}
