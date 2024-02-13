// RearrangeEvenPositionedAreGreaterThanOddPositioned.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void swap(int& a, int& b)
{
    int temp{ a };
    a = b;
    b = temp;
}
void rearrange(int arr[], int size)
{
    for (int i{0}; i<size-1; i+=2)
    {
        if (arr[i] < arr[i + 1])
            swap(arr[i + 1], arr[i]);
    }
}
int main()
{
    int n = 5;
    int arr[] = { 1, 3, 6, 8, 5 };
    rearrange(arr, n);
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";
    return 0;
}

