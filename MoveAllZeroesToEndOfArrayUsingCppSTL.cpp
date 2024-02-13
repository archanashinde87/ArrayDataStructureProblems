// MoveAllZeroesToEndOfArrayUsingCppSTL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

void move_zeros_to_right(std::vector<int>& m)
{
    int size = sizeof(m) / sizeof(m[0]);
    int count = 0;
    for (int i{ 0 }; i < size; i++)
    {
        if (m[i] == 0)
        {
            m.erase(m.begin() + i);
            count++;
            i--;
            size--;
        }
    }

    while (count > 0)
    {
        m.push_back(0);
        count--;
    }

    for (const auto& i : m)
        std::cout << i << " ";

}
int main()
{
    std::vector<int> m{ 5, 6, 0, 4, 6, 0, 9, 0, 8 };
    // function call 
    move_zeros_to_right(m);

    return 0;
}

