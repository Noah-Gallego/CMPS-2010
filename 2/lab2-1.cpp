#include <iostream>  
#include <string>

using namespace std;

int main() {
    // Declaring Variables
    string name,
           adjective,
           secondAdjective,
           person,
           color,
           weapon,
           verb,
           secondVerb,
           sentence;

    int hours;

    // Gathering Values
    cout << "FYI: There are a total of 9 prompts." << endl;

    cout << "Enter a name: ";
    cin >> name;

    cout << "Enter a adjective: ";
    cin >> adjective;

    cout << "Enter another adjective: ";
    cin >> secondAdjective;

    cout << "Enter a type of person (i.e wizard): ";
    cin >> person;

    cout << "Enter a color: ";
    cin >> color;

    cout << "Enter a weapon name: ";
    cin >> weapon;

    cout << "Enter a verb in the past-tense (used to describe escape such as ran, flew, etc.): ";
    cin >> verb;

    cout << "Enter an integer: ";
    cin >> hours;
  
    cin.ignore();
    
    cout << "Enter a complete sentence: ";
    getline(cin, sentence);
    
    // STORY
    cout << "In a " << adjective << " land, a brave " << name;
    cout << " emabrked on a daring quest." << endl;

    cout << "With nothing but a trusty " << weapon  << " in hand, they encountered a ";
    cout << person << " who gave them a advice." << endl;

    cout << "As the night fell, with only " << hours << " hours until midnight, the sky turned ";
    cout <<  color << ", and the wild " << name;
    cout << " " << verb << "." << endl;
    
    cout << "With a determination in their heart, the adventurer " << verb;
    cout << " into the unknown, ready for whatever lies ahead. Shouting, \"" << sentence;
    cout <<  "!\"" << endl;

    cout << "THE END!!! :)" << endl;

    return 0;
}


