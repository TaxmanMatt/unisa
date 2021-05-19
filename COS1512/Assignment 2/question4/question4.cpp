#include <iostream>
#include <fstream>

using namespace std;

string outputText() {

}

int main()
{
    string inputFile, outputFile;

    cout << "Please enter the name of the input file: ";
    cin >> inputFile;

    while (inputFile != "activity.dat") {
        cout << "Incorrect filename, please enter correct file name: ";
        cin >> inputFile;
    }

    cout << "Please enter the output file name: ";
    cin >> outputFile;

    //ouputText();

    cout << "Thank you, your file has been converted.";

    return 0;
}
