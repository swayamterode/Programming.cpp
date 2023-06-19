/**
 * @file 5.Nobita and Profit.cpp
 * @author Swayam Terode
 * @brief
 * @version 0.1
 * @date 2023-06-20
 *
 * @copyright Copyright (c) 2023
 Problem Description
Nobita wants to become rich so he came up with some ideas.
Nobita buys some gadgets from the future at a price of C and sells them at a price of S to his friends.
Now Nobita wants to know how much he gains by selling 1 gadget.
As we all know Nobita is weak in maths help him to find the profit he gets

Example 1:

Input: C = 3, S = 5
Output: 2

Example 2:

Input: C = 15, S = 20
Output: 5

 */

class Solution
{
public:
    int profit(int C, int S)
    {
        return abs(C - S);
    }
};