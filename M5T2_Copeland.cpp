/*
CSC 134
M5T2
Timothy Copeland
11/9/25
No Partner
*/

#include <iostream>
using namespace std;

// Function prototypes
int square(int num);                    // Value-returning function
void printAnswerLine(int num, int sq);  // Void function

int main() {
    cout << "Number   Square" << endl;
    cout << "----------------" << endl;

    // Loop through numbers 1 to 10
    for (int i = 1; i <= 10; i++) {
        // Call the value-returning function to calculate the square
        int sq = square(i);

        // Call the void function to print the result in a formatted line
        printAnswerLine(i, sq);
    }

    cout << "----------------" << endl;
    cout << "All numbers and their squares are listed above." << endl;

    return 0;
}

// ========================= FUNCTIONS =========================

// square()
// This function takes an integer as input and returns its square.
// The calculation is simple: multiply the number by itself.
int square(int num) {
    return num * num;
}

// printAnswerLine()
// This function takes two integers (the number and its square)
// and prints them in a neat, organized format.
void printAnswerLine(int num, int sq) {
    cout << num << "        " << sq << endl;
}
