#include <iostream>
#include <string>
#include <limits>  // for numeric_limits
using namespace std;

// Function prototypes
void part1();
void part2();

// Helper function for safe integer input
int getValidatedInput(const string &prompt) {
    int value;
    while (true) {
        cout << prompt;
        cin >> value;

        if (!cin.fail() && value >= 0) {
            return value;
        }

        // Clear the error and ignore bad input
        cin.clear();
        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');

        cout << "Invalid input. Please enter a non-negative whole number.\n";
    }
}

int main() {
    part1();
    cout << "\n-----------------------------\n";
    part2();
    return 0;
}

// ------------------------------------------------------------
// PART 1: Loop only, no array
// ------------------------------------------------------------
void part1() {
    cout << "PART 1: Counting cars (no arrays)\n";

    const int DAYS = 5;
    string dayNames[DAYS] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    int total = 0;

    for (int i = 0; i < DAYS; i++) {
        int count = getValidatedInput("Enter cars counted on " + dayNames[i] + ": ");
        total += count;
    }

    double average = total / 5.0;

    cout << "\nTotal cars for the week: " << total << endl;
    cout << "Average cars per day: " << average << endl;
}

// ------------------------------------------------------------
// PART 2: Loop + array + ASCII bar chart
// ------------------------------------------------------------
void part2() {
    cout << "PART 2: Counting cars (with arrays + bar chart)\n";

    const int DAYS = 5;
    string dayNames[DAYS] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int cars[DAYS];

    int total = 0;

    for (int i = 0; i < DAYS; i++) {
        cars[i] = getValidatedInput("Enter cars counted on " + dayNames[i] + ": ");
        total += cars[i];
    }

    double average = total / 5.0;

    cout << "\nTotal cars for the week: " << total << endl;
    cout << "Average cars per day: " << average << endl;

    // ASCII graph
    cout << "\nASCII Bar Chart of Weekly Traffic:\n";
    for (int i = 0; i < DAYS; i++) {
        cout << dayNames[i] << ": ";
        for (int j = 0; j < cars[i] / 10; j++) {  // scale: 1 star = 10 cars
            cout << "*";
        }
        cout << " (" << cars[i] << ")\n";
    }
}
