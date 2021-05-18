#include <iostream>
#include <cmath>

using namespace std;

//Conventional method.
int calcDogsAge(int x) {
    return x * 7;
}

//Empirical method.
double calcDogsAge(double x) {
    return 16 * log(x) + 31;
}

int main()
{
    cout << "Conventional: " << calcDogsAge(2) << endl;
    cout << "Empirial: " << calcDogsAge(2.00) << endl;

    return 0;
}
