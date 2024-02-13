// ArrayReverseUsingStack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>

void reverseArrayUsingStack(int origArray[], int size)
{
    std::stack<int> stk;

    // push elements on to the stack
    for (int i{ 0 }; i < size; ++i)
    {
        stk.push(origArray[i]);
    }

    // pop elements from the stack to reverse the array
    for (int i{ 0 }; i < size; ++i)
    {
        origArray[i] = stk.top();
        stk.pop();
    }

}
int main()
{
    int origArray[] = { 1,2,3,4,5,6,7,8,9 };
    int size = sizeof(origArray) / sizeof(origArray[0]);

    reverseArrayUsingStack(origArray, size);

    std::cout << "Reversed Array: ";

    for (int i{ 0 }; i < size; ++i)
    {
        std::cout << origArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

