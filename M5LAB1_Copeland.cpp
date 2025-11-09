/*
CSC 134
M5LAB1
Timothy Copeland
11/9/25
*/

#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void investigate_city();
void infiltrate_base();
void rescue_hostages();
void quit_game();

int main() {
    int choice = 0;

    cout << "======================================" << endl;
    cout << "     OPERATION: SHADOW STRIKE" << endl;
    cout << "======================================" << endl;
    cout << "You are a special agent for the Global Defense Initiative." << endl;
    cout << "Your mission: Stop an international terrorist organization" << endl;
    cout << "from launching a devastating attack on several world capitals." << endl;
    cout << endl;

    // Main menu loop
    while (true) {
        cout << "\nMission Menu:" << endl;
        cout << "1. Investigate suspicious activity in the city" << endl;
        cout << "2. Infiltrate the enemy’s secret base" << endl;
        cout << "3. Rescue hostages from an underground compound" << endl;
        cout << "4. Abort mission (Quit)" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        // Input validation
        if (cin.fail() || choice < 1 || choice > 4) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid choice. Please enter 1, 2, 3, or 4." << endl;
            continue;
        }

        // Handle choices
        if (choice == 1) {
            investigate_city();
        } else if (choice == 2) {
            infiltrate_base();
        } else if (choice == 3) {
            rescue_hostages();
        } else if (choice == 4) {
            quit_game();
            break;
        }
    }

    return 0;
}

// ================= STORY BRANCHES =================

void investigate_city() {
    cout << "\n🏙️ You’re in the capital city, tracking a lead on a terrorist cell." << endl;
    cout << "Your informant says a bomb may be hidden in a subway terminal." << endl;
    cout << "Do you:" << endl;
    cout << "1. Go undercover in the subway to search for the device" << endl;
    cout << "2. Call in a bomb squad and monitor from a distance" << endl;

    int choice;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nYou enter the subway disguised as a commuter. You notice a suspicious backpack near a bench." << endl;
        cout << "You carefully disable the device using your training—it’s a live explosive!" << endl;
        cout << "You just saved hundreds of lives, but you know this is only the beginning..." << endl;
    } else {
        cout << "\nYou alert the bomb squad. They find the device and neutralize it safely." << endl;
        cout << "However, the mastermind slips away unnoticed. You’ll need to track him down later." << endl;
    }
}

void infiltrate_base() {
    cout << "\n🏭 You locate the terrorists’ hidden base in the mountains." << endl;
    cout << "You and your team approach under the cover of darkness." << endl;
    cout << "Do you:" << endl;
    cout << "1. Sneak in through a ventilation shaft" << endl;
    cout << "2. Launch a full assault with your squad" << endl;

    int choice;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nYou silently enter the facility and overhear plans for a chemical attack." << endl;
        cout << "You download vital intel from a nearby computer and escape unseen." << endl;
        cout << "Your stealth pays off — headquarters now has the enemy’s next target!" << endl;
    } else {
        cout << "\nYou storm the base with full force. The firefight is brutal, but your team prevails." << endl;
        cout << "You capture several key operatives, but the leader escapes through a hidden tunnel." << endl;
    }
}

void rescue_hostages() {
    cout << "\n🚨 Intelligence reports hostages being held beneath an abandoned warehouse." << endl;
    cout << "Time is running out before the terrorists execute them on live broadcast." << endl;
    cout << "Do you:" << endl;
    cout << "1. Create a distraction and rescue the hostages quietly" << endl;
    cout << "2. Burst in and engage the guards head-on" << endl;

    int choice;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nYou trigger a diversion by cutting the power. In the chaos, you free the hostages one by one." << endl;
        cout << "Everyone makes it out alive. The world calls you a hero." << endl;
    } else {
        cout << "\nYou charge in with guns blazing. The battle is fierce, but you take down the captors." << endl;
        cout << "Unfortunately, one hostage is injured in the crossfire. The mission is a partial success." << endl;
    }
}

void quit_game() {
    cout << "\nMission aborted. You step away from the war room, knowing the fight isn’t over." << endl;
    cout << "The world still needs heroes like you." << endl;
}
