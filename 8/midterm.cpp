#include <iostream>
#include <cstdlib>

using namespace std;

// Prototypes
int rollDice();
void seedNum();

int main() {
    // Seed random with time
    seedNum();

    // Assigning oldRoll to the return value of rollDice()
    // Setting variables and flags
    int oldRoll = rollDice();
    int input, newRoll, balance = 100;
    bool quit = false;

    // Title sequence
    cout << "************************************" << endl;
    cout << "*************DICE GAME**************" << endl;
    cout << "************************************\n" << endl;

    cout << "You have $100. The first roll is: " << oldRoll << "." << endl;

    while (!quit) {
        newRoll = rollDice();

        cout << "Will the next roll be:" << endl;
        cout << "1) Higher" << endl;
        cout << "2) Lower" << endl;
        cout << "3) Same" << endl;
        cout << "4) Quit\n" << endl;

        cout << "Guess: ";
        cin >> input;
        
        // Error handling
        if (cin.fail() || !(input >= 1 && input <= 4)) {
            cout << "Please enter a number 1 - 4!\n" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        
        // Determine choice and update balance
        if (balance >= 1) {
            switch(input) {
                case 1:
                    balance += (newRoll > oldRoll) ? 5 : -5;
                    break;
                case 2:
                    balance += (newRoll < oldRoll) ? 5 : -5;
                    break;
                case 3:
                    balance += (newRoll == oldRoll) ? 20 : -20;
                    break;
                case 4:
                    quit = true;
                    break;
                default:
                    cout << "Please enter a number 1 - 4!\n" << endl;
            }
        }

        if (balance <= 0) {
            cout << "Your balance is too low to continue. Game over!.\n";
            quit = true;
            break;
        }

        // Print game info

        if (!quit) {
            cout << "\n\tThe old roll was: " << oldRoll;
            cout << ". and the new current roll was: " << newRoll << endl;
            cout << "\tYour new balance is $" << balance << ".\n\n" << endl;
        }

        oldRoll = newRoll;
    } 

    cout << "Your FINAL balance is $" << balance << "! Thanks for playing!" << endl;
    
    return 0;
}

int rollDice() {
    return (rand() % 6) + 1;
}

void seedNum() {
    unsigned int seed = time(0);
    srand(seed);
}
