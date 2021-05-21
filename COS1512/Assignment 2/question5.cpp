#include <iostream>
#include <cstring>

using namespace std;

void fullName();
void noMiddleName();

int main()
{
    // Check if user has a middle name.
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

    // Check if surname is lower case.
    if (islower(surname[0])) {
        putchar(toupper(surname[0]));
        for (int i = 1; i < strlen(surname); i++) {
            putchar(tolower(surname[i]));
        }
    } else {
        putchar(surname[0]);
        for (int i = 1; i < strlen(surname); i++) {
            putchar(tolower(surname[i]));
        }
    }

    cout << ", ";

    // Check if first name is lower case.
    if (islower(firstName[0])) {
        putchar(toupper(firstName[0]));
        for (int i = 1; i < strlen(firstName); i++) {
            putchar(tolower(firstName[i]));
        }
    } else {
        putchar(firstName[0]);
        for (int i = 1; i < strlen(firstName); i++) {
            putchar(tolower(firstName[i]));
        }
    }

    // Check if middle name starts with lower case letter.
    if (islower(middleName[0])) {
        cout << " ";
        putchar(toupper(middleName[0]));
        cout << ". ";
    }
}

void noMiddleName() {
    char firstName[20], surname[20];

    cout << "Enter your name and surname: ";
    cin >> firstName >> surname;

    // Check if surname is lower case.
    if (islower(surname[0])) {
        putchar(toupper(surname[0]));
        for (int i = 1; i < strlen(surname); i++) {
            putchar(tolower(surname[i]));
        }
    } else {
        putchar(surname[0]);
        for (int i = 1; i < strlen(surname); i++) {
            putchar(tolower(surname[i]));
        }
    }

    cout << ", ";

    // Check if first name is lower case.
    if (islower(firstName[0])) {
        putchar(toupper(firstName[0]));
        for (int i = 1; i < strlen(firstName); i++) {
            putchar(tolower(firstName[i]));
        }
    } else {
        putchar(firstName[0]);
        for (int i = 1; i < strlen(firstName); i++) {
            putchar(tolower(firstName[i]));
        }
    }
}
