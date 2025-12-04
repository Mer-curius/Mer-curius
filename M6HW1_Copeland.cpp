/*
CSC 134, M6T1
Timothy Copeland
12/4/2025
*/

#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void foyer();
void hallway();
void laboratory();
void secretChamber();
void endingWin();
void endingLose();

bool hasPoltergust = false; // Player picks up the Poltergust (key item)

int main() {
    cout << "=====================================\n";
    cout << "      ESCAPE FROM LUIGI'S MANSION\n";
    cout << "=====================================\n\n";

    cout << "You awaken inside Luigi’s Mansion, the lights flickering above you.\n";
    cout << "A ghostly whisper echoes: \"Luigi… hurry… before the Boos find you…\"\n";
    cout << "You must escape before King Boo traps you forever.\n\n";

    foyer(); // Start the game

    return 0;
}

/* -------------------- FOYER -------------------- */
void foyer() {
    int choice;

    cout << "\n--- Foyer ---\n";
    cout << "Dusty portraits line the walls. The air feels cold.\n";
    cout << "Two hallways stretch out from the foyer.\n\n";

    cout << "1. Enter the main hallway.\n";
    cout << "2. Enter Professor E. Gadd’s Laboratory.\n";
    cout << "3. Sit and wait (dangerous!).\n";
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) hallway();
    else if (choice == 2) laboratory();
    else if (choice == 3) endingLose();
    else {
        cout << "Invalid choice.\n";
        foyer();
    }
}

/* -------------------- HALLWAY -------------------- */
void hallway() {
    int choice;

    cout << "\n--- Main Hallway ---\n";
    cout << "Green flames flicker from lanterns. A locked exit door stands at the far end.\n";
    cout << "Carved into the wood: \"Only the wielder of the Poltergust may leave.\"\n\n";

    cout << "1. Try to open the exit door.\n";
    cout << "2. Go back to the foyer.\n";
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        if (hasPoltergust) {
            cout << "You fire up the Poltergust 3000… and blast the ghostly seal off the door.\n";
            endingWin();
        } else {
            cout << "A Boo appears and blocks your path! You need the Poltergust first.\n";
            hallway();
        }
    }
    else if (choice == 2) foyer();
    else {
        cout << "Invalid choice.\n";
        hallway();
    }
}

/* -------------------- LABORATORY -------------------- */
void laboratory() {
    int choice;

    cout << "\n--- E. Gadd's Laboratory ---\n";
    cout << "Blinking machines hum softly. A note on the table reads:\n";
    cout << "\"Luigi, take the Poltergust. You’ll need it! – Prof. E. Gadd\"\n\n";

    cout << "1. Inspect the workbench.\n";
    cout << "2. Open the glowing locker.\n";
    cout << "3. Return to the foyer.\n";
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        if (!hasPoltergust) {
            cout << "You find the Poltergust 3000! You strap it on.\n";
            hasPoltergust = true;
        } else {
            cout << "You already have the Poltergust.\n";
        }
        laboratory();
    }
    else if (choice == 2) {
        cout << "A hidden panel slides open, revealing a secret chamber.\n";
        secretChamber();
    }
    else if (choice == 3) foyer();
    else {
        cout << "Invalid choice.\n";
        laboratory();
    }
}

/* -------------------- SECRET CHAMBER -------------------- */
void secretChamber() {
    int choice;

    cout << "\n--- Secret Chamber ---\n";
    cout << "Ghostly symbols glow along the walls. A Boo floats in the corner, watching you.\n";
    cout << "The room vibrates with dark magic.\n\n";

    cout << "1. Run back to the laboratory.\n";
    cout << "2. Approach the Boo.\n";
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) laboratory();
    else if (choice == 2) {
        cout << "The Boo lunges toward you… everything goes dark.\n";
        endingLose();
    }
    else {
        cout << "Invalid choice.\n";
        secretChamber();
    }
}

/* -------------------- ENDINGS -------------------- */
void endingWin() {
    cout << "\n=====================================\n";
    cout << "            YOU ESCAPED!\n";
    cout << "=====================================\n";
    cout << "You burst through the doors into the fresh night air.\n";
    cout << "Luigi’s Mansion fades behind you… until the next haunting.\n";
    cout << "Well done, Luigi!\n\n";
}

void endingLose() {
    cout << "\n=====================================\n";
    cout << "         YOU WERE CAPTURED…\n";
    cout << "=====================================\n";
    cout << "King Boo laughs as the darkness swallows you.\n";
    cout << "Your adventure ends here… forever.\n\n";
}
