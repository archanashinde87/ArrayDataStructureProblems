// SortArrayFor1ToNValues.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void swap(int& a, int& b)
{
    int temp{ a };
    a = b;
    b = temp;
}
void sort(int arr[], int n)
{
    int i = 0;

    while (i < n)
    {
        int correct = arr[i] - 1;
        if (arr[i] != arr[correct])
            swap(arr[i], arr[correct]);
        else
            i++;
    }
}
int main()
{
    int arr[] = { 3, 2, 5, 6, 1, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function call 
    sort(arr, n);

    // Printing the answer 
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    return 0;
}

