#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double decimalNumber;
    int width = 15;
    
    // Getting value for variables
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;
    cout << endl;

    // Declare math variables
    double sinResult = sin(decimalNumber);
    double cosResult = cos(decimalNumber);
    double tanResult = tan(decimalNumber);
    double expResult = exp(decimalNumber);
    double logResult = log(decimalNumber);
    double sqrtResult = sqrt(decimalNumber);
    
    // Print the results  
    cout << left << setw(width) << "SIN: ";
    cout << right << setw(width) << sinResult << endl;
    cout << left << setw(width) << "COSINE: " << right << setw(width) << cosResult << endl;
    cout << left << setw(width) << "TANGENT: " << right << setw(width) << tanResult << endl;
    cout << left << setw(width) << "EXPONENT: " << right << setw(width) << expResult << endl;
    cout << left << setw(width) << "LOG: " << right << setw(width) << logResult << endl;
    cout << left << setw(width) << "SQUARE ROOT: " << right << setw(width) << sqrtResult << endl;
    

    string sine = "sine(" + to_string(decimalNumber) + "): ";
    string cos = "cos(" + to_string(decimalNumber) + "): ";
    string tan = "tan(" + to_string(decimalNumber) + "): ";
    string exp = "exp(" + to_string(decimalNumber) + "): ";
    string log = "log(" + to_string(decimalNumber) + "): ";

    // Printed Results the Better Way :)
    cout << left << setw(20) << sine << right << setw(width) << sinResult << endl;
    cout << left << setw(20) << cos << right << setw(width) << cosResult << endl;
    cout << left << setw(20) << tan << right << setw(width) << tanResult << endl;
    cout << left << setw(20) << exp << right << setw(width) << expResult << endl;
    cout << left << setw(20) << log << right << setw(width) << logResult << endl;
    return 0;
}
