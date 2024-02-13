// ArrayReverseUsingLoopSwap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void printArray(int array[], int size)
{
	// print array
	for (int i{ 0 }; i < size; ++i)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

void reverseArray(int originalArray[], int start, int end)
{
	while (start < end)
	{
		int temp = originalArray[start];
		originalArray[start] = originalArray[end];
		originalArray[end] = temp;

		++start;
		--end;
	}

}
int main()
{
	int originalArray[] = { 10,20,30,40,50,60 };
	int size = sizeof(originalArray) / sizeof(originalArray[0]);

	// print original array
	std::cout << "Original array: ";
	printArray(originalArray, size);

	reverseArray(originalArray, 0, size - 1);

	std::cout << "Reversed array: ";
	printArray(originalArray, size);

	return 0;
}

