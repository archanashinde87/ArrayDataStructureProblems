// FindNumberOfTrianglesPossible.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int findNumberOfTriangles(int arr[], int size)
{
    int count = 0;
    for (int i{ 0 }; i < size; i++)
    {
        for (int j{ i+1 }; j < size; j++)
        {
            for (int k{ j+1 }; k < size; k++)
            {
                if (arr[i] + arr[j] > arr[k] && arr[i] + arr[k] > arr[j] && arr[k] + arr[j] > arr[i])
                    count++;
            }
        }
    }
    return count;
}
int main()
{
    int arr[] = { 10, 21, 22, 100, 101, 200, 300 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // Function call
    std::cout << "Total number of triangles possible is "
        << findNumberOfTriangles(arr, size);
    return 0;
}

