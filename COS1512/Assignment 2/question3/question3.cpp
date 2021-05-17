#include <iostream>

using namespace std;

int calcAverage(int mark1, int mark2, int weight1, int weight2);

int main()
{
    cout << calcAverage(30, 66, 70, 49);
}

int calcAverage(int weight1, int mark1, int weight2, int mark2) {
    return ((mark1 / 100) * weight1) + ((mark2 / 100) * weight2);
}
