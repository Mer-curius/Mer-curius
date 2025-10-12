/*
M3LAB2 - Letter Grades
CSC 134
TimothyCopeland
10/11/25
*/

#include <iostream>
using namespace std;

int main() {
    int grade;

    // Prompt user for numerical grade
    cout << "Enter your numerical grade (0 - 100): ";
    cin >> grade;

    // Check for valid input
    if (grade < 0 || grade > 100) {
        cout << "Invalid grade. Please enter a value between 0 and 100." << endl;
    } 
    else if (grade >= 90 && grade <= 100) {
        cout << "Your letter grade is: A" << endl;
    } 
    else if (grade >= 80 && grade <= 89) {
        cout << "Your letter grade is: B" << endl;
    } 
    else if (grade >= 70 && grade <= 79) {
        cout << "Your letter grade is: C" << endl;
    } 
    else if (grade >= 60 && grade <= 69) {
        cout << "Your letter grade is: D" << endl;
    } 
    else { // grade between 0 and 59
        cout << "Your letter grade is: F" << endl;
    }

    return 0;
}