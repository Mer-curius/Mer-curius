/*
CSC 134
M3HW - Bronze Tier Pt 2
Timothy Copeland
10/19/25
*/


#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()
using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate two random single-digit numbers (0–9)
    int num1 = rand() % 10;
    int num2 = rand() % 10;

    int userAnswer;
    int correctAnswer = num1 + num2;

    // Ask the question
    cout << "What is " << num1 << " plus " << num2 << "?" << endl;
    cin >> userAnswer;

    // Check the answer
    if (userAnswer == correctAnswer) {
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect. The correct answer is " << correctAnswer << "." << endl;
    }

    return 0;
}
