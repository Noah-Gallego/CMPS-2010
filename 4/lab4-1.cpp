#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Variables
    int randomInteger,
        lowerBound,
        upperBound,
        userGuess;
    string oddOrEven,
           positiveOrNegative;
 
    // Generate random number -10 and 10 inclusive
    srand(time(0));  
    randomInteger = (rand() % 21 - 10); 
    
    // Hints Logic
    oddOrEven = randomInteger % 2 == 0 ? "EVEN" : "ODD";
    positiveOrNegative = randomInteger >= 0 ? "POSITIVE" : "NEGATIVE";
    lowerBound = max(-10, -3 - abs(randomInteger)); // Make sure that the Upper Bound does not exceed 10
    upperBound = min(10, 3 + abs(randomInteger)); // Make sure that the Lower Bound does not exceed -10
    
    // THE GAME
    cout << "*********************************************************" << endl;
    cout << "********      WELCOME TO THE GUESSING GAME!      ********" << endl;
    cout << "*********************************************************\n" << endl;
    
    cout << "The number is: " << oddOrEven << endl;
    cout << "The number is: " << positiveOrNegative << endl;
    cout << "Range for the number: " << lowerBound << " to ";
    cout << upperBound << " (inclusive)\n" << endl;
    
    cout << "  GUESS THE NUMBER: ";
    cin >> userGuess;
    cout << endl;
    
    if (userGuess == randomInteger) {
        cout << "Correct!" << endl;
    } else {
        cout << "Wrong!" << endl;
    }
    
    cout << "The number was " << randomInteger << endl;
   
    return 0;
}

