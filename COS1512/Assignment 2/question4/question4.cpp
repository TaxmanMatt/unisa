#include <iostream>
#include <fstream>

using namespace std;

string outputFunc() {
    string fileName;

    cout << "Please enter the output file name: ";
    cin >> fileName;

    ofstream myFile(fileName.c_str());

    myFile << "add all the shit into this file.";
}

int main()
{
    string inputFile;

    cout << "Please enter the name of the input file: ";
    cin >> inputFile;

    while (inputFile != "activity.dat") {
        cout << "Incorrect filename, please enter correct file name: ";
        cin >> inputFile;
    }

    outputFunc();

    cout << "Thank you, your file has been converted.";

    return 0;
}
