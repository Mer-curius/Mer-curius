/*
CSC 134
M3HW - Bronze Tier Pt 1
Timothy Copeland
10/19/25
*/

#include <iostream>
#include <string>
#include <algorithm> // for transform
using namespace std;

int main() {
    string answer;

    // Greeting
    cout << "Hello, I’m a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;

    // Get user input (can include spaces)
    getline(cin, answer);

    // Remove leading and trailing spaces
    while (!answer.empty() && isspace(answer.front())) answer.erase(answer.begin());
    while (!answer.empty() && isspace(answer.back())) answer.pop_back();

    // Convert entire input to lowercase for comparison
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

    // Respond based on user input
    if (answer == "yes") {
        cout << "That’s great! I’m sure we’ll get along." << endl;
        cout << "I’m still learning, but I love chatting with friendly humans like you!" << endl;
    } 
    else if (answer == "no") {
        cout << "Well, maybe you’ll learn to like me later." << endl;
        cout << "I promise I’ll try to be more interesting next time!" << endl;
    } 
    else {
        cout << "If you’re not sure… that’s OK." << endl;
        cout << "I know it takes time to get to know someone new." << endl;
    }

    // End the chat politely
    cout << "Thanks for chatting with me! Have a great day!" << endl;

    return 0;
}
