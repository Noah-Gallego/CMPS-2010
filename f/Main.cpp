#include <iostream>
#include <fstream>
#include "Restaurant.h"

using namespace std;

void outputReviews(Restaurant arr[], int size);
void clearBuffer();

int main(int argc, char* argv[]) {
    int count;
    string n, t;
    float s;
    cout << "---------------------------------------" << endl;
    cout << "--WELCOME TO NOAH'S RESTAURANT REVIEW--" << endl;
    cout << "---------------------------------------" << endl;

    cout << "How many restaurants would you like to review: ";
    cin >> count;

    Restaurant* restaurantArr = new Restaurant[count];

    for (int i = 0; i < count; ++i) {
        clearBuffer();
        cout << "RESTAURANT: " << i + 1 << endl;
        cout << "--------------" << endl;

        cout << "NAME: ";
        getline(cin, n);
        restaurantArr[i].setName(n);

        cout << "TYPE: ";
        getline(cin, t);
        restaurantArr[i].setType(t);

        cout << "SCORE: ";
        cin >> s;
        restaurantArr[i].setScore(s);

        cout << endl;
    }

    outputReviews(restaurantArr, count);

    return 0;
}

void outputReviews(Restaurant arr[], int size) {
    ofstream ofile("reviews.csv");

    if (ofile.is_open()) {
        for (int i = 0; i < size; ++i) ofile << arr[i].toCSV() << endl;
        ofile.close();
        cout << "Files created! Take a look at your reviews :)" << endl;
    } else {
        cout << "Failed to create the file :(" << endl;
    }
}   

void clearBuffer() {
    cin.clear();
    cin.ignore(10000, '\n');
}
