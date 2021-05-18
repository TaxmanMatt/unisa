#include <iostream>
#include <fstream>

using namespace std;

double calcAverage(double weight1, double mark1, double weight2, double mark2);

int main()
{
    cout << fixed;
    cout.precision(2);
    cout << calcAverage(30, 66, 70, 49) << "%";
}

double calcAverage(double weight1, double mark1, double weight2, double mark2) {
    ifstream inputFile("assignments.dat");
    return ((mark1 / 100) * weight1) + ((mark2 / 100) * weight2);
}
