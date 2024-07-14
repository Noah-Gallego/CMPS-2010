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

    // Game title
    cout << "----------------------------------------" << endl;
    cout << "   IT'S FRUIT TIME! CHOOSE AN OPTION!   " << endl;
    cout << "----------------------------------------" << endl;

    // Making the game continuously run
    while(true) {
        //Display all 3 Inventory categories
        cout << "\nCURRENT INVETORY:" << endl;
        for (int i = 0; i < 3; i++) {
            cout << i + 1 << ") " << left << setw(width) << fruits[i] << stock[i] << endl;
        }

        cout << "----------------------------------------\n" << endl;

        // Collect user request and make sure it is valid
        cout << "\tPlease choose a line item: ";
        cin >> option;

        while (cin.fail() || option < 1 || option > 3) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid option. Please choose a option 1-3." << endl;
            cin >> option;
        }

        // Collect desire quantity and make sure it is valid
        cout << "\tPlease enter desired quantity: ";
        cin >> quantityRequested;

        while (cin.fail() || quantityRequested <= 0 || quantityRequested > stock[option - 1]) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid quantity. Please choose a valid quantity.\n" << endl;
            cin >> quantityRequested;
        }

        stock[option - 1] -= quantityRequested;
        cout << "There are " << stock[option - 1] << " " << fruits[option - 1] << " remaining." << endl;

    }

    return 0;

}    
