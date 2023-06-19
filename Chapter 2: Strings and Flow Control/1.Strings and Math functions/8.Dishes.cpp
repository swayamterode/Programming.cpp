/**
 * @file 8.Dishes.cpp
 * @author Swayam Terode
 * @brief
 * @version 0.1
 * @date 2023-06-20
 *
 * @copyright Copyright (c) 2023
Problem Description
Sheldon and Leonard are gone for lunch but none of them have money so they decided to wash dishes.
In total, they washed T dishes from which N dishes are washed by Leonard.
Now Leonard wants to know the number of dishes Sheldon washed. Help him to find it.

Example 1:

Input: N = 3, T = 6
Output: 3

Example 2:

Input: N = 2, T = 4
Output: 2

*/

class Solution
{
public:
    int SheldonDishes(int N, int T)
    {
        return abs(N - T);
    }
};