#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    char firstName[20], middleName[20], surname[20];

    cout << "Enter your name, middle name and surname: ";
    cin >> firstName >> middleName >> surname;

    cout << surname << ", " << firstName << " " << middleName[0] << ". ";

    return 0;
}
