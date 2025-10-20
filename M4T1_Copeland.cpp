/*
CSC 134
M4HW
Timothy Copeland
10/19/25
*/

#include <iostream>
using namespace std;

int main() {
    // --- Part 1: Say "Hello" 5 times ---
    cout << "=== Saying Hello 5 Times ===" << endl;

    int count = 1;
    while (count <= 5) {
        cout << "Hello (" << count << ")" << endl;
        count++;
    }

    cout << endl;

    // --- Part 2: Display numbers and their squares ---
    cout << "=== Numbers 1–10 and Their Squares ===" << endl;
    cout << "Number\tNumber Squared" << endl;
    cout << "---------------------------" << endl;

    int num = 1;
    while (num <= 10) {
        int squared = num * num;
        cout << num << "\t" << squared << endl;
        num++;
    }

    cout << "\nProgram finished successfully!" << endl;

    return 0;
}
