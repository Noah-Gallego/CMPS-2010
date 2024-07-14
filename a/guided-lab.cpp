#include <iostream>
#include <string>

using namespace std;

//Global Variables
const int FLOOR = 1,
          CHAIR = 2,
          DESK = 3,

//ask the user which object to grab, then return a pointer to that object
int* grab(int &pencil, int &book, int &paper);

//ask the user where they would like to move the object
void move(int* hand);

//show the location of each object & contents of hand
void showAll(int* hand, int &pencil, int &book, int &paper);

//helper function for showAll, outputs the location of a single object.
string show(int object);

int main() {
    int* hand = nullptr;
    int pencil = FLOOR,
        book = FLOOR,
        paper = FLOOR;
    int choice;
    bool loop = true;


    do {
        cout << "What would you like to do?: ";
        cout << "----------------------------" << endl;
        cout << "\t1) GRAB" << endl;
        cout << "\t2) MOVE" << endl;
        cout << "\t3) SHOW ALL" << endl;
        cout << "\t4) QUIT" << endl;
        cout << "----------------------------" << endl;

        cin >> choice;
        switch (choice) {
            case 1:
                hand = grab(pencil, book, paper);
                break;
            case 2:
                move(hand);
                break;
            case 3:
                showAll(hand, pencil, book, paper);
                break;
            case 4:
                loop = false;
                cout << "Invalid option, try again!" << endl;
                break;
        }
    } while(loop);

    return 0;
}

int* grab(int &pencil, int &book, int &paper) {
    int choice;

    cout << "What would you like to grab?" << endl;
    cout << "----------------------------" << endl;
    cout << "\t1) pencil" << endl;
    cout << "\t2) book" << endl;
    cout << "\t3) paper" << endl;
    cout << "----------------------------" << endl;

    cin >> choice;

    switch(choice) {
        case 1:
            return &pencil;
            break;
        case 2:
            return &book;
            break;
        case 3:
            return &paper;
            break;
        default:
            return nullptr;
    }
}

void move(int* hand) {
    int choice;
    
    cout << "Where do you want to move it?" << endl;
    cout << "-----------------------------" << endl;
    cout << "1) FLOOR" << endl;
    cout << "2) CHAIR" << endl;
    cout << "3) DESK" << endl;
    cout << "-----------------------------" << endl;

    cin >> choice;

    if (choice >= 1 && choice <= 3) {
        *hand = choice;
    }


}

void showAll(int* hand, int &pencil, int &book, int &paper) {
    cout << "+++++++++++++++++++++++++++++++" << endl;
    cout << "+ HERE'S THE SITUATION SON!   +" << endl;
    cout << "+++++++++++++++++++++++++++++++" << endl;
    cout << "The pencil is on the " << show(pencil) << endl;
    cout << "The book is on the " << show(book) << endl;
    cout << "The paper is on the " << show(paper) << endl;

    if (hand == &pencil) {
        cout << "You are holding the pecnil" << endl;
    } else if (hand == &book) {
        cout << "You are holding the book" << endl;
    } else if (hand == & paper) {
        cout << "You are holding the paper" << endl;
    } else {
        cout << "You are holding nothing! :(" << endl;
    }
}

string show(int object) {
    switch(object) {
        case FLOOR:
            return "Floor";
            break;
        case CHAIR:
            return "Chair";
            break;
        case DESK:
            return "Desk";
            break;
        default:
            return "Nowhere!";
            break;
    }
}
