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

    //while (getline(inputFile, checkEachChar)) {
    while (inputFile >> checkEachChar) {
        if (checkEachChar == '0') {
            checkEachChar = 's';
        } else
        if (checkEachChar == '1') {
            checkEachChar = 'g';
        } else
        if (checkEachChar == '2') {
            checkEachChar = 'o';
        } else
        if (checkEachChar == '3') {
            checkEachChar = 'y';
        } else
        if (checkEachChar == '4') {
            checkEachChar = 'v';
        } else
        if (checkEachChar == '5') {
            checkEachChar = 'n';
        } else
        if (checkEachChar == '6') {
            checkEachChar = 'f';
        } else
        if (checkEachChar == '7') {
            checkEachChar = 'j';
        }
/*        switch (checkEachChar) {
            case 0:
                checkEachChar = 's';
                outputFile << checkEachChar;
                break;
            case 1:
                checkEachChar = 'g';
                outputFile << checkEachChar;
                break;
            case 2:
                checkEachChar = 'o';
                outputFile << checkEachChar;
                break;
            case 3:
                checkEachChar = 'y';
                outputFile << checkEachChar;
                break;
            case 4:
                checkEachChar = 'v';
                outputFile << checkEachChar;
                break;
            case 5:
                checkEachChar = 'n';
                outputFile << checkEachChar;
                break;
            case 6:
                checkEachChar = 'f';
                outputFile << checkEachChar;
                break;
            case 7:
                checkEachChar = 'j';
                outputFile << checkEachChar;
                break;
            default:
                outputFile << checkEachChar;
                break;
        }*/
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

    outputFunc();

    cout << "Thank you, your file has been converted.";

    return 0;
}
