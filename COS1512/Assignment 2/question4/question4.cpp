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
    string checkEachChar;

    while (getline(inputFile, checkEachChar)) {
    //while (inputFile >> checkEachChar) {
        if (checkEachChar == "2") {
            checkEachChar = "o";
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

    outputFunc();

    cout << "Thank you, your file has been converted.";

    return 0;
}
