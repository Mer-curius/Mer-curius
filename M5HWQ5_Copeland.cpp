/*
CSC 134
M5HWQ5
Timothy Copeland
11/9/25
Silver Tier
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double speed;
    int hours;

    // Ask for the vehicle's speed
    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;

    // Validate speed input
    if (speed < 0) {
        cout << "Speed cannot be negative." << endl;
        return 0;
    }

    // Ask for the number of hours traveled
    cout << "How many hours has it traveled? ";
    cin >> hours;

    // Validate hours input
    if (hours < 1) {
        cout << "Hours traveled must be at least 1." << endl;
        return 0;
    }

    // Display table header
    cout << endl;
    cout << "Hour\tDistance Traveled" << endl;
    cout << "-----------------------------" << endl;

    // Loop to calculate and display distance for each hour
    for (int i = 1; i <= hours; i++) {
        double distance = speed * i;
        cout << setw(4) << i << "\t" << distance << endl;
    }

    return 0;
}
