// ArrayNumberAdditions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int num[] = { 11,12,13,14,15,16 };
	double sum{ 0 };
	double count{ 0 };
	std::cout << "The number is ";

	for (const auto& n : num)
	{
		// print number
		std::cout << n << " " << std::endl;

		// add number
		sum += n;

		//increment count
		++count;
	
	}

	std::cout << "The addition of numbers is: " << sum << std::endl;
	std::cout << "The number of elements in array are : " << count << std::endl;

	double avg = sum / count;
	std::cout << "The avg of addition of array elements is : " << avg << std::endl;

	return 0;
}

