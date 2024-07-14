#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//Prototypes
string genFirstName();
string genLastName();
void seedGen();
void printNames(int count);

int main(int argc, char* argv[]) {
    string fName;
    int size;

    // Seed with time
    seedGen();

    ifstream input(argv[1]);
    input.open();
    
    while (input >> fName) {
       size++; 
    }

    string namesArr[size];
    
    for (int i = 0; i < size; ++i) {
        input >> namesArr[i];
    }

    input.close();
    return 0;
}

string genFirstName(string arr[], int size) {
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

void seedGen() {
    unsigned int seed = time(0);
    srand(seed);
}
