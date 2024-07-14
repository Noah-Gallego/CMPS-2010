// Noah Gallego


#include <iostream>
using namespace std;

int main() {
    int numOne = 1337, numTwo = 42;
    double numOneDouble = 86.7, numTwoDouble = 5.309;
   
    int sum = numOne + numTwo;
    int difference = numOne - numTwo;
    int product = numOne * numTwo;
    int quotient = numOne / numTwo;
    int remainder = numOne % numTwo;
    
    double doubleSum = numOneDouble + numTwoDouble;
    double doubleDifference = numOneDouble - numTwoDouble;
    double doubleProduct = numOneDouble * numTwoDouble;
    double doubleQuotient = numOneDouble / numTwoDouble;

    cout << "**************************************" << endl;
    cout << "**   Welcome to the Math Machine   **" << endl;
    cout << "**************************************" << endl;

    cout << "The first integer is " << numOne << endl;
    cout << "The second integer is " << numTwo << "\n" <<  endl;

    cout << "The sum is " << sum << endl;
    cout << "The difference is " << difference << endl;
    cout << "The product is " <<  product << endl;
    cout << "The quotient is " <<  quotient << " with a remainder of " << remainder << "\n" << endl;

    // DOUBLE MATH

    cout << "The first double is " << numOneDouble << endl;
    cout << "The second double is " << numTwoDouble << "\n" << endl;

    cout << "The sum is " << doubleSum << endl;
    cout << "The difference is " << doubleDifference << endl;
    cout << "The product is " <<  doubleProduct << endl;
    cout << "The quotient is " <<  doubleQuotient << endl;

    return 0;
}
