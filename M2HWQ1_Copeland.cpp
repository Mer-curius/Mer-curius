#include <iostream>
#include <string>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    string name;
    double startingBalance, deposit, withdrawal;

    cout << "=== Welcome to Paradise Bank! ===" << endl;

    // Ask for user information
    cout << "Enter the name on the account: ";
    getline(cin, name);

    // Input account data
    cout << "Enter your starting account balance ($): ";
    cin >> startingBalance;

    cout << "Enter the amount to deposit ($): ";
    cin >> deposit;

    cout << "Enter the amount to withdraw ($): ";
    cin >> withdrawal;

    // Generate a random 6-digit account number
    int accountNumber = 100000 + rand() % 900000;

    // Calculate final balance
    double finalBalance = startingBalance + deposit - withdrawal;

    // Display results
    cout << "=== Transaction Summary ===" << endl;
    cout << "Account Holder: " << name << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Final Account Balance: $" << finalBalance << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string school = "FTCC";
    string team = "Trojans";

    cout << "Let's go " << school << endl;
    cout << "Let's go " << school << endl;
    cout << "Let's go " << school << endl;
    cout << "Let's go " << team << endl;

    return 0;
}
