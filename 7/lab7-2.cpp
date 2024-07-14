#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//Prototypes
string genFirstName();
string genLastName();
void seedNum();
void printNames(int count);

int main(int argc, char* argv[]) {
    // Defalut number of names to print if no value is provided
    int count = 10;
     
    // Seed with time
    seedNum();

    // Check if a command-line argument is provided
    if (argc > 1) count = atoi(argv[1]);
    // **atoi converts string to int and is part of the <cstdlib> library

    printNames(count);

    return 0;
}

string genFirstName() {
    string firstNames[10] = {"Bob", "Angela", "Neil", "Elon", "Jennifer", "Noah", "Susan", "John", "William", "Don"};
    
    return firstNames[rand() % 10];
}


string genLastName() {
    string lastNames[10] = {"Smith", "Johnson", "Brown", "Davis", "Lee", "Wilson", "Garcia", "Clark", "Hall", "Adams"};

    return lastNames[rand() % 10];
}

void printNames(int count) {
    for(int i = 0; i < count; ++i) {
        string firstName = genFirstName();
        string lastName = genLastName();
        cout << firstName << " " << lastName << endl;
    }
}

void seedNum() {
    unsigned int seed = time(0);
    srand(seed);
}
