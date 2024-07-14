#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include "Monster.h"
using namespace std;

//Function Prototypes
int genRandom(int start, int end);
string genName();
string genType();
string genColor();
Monster genMonster();
void displayMonster(Monster m);
void makeMonsterCards(Monster mArr[], int size);

//Main Function
int main(int argc, char* argv[]){
    int count;
    // Seed the random number generator
    srand(time(NULL));

    //  TODO 3
    // Ask user how many monsters they want
    cout << "How many monsters do you want to create? ";
    cin >> count;

    // Dynamically create array of monsters using "new" keyword
    Monster* monsterArray = new Monster[count];

    // Fill array with random monsters
    for (int i = 0; i < count; i++) monsterArray[i] = genMonster();

    // Call makeMonsterCards that generates files for each monster in array
    makeMonsterCards(monsterArray, count); 

    // Delete array once done to get our memory back :)
    delete[] monsterArray;

    return 0;
}

int genRandom(int start, int end){
    int range = end - start + 1;

    return (rand() % range) + start;
}

string genName(){
    const int SIZE = 100;
    string names[SIZE] = {
        "Damian", "Alexa", "Renee", "Damon", "Jael", "Sheila", "Porter", "Byron", 
        "Malachi", "Madonna", "Odysseus", "Gail", "Celeste", "Joan", "Ahmed", 
        "Daryl", "Dalton", "Uma", "Xavier", "Neville", "Alma", "Hedley", "Marsden", 
        "Kendall", "Vera", "Abdul", "Venus", "Owen", "Harlan", "Stella", "Dominic", 
        "Fuller", "Alyssa", "Rashad", "Aurora", "Vincent", "Macon", "Camden", 
        "Tanisha", "Marvin", "Nola", "Sacha", "Fiona", "Nyssa", "Nelle", "Igor", 
        "Brenden", "Mollie", "Hayden", "Aristotle", "Ulla", "Jakeem", "Leila", 
        "Rahim", "Calvin", "Acton", "Tamekah", "Uma", "Aladdin", "Ivana", "Lunea", 
        "Ishmael", "Alvin", "Alice", "Chester", "Hadassah", "Theodore", "Meghan", 
        "Lysandra", "Edan", "Summer", "Sage", "Germaine", "Stephen", "Sawyer", "Cora", 
        "Denise", "Dara", "Jarrod", "Sara", "Tashya", "Hadassah", "Venus", "Keiko", 
        "Tatyana", "Lucas", "McKenzie", "Jane", "Akeem", "Deacon", "Uriah", "Arthur", 
        "Sean", "Latifah", "Shannon", "Eagan", "Autumn", "August", "Justina", "Dolan"
    };

    return names[genRandom(0,SIZE-1)];
}

string genType(){
    const int SIZE = 25;
    string types[SIZE] = {
        "Wet", "Slimy", "Sticky", "Hot", "Gross", "Dry", "Thick", "Thin", "Skinny", 
        "Rough", "Smooth", "Squishy", "Mushy", "Stringy", "Round", "Furry", "Tiny", 
        "Soft", "Creepy", "Prickly", "Nasty", "Spiky", "Prickly", "Small", "Slippery"
    };

    return types[genRandom(0, SIZE-1)];
}

