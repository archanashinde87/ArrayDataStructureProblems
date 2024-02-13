// ArrayReverseRecursionMethod.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void reverseArray(int origArray[], int start, int end)
{
    if (start >= end)
        return;

    int temp = origArray[start];
    origArray[start] = origArray[end];
    origArray[end] = temp;

    reverseArray(origArray, start + 1, end - 1);

}
int main()
{

    int origArray[] = { 10,20,30,40,50,60 };
    int size = sizeof(origArray) / sizeof(origArray[0]);

    reverseArray(origArray, 0, size - 1);

    std::cout << "Reversed Array: ";
    for (int i{ 0 }; i < size; ++i)
    {
        std::cout << origArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

