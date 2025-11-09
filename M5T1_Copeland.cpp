/*
CSC 134
M5T1
Timothy Copeland
11/9/25
*/

#include <iostream>
using namespace std;

// Function prototypes
void displayMessage();           // void function
double calculateAverage(double num1, double num2, double num3);  // value-returning function

int main() {
    double a, b, c, average;

    // Call the void function
    displayMessage();

    // Get input from the user
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Call the value-returning function
    average = calculateAverage(a, b, c);

    // Display the result
    cout << "The average of the three numbers is " << average << endl;

    return 0;
}

// ================= FUNCTIONS =================

// Void function: prints a message
void displayMessage() {
    cout << "Welcome! This program calculates the average of three numbers." << endl;
}

// Value-returning function: calculates and returns the average
double calculateAverage(double num1, double num2, double num3) {
    double avg = (num1 + num2 + num3) / 3.0;
    return avg;
}
