#include <iostream>
#include <fstream>

using namespace std;

double calcAverage(double weight1, double mark1, double weight2, double mark2);
void writeFile(string subjectCode, double average);

int main() {
    ifstream inputFile("assignments.dat");

    string subjectCode;
    double weight1, mark1, weight2, mark2, average;

    while (inputFile >> subjectCode >> weight1 >> mark1 >> weight2 >> mark2) {
        average = calcAverage(weight1, mark1, weight2, mark2);
        writeFile(subjectCode, average);
    }

    cout << "Average has been written to yearmark.dat" << endl;

    return 0;
}

double calcAverage(double weight1, double mark1, double weight2, double mark2) {
    return ((mark1 / 100) * weight1) + ((mark2 / 100) * weight2);
}

void writeFile(string subjectCode, double average) {
    ofstream outputFile("yearmark.dat", std::ios_base::app);
    outputFile << fixed;
    outputFile.precision(2);
    outputFile << subjectCode << " " << average << "%" << endl;
}
