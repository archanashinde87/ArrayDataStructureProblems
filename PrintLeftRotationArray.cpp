// PrintLeftRotationArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp{ arr[start] };
        arr[start] = arr[end];
        arr[end] = temp;
        ++start;
        --end;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void leftRotate(int arr[],int n, int k)
{
    if (k > n)
        k = k % n;

    reverseArray(arr, 0, k - 1);
    reverseArray(arr, k, n - 1);
    reverseArray(arr, 0, n - 1);

    printArray(arr, n);

}
int main()
{
    int arr[] = { 1, 3, 5, 7, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 2;

    // Function Call
    leftRotate(arr, n, k);

    k = 3;

    // Function Call
    leftRotate(arr, n, k);

    k = 4;

    // Function Call
    leftRotate(arr, n, k);

    return 0;
}

