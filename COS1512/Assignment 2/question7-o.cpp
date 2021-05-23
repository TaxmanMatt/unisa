#include <iostream>
#include <cstddef>

using namespace std;

int main()
{
    cout << "Enter size of array: ";
    size_t length{};
    cin >> length;

    int *array{ new int[length]{} };
    cout << "Array of integers of length " << length << " allocated."<< endl;

    // Loop to request integer for each element.
    for (int i = 0; i < length; i++) {
        cout << "Please enter your integer: ";
        cin >> array[i];
    }

    // TODO Loop through array for largest integer.
    for (int i = 0; i < length; i++) {
        //check for largest.
    }

    delete[] array;

    return 0;
}
