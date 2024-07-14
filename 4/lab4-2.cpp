#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int num1, num2;
    char mathOperator;
    double result;
    bool valid = true;

    cout << "TIME FOR MORE MATH STUFF!" << endl;

    // Gathering Integers
    cout << "\nPlease enter an integer: ";
    cin >> num1;
   
    cout << "Please enter another integer: ";
    cin >> num2;
    
    // Gathering Operator
    cin.ignore();
    
    cout << "Please enter a signle math operator (+, -, *, /, %): ";
    cin.get(mathOperator);

    // Performing Operation
    switch (mathOperator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / (double)num2; 
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                valid = false;
                break;
            }
            break;
        case '%':
            // Check for division by zero... again :)
            if (num2 != 0) {
                result = num1 % num2;
            } else {
                cout << "Error: Modulo by zero is not allowed." << endl;
                valid = false;
                break;
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            valid = false;
            break;
    }

    // Print result
    if(valid){
        cout << "\n" << num1 << " " << mathOperator << " " << num2 << " = " << result << endl;
    }

    return 0; 
}