string genColor(){
    const int SIZE = 120;
    string colors[SIZE] = {
        "Mahogany", "Fuzzy Wuzzy Brown", "Chestnut", "Red Orange", "Sunset Orange", 
        "Bittersweet", "Melon", "Outrageous Orange", "Vivid Tangerine", "Burnt Sienna", 
        "Brown", "Sepia", "Orange", "Burnt Orange", "Copper", "Mango Tango", 
        "Atomic Tangerine", "Beaver", "Antique Brass", "Desert Sand", "Raw Sienna", 
        "Tumbleweed", "Tan", "Peach", "Macaroni and Cheese", "Apricot", "Neon Carrot", 
        "Almond", "Yellow Orange", "Gold", "Shadow", "Banana Mania", "Sunglow", 
        "Goldenrod", "Dandelion", "Yellow", "Green Yellow", "Spring Green", 
        "Olive Green", "Laser Lemon", "Unmellow Yellow", "Canary", "Yellow Green", 
        "Inch Worm", "Asparagus", "Granny Smith Apple", "Electric Lime", "Timberwolf", 
        "Screamin Green", "Fern", "Forest Green", "Sea Green", "Green", "Silver",
        "Mountain Meadow", "Shamrock", "Jungle Green", "Caribbean Green", "Gray",
        "Tropical Rain Forest", "Pine Green", "Robin Egg Blue", "Aquamarine", 
        "Turquoise Blue", "Sky Blue", "Outer Space", "Blue Green", "Pacific Blue", 
        "Cerulean", "Cornflower", "Midnight Blue", "Navy Blue", "Denim", "Blue", 
        "Periwinkle", "Cadet Blue", "Indigo", "Wild Blue Yonder", "Manatee", 
        "Blue Bell", "Blue Violet", "Purple Heart", "Royal Purple", "DooDoo Brown", 
        "Purple Mountains Majesty", "Violet", "Wisteria", "Vivid Violet", 
        "Fuchsia", "Shocking Pink", "Pink Flamingo", "Plum", "Hot Magenta", 
        "Purple Pizzazz", "Razzle Dazzle Rose", "Orchid", "Red Violet", "Eggplant", 
        "Cerise", "Wild Strawberry", "Magenta", "Lavender", "Cotton Candy", 
        "Violet Red", "Carnation Pink", "Razzmatazz", "Piggy Pink", "Jazzberry Jam", 
        "Blush", "Tickle Me Pink", "Pink Sherbet", "Maroon", "Red", "Radical Red", 
        "Mauvelous", "Wild Watermelon", "Scarlet", "Salmon", "Brick Red", "White"
    };

    return colors[genRandom(0, SIZE-1)];
}

Monster genMonster(){
    Monster monster;

    // TODO 1: (Self explanatory)

    monster.setName(genName());
    monster.setType(genType());
    monster.setColor(genColor());
    monster.setEyes(genRandom(2, 10));
    monster.setArms(genRandom(2, 8));
    monster.setLegs(genRandom(2, 500));

    return monster;
}

//Displays the information for one monster to the screen
void displayMonster(Monster m){
    cout << "---------------------------" << endl;
    cout << m.getName() << " the Monster" << endl;
    cout << "---------------------------" << endl;
    cout << "TYPE: " << m.getType() << endl;
    cout << "COLOR: " << m.getColor() << endl;
    cout << "NO. OF EYES: " << m.getEyes() << endl;
    cout << "NO. OF ARMS: " << m.getArms() << endl;
    cout << "NO. OF LEGS: " << m.getLegs() << endl;
    cout << "--------------------------" << endl;
}

void makeMonsterCards(Monster mArr[], int size){
    // TODO 2:
    for (int i = 0; i < size; i++) {
        // Build file name using string concatenation
        string fileName = "monsters/Monster_" + mArr[i].getName() + ".txt";
        ofstream ofile(fileName);

        // Check if file is open
        if (ofile.is_open()) {
            ofile << "---------------------------" << endl;
            ofile << mArr[i].getName() << " the Monster" << endl;
            ofile << "---------------------------" << endl;
            ofile << "TYPE: " << mArr[i].getType() << endl;
            ofile << "COLOR: " << mArr[i].getColor() << endl;
            ofile << "NO. OF EYES: " << mArr[i].getEyes() << endl;
            ofile << "NO. OF ARMS: " << mArr[i].getArms() << endl;
            ofile << "NO. OF LEGS: " << mArr[i].getLegs() << endl;
            ofile << "---------------------------" << endl;
            
            // Close the file
            ofile.close();
        } else {
            cout << "Failed to create the file :(" << endl;
        }
    }    
}
