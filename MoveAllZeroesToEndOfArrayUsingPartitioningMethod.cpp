// MoveAllZeroesToEndOfArrayUsingPartitioningMethod.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void swap(int& a, int& b)
{
    int temp{ a };
    a = b;
    b = temp;
}
int main()
{
    int A[] = { 5, 6, 0, 4, 6, 0, 9, 0, 8 };
    int size = sizeof(A) / sizeof(A[0]);
    int j = 0;
    for (int i{ 0 }; i < size; ++i)
    {
        if (A[i] != 0)
        {
            swap(A[j], A[i]);
            j++;
        }
    }

    for (int i{ 0 }; i < size; ++i)
        std::cout << A[i] << " ";

    std::cout << std::endl;

    return 0;
}

