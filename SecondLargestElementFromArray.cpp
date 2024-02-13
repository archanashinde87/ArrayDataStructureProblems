// SecondLargestElementFromArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int secondLargest(int arr[], int size)
{
    int largest{ INT_MIN };
    int secondLargest{ INT_MIN };

    for (int i{ 0 }; i < size; ++i)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest)
        {
            if (largest!=arr[i] && arr[i] > secondLargest)
                secondLargest = arr[i];
        }

    }
    return secondLargest;

}
int main()
{
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int arr1[] = { 60,50,40,30,20,10};
    int arr2[] = { 60,40,30,50,20,10 };
    int arr3[] = { -1,7,1,34,18 };
    int arr4[] = { 50,40,30,60,20,10 };


    int result = secondLargest(arr, sizeof(arr) / sizeof(arr[0]));
    std::cout << "Second largest from array: " << result << std::endl;

    int result1 = secondLargest(arr1, sizeof(arr1) / sizeof(arr1[0]));
    std::cout << "Second largest from array1 : " << result1 << std::endl;

    int result2 = secondLargest(arr2, sizeof(arr2) / sizeof(arr2[0]));
    std::cout << "Second largest from array2 : " << result2 << std::endl;

    int result3 = secondLargest(arr3, sizeof(arr3) / sizeof(arr3[0]));
    std::cout << "Second largest from array2 : " << result3 << std::endl;

    int result4 = secondLargest(arr4, sizeof(arr4) / sizeof(arr4[0]));
    std::cout << "Second largest from array2 : " << result4 << std::endl;

    return 0;

}

