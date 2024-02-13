// ArrayReverseInBuildMethod.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>

int main()
{
    int originalArray[] = { 10,20,30,40,50,60,70,80,90 };
    int length = sizeof(originalArray) / sizeof(originalArray[0]);

    std::reverse(originalArray, originalArray + length);

    std::cout << "Reversed Array: ";
    for (int i{ 0 }; i < length; ++i)
    {
        std::cout << originalArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

