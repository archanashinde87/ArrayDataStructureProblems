// BinarySearchAlgoUsingIterativeMethod.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int binarySearch(int array[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (key == array[mid])
            return mid;

        if (key < array[mid])
            high = mid - 1;

        else
            low = mid + 1;
    }

    return -1;
}
int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int size = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = size - 1;
    int result = binarySearch(arr, low, high, x);

    if (result == -1)
        std::cout << "The element isn't present in an array.\n";
    else
        std::cout << "The element is present at index " << result << std::endl;

    return 0;
}

