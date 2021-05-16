#include <iostream>
#include <cassert>

using namespace std;

int main()
{
    int day, month, year;

    cout << "Please enter your date of birth." << endl;
    cout << "Day: ";
    cin >> day;
    cout << "Month: ";
    cin >> month;
    assert(month > 0 && month <= 12);
    cout << "Year: ";
    cin >> year;
    assert(year > 1900 && year <= 2021);

    //Check if 30 day months.
    if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)
        //Check if month is Feb.
        if (month == 2) {
            //Leap year check if month is Feb.
            if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
                //Is Leap year.
                assert(day > 0 && day <= 29);
                cout << "Birthdate: " << day << "/" << month << "/" << year << endl;
            }
            else {
                //Not leap year.
                assert(day > 0 && day <= 28);
                cout << "Birthdate: " << day << "/" << month << "/" << year << endl;
            }
        }
        else {
            assert(day > 0 && day <= 30);
            cout << "Birthdate: " << day << "/" << month << "/" << year << endl;
        }
    //31 Day month.
    else {
        assert(day > 0 && day <= 31);
        cout << "Birthdate: " << day << "/" << month << "/" << year << endl;
    }

    return 0;
}
