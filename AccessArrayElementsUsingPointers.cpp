// AccessArrayElementsUsingPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // Method 1
    int array[10];

    for (int i{ 0 }; i < 10; ++i)
    {
        *(array + i) = i + 1;
    }

    cout << "Array elements are: ";
    for (int i{ 0 }; i < 10; i++)
    {
        cout << *(array + i) << " ";
    }
    cout << endl;

    // Method 2
    int array2[20];

    for (int i{ 0 }; i < 20; ++i)
    {
        *(i + array2) = i * 2;
    }

    cout << "Array2 elements are: ";
    for (int i{ 0 }; i < 20; ++i)
    {
        cout << *(i + array2) << " ";
    }
    cout << endl;

    return 0;
}

