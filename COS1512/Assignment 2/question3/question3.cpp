#include <iostream>

using namespace std;

double calcAverage(double weight1, double mark1, double weight2, double mark2);

int main()
{
    cout << calcAverage(30, 66, 70, 49);
}

double calcAverage(double weight1, double mark1, double weight2, double mark2) {
    return ((mark1 / 100) * weight1) + ((mark2 / 100) * weight2);
}
