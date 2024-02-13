// ArrayRotationReverseAlgorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
}

void ReverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp{ arr[start] };
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        --end;
    }
}
void leftRotate(int arr[], int d, int N)
{
    if (d == 0)
        return;
    if (d > N)
        d = d % N;

    ReverseArray(arr, 0, d - 1);
    ReverseArray(arr, d, N - 1);
    ReverseArray(arr, 0, N - 1);
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    // Function call
    leftRotate(arr, d, N);
    printArray(arr, N);
    return 0;
}

