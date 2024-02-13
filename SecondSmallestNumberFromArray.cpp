// SecondSmallestNumberFromArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int secondSmallest(int arr[], int size)
{
	int smallest{ INT_MAX };
	int secondSmallest{ INT_MAX };
	for (int i{ 0 }; i < size; ++i)
	{
		if (arr[i] < smallest)
		{
			secondSmallest = smallest;
			smallest = arr[i];
		}
		else if (arr[i] != smallest && arr[i] < secondSmallest)
		{
			secondSmallest = arr[i];
		}
		
	}

	return secondSmallest;

}
int main()
{
	int arr[] = { -1,7,1,34,18 };
	int result = secondSmallest(arr, sizeof(arr) / sizeof(arr[0]));
	std::cout << "Second smallest from array: " << result << std::endl;

	return 0;
}

