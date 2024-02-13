// MoveAllZeroesToEndOfArrayUsingExtraSpace.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int A[] = { 5, 6, 0, 4, 6, 0, 9, 0, 8 };
	const int n = sizeof(A) / sizeof(A[0]);
	int j = 0;
	int count = 0;
	int B[n];

	for (int i{ 0 }; i < n; i++)
	{
		if (A[i] != 0)
		{
			B[j] = A[i];
			j++;
		}
		else
		{
			count++;
		}
	}

	while (count > 0)
	{
		B[j] = 0;
		count--;
		j++;
	}

	for (int i{ 0 }; i < n; i++)
	{
		A[i] = B[i];
	}

	for (int i{ 0 }; i < n; i++)
		std::cout << A[i] << " ";

	return 0;
}

