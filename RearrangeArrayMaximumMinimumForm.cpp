// RearrangeArrayMaximumMinimumForm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Input: arr[] = {1, 2, 3, 4, 5, 6, 7}
Output: arr[] = {7, 1, 6, 2, 5, 3, 4}

Input: arr[] = {1, 2, 3, 4, 5, 6}
Output: arr[] = {6, 1, 5, 2, 4, 3}

*/
#include <iostream>

void rearrange(int arr[], int n)
{
    int* temp = new int[n] {};
    int small = 0;
    int large = n - 1;
    int flag = true;

    for (int i{ 0 }; i < n; i++)
    {
        if (flag)
        {
            temp[i] = arr[large];
            large--;
        }
        else
        {
            temp[i] = arr[small];
            small++;
        }
        flag = !flag;

    }

    for (int i{ 0 }; i < n; i++)
    {
        arr[i] = temp[i];
    }
    delete[] temp;
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original Array\n";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";

    rearrange(arr, n);

    std::cout << "\nModified Array\n";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    return 0;
}


