// ThreeLargestElementsFromArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void print3largest(int arr[], int size)
{
    // There should be at least 3 elements
    if (size < 3)
    {
        std::cout << "Invalid Input";
        return;
    }

    int first, second, third;
    first = second = third = INT_MIN;

    for (int i{ 0 }; i < size; ++i)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i]>second && arr[i]!=first)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i]!=second && arr[i] != first)
        {
            third = arr[i];
        }
    }

    std::cout << "Three largest numbers are: " << first << " " << second << " " << third;
}
int main()
{
    int arr[] = { 12, 13, 1, 10, 34, 11, 34 };
    int n = sizeof(arr) / sizeof(arr[0]);

    print3largest(arr, n);
    return 0;
}

