// LinearSearchAlgorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int search(int array[], int N, int key)
{
	for (int i{ 0 }; i < N; ++i)
	{
		if (key == array[i])
			return i;
	}

return -1;
}
int main()
{
	int arr[] = { 20, 40, 10, 50, 30, 60, 70 };
	int N = sizeof(arr) / sizeof(arr[0]);
	int key = 30;
	int result = search(arr, N, key);
	result == -1
		? std::cout << "Element is not present in array"
		: std::cout << "Element is present at index " << result;

	return 0;
}

