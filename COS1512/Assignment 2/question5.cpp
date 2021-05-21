#include <iostream>
#include <cstring>

using namespace std;

void fullName();
void noMiddleName();


int main()
{
    while(true) {
        char choice;
        cout << "Do you have a middle name? Enter y or n: ";
        cin >> choice;

        switch(choice) {
            case 'Y':
            case 'y':
                fullName();
                break;
            case 'N':
            case 'n':
                noMiddleName();
                break;
            default:
                cout << "Error: Please choose y or n." << endl << endl;
                continue;
        } break;
    }

    return 0;
}

void fullName() {
    char firstName[20], middleName[20], surname[20];

    cout << "Enter your name, middle name and surname: ";
    cin >> firstName >> middleName >> surname;
    cout << surname << ", " << firstName << " " << middleName[0] << ". ";

}

void noMiddleName() {
    char firstName[20], surname[20];

    cout << "Enter your name and surname: ";
    cin >> firstName >> surname;


    if (islower(surname[0])) {
        putchar(toupper(surname[0]));
        for (int i = 1; i < strlen(surname); i++) {
            putchar(tolower(surname[i]));
        }
    } else
        putchar(surname[0]);
        for (int i = 1; i < strlen(surname); i++) {
            putchar(tolower(surname[i]));
        }
/*
    cout << ", ";

    if (islower(firstName[0])) {
        putchar(toupper(firstName[0]));
        for (int i = 1; i < strlen(firstName); i++) {
            putchar(tolower(firstName[i]));
        }
    } else
        putchar(firstName[0]);
        for (int i = 1; i < strlen(firstName); i++) {
            putchar(tolower(firstName[i]));
        }*/
}
