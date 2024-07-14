#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "Monster.h"
using namespace std;

//Function Prototypes
void makeMonsterCards(Monster mArr[], int size);

//Main Function
int main(int argc, char* argv[]){
    int count;
    
    //Seed the random number generator
    srand (time(NULL));

    //Example of how to Randomly generate a monster
    Monster m1;
    cout << m1.toString();

    //Example of how to Define a monster manually
    Monster m2("Paul", "Spiky", "Green", 3, 2, 4);
    cout << m2.toString();

    cout << "How many monsters would you like to generate?: " << endl;
    cin >> count;

    // FILL ARRAY WITH RANDOM MONSTERS USING DEFAULT CONSTRUCTOR
    Monster* monsters = new Monster[count];

    makeMonsterCards(monsters, count);

    delete [] monsters;
    return 0;
}

void makeMonsterCards(Monster mArr[], int size){
    for(int i=0; i<size; i++){
        string filename = "monsters/Monster_" + mArr[i].getName() + ".txt";
        ofstream output;

        output.open(filename);
        output << mArr[i].toString();
        output.close();
    }
}
