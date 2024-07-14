#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main(int argc, char *argv[]) {
    
    // Accepting argument count and array of character pointers / Error handling
    char ch;

    if (argc != 3) {
        cout << "Correct format: " << argv[0] << " input_file output_file" << endl;
        return 1;
    }

    // Define input and output files and error handling
    ifstream input(argv[1]);
    ofstream output(argv[2]);

    if (!input.is_open() || !output.is_open()) {
        cout << "Could not open file!" << endl;
        return 1;
    }

    // Read and transform all applicable characters then write to the output file
    while (input.get(ch)) {
        if (islower(ch)) ch = toupper(ch);

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') continue;

        if (ch == ' ') ch = '_';

        output.put(ch);
    }

    input.close();
    output.close();

    cout << "File processed successfully! :)" << endl; 

    return 0;
}
