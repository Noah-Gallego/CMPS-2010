#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
    int num, count = 0, sum = 0;

    // Error Handling for invalid input
    if (argc != 2) {
        cout << "Format: " << argv[0] << "input_file" << endl;
        return 1;
    }

    ifstream input(argv[1]);

    if (!input.is_open()) {
        cout << "Could not open file!" << endl;
        return 1;
    }
 
    // Get the amount of numbers in the text file to size the array
    while (input >> num) {
        count++;
    }

    // Close the text file and reopen so it starts from beginning
    input.clear();
    input.seekg(0);

    // Allocate numbers to a new array
    int numArr[count];
    for(int i = 0; i < count; ++i) {
        input >> numArr[i];
    }

    //Print the numbers in reverse order
    for(int i = count - 1; i >= 0; --i) {
        cout << numArr[i] << " ";
        sum += numArr[i];
    }
    cout << endl;

    // EXTRA CREDIT:
    cout << "The sum is: " << sum;
    cout << ". The average is " << (double)sum / count << endl;

    input.close();
    return 0;
} 
