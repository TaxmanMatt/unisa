#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string outputFunc() {
    string fileName;

    cout << "Please enter the output file name: ";
    cin >> fileName;

    // Assigns the user input filename.
    ofstream outputFile(fileName.c_str());

    ifstream inputFile("activity.dat");
    char checkEachChar;

    // Checks each char and feeds it into a variable and converts
    // it to the desired char.
    while (inputFile >> std::noskipws >> checkEachChar) {
        switch (checkEachChar) {
            case '0':
                checkEachChar = 's';
                break;
            case '1':
                checkEachChar = 'g';
                break;
            case '2':
                checkEachChar = 'o';
                break;
            case '3':
                checkEachChar = 'y';
                break;
            case '4':
                checkEachChar = 'v';
                break;
            case '5':
                checkEachChar = 'n';
                break;
            case '6':
                checkEachChar = 'f';
                break;
            case '7':
                checkEachChar = 'j';
                break;
        }
        outputFile << checkEachChar;
    }
}

int main()
{
    string inputFile;

    cout << "Please enter the name of the input file: ";
    cin >> inputFile;

    // Checks to make sure input file name is correct.
    while (inputFile != "activity.dat") {
        cout << "Incorrect filename, please enter correct file name: ";
        cin >> inputFile;
    }

    // Runs the function to convert the file.
    outputFunc();

    cout << "Thank you, your file has been converted.";

    return 0;
}
