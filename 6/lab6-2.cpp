#include <iostream>

using namespace std;

void getWholeNumber(int &num);
bool isPrime(int num);
void printFactors(int num);

int main() {
    int num;

    getWholeNumber(num);
    
    if (isPrime(num)) {
        cout << '\n' << num << " IS a prime number!" << endl;
    } else {
        cout << '\n' << num << " IS NOT a prime number!" << endl;
    }

    cout << "The facors of " << num << " are: " << endl;
    printFactors(num);


    return 0;
}

void getWholeNumber(int &num) {
    cout << "Enter a whole number: ";
    cin >> num;

    // Check for invalid input
    while(cin.fail() || num <= 0) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Please enter a positive whole number.";
    }
}

bool isPrime(int num) {
    // Check if num == 1 then check if half the number is divisible
    // by anything except itself and 1

    if (num <= 1) {
        return false;
    } else {
        for(int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) return false;
        }
    }
    return true;
}

void printFactors(int num) {
    // Check all numbers num is divisible by starting from 1
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
}

