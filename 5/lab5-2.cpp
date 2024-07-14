#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Declaring Variables
    const int width = 12;
    int numApples = 20,
        numBananas = 30,
        numOranges = 10,
        option,
        quantityRequested;
    string fruits[3] = {"Apples", "Bananas", "Oranges"};
    int stock[3] = {20, 30, 10};
    double prices[3] = {1.00, 0.50, 0.75};
    double totalEarned = 0.0;

    bool shouldExit = false;

    // Game title
    cout << setprecision(2) << fixed;
    cout << "----------------------------------------" << endl;
    cout << "   IT'S FRUIT TIME! CHOOSE AN OPTION!   " << endl;
    cout << "----------------------------------------" << endl;

    // Making the game continuously run
    while(!shouldExit) {
        //Display all 3 Inventory categories + quit option
        cout << "\nCURRENT INVETORY:" << endl;
        for (int i = 0; i < 3; i++) {
            cout << i + 1 << ") " << left << setw(width) << fruits[i] << stock[i];
            cout << " Price: $" << prices[i] << endl;
        }

        cout << "4) Quit" << endl;
        cout << "----------------------------------------\n" << endl;

        // Collect user request and make sure it is valid
        cout << "\tPlease choose a line item: ";
        cin >> option;

        if (cin.fail() || option < 1 || option > 4) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid option. Please choose a option 1-4." << endl;
            continue;
        }

        // Quit Game
        if (option == 4) {
            shouldExit = true;
            continue;
        }

        // Collect desire quantity and make sure it is valid
        cout << "\tPlease enter desired quantity: ";
        cin >> quantityRequested;

        if (cin.fail() || quantityRequested <= 0 || quantityRequested > stock[option - 1]) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid quantity. Please choose a valid quantity.\n" << endl;
        } else {
            double cost = quantityRequested * prices[option - 1];
            totalEarned += cost;
            stock[option - 1] -= quantityRequested;

            cout << "\nYou purchased " << quantityRequested <<  " ";
            cout << fruits[option - 1] << " for $" << cost << endl;
            cout << "There are " << stock[option - 1] << " ";
            cout << fruits[option - 1] << " remaining." << endl;
        }
    }

    cout << "Total money earned: $" << totalEarned << endl;

    return 0;

}    
