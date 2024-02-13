// BinarySearchAlgoUsingRecursiveMethod.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int binarySearch(int arr[], int low, int high, int key)
{
	while (low <= high)
	{
		int mid = low + (high - low) / 2;

		if (key == arr[mid])
			return mid;
		if (key < arr[mid])
			return binarySearch(arr,low, mid-1, key);
		else
			return binarySearch(arr, mid+1, high, key);
	}

	return -1;
}
int main()
{

	int arr[] = { 20, 30, 40, 10, 40, 50, 70 };
	int x{ 70 };
	int high = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, high-1, x);
	if (result == -1)
		std::cout << "The element isn't present in an array.\n";
	else
		std::cout << "The element is present in an array at index " << result << std::endl;

	return 0;
}

