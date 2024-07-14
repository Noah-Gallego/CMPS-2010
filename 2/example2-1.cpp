#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    string name;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter a number: ";
    cin >> num1;

    cout << "Enter another number: ";
    cin >> num2;

    cout << "HELLO, " << name << "!" << endl;
    cout << "The sum is: " <<  num1 + num2 << endl;
}    
