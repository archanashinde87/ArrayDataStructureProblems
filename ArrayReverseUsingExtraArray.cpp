// ArrayReverseUsingExtraArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void printArray(int array[], int size)
{
    // print array
    for (int i{ 0 }; i < size; ++i)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}

void reverseArray(int originalArray[], int size)
{
    int* reversedArray = new int[size];

    for (int i{ 0 }; i < size; ++i)
    {
        reversedArray[i] = originalArray[size - i - 1];
    }
    std::cout << "Reversed array: ";
    printArray(reversedArray, size);

    delete[] reversedArray;
}

int main()
{
    int originalArray[] = { 1,2,3,4,5 };
    int size = sizeof(originalArray) / sizeof(originalArray[0]);
    // print original array
    std::cout << "Original array: ";
    printArray(originalArray,size);

    reverseArray(originalArray, size);

    return 0;
}

