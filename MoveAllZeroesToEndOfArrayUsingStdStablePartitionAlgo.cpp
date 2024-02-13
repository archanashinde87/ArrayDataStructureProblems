// MoveAllZeroesToEndOfArrayUsingStdStablePartitionAlgo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

void push_zeros_end(std::vector<int>& arr)
{
	std::stable_partition(arr.begin(), arr.end(), [](int n)
		{return n != 0; });
}

int main()
{
	std::vector<int> arr{ 1,9,8,4,0,0,2,7,0,6,0,9 };

	push_zeros_end(arr);

	for (const auto& i : arr)
	{
		std::cout << i << " ";
	}

	std::cout << std::endl;

	return 0;

}

