/**
 * @file 4.Increment and Decrement.cpp
 * @author Swayam Terode
 * @brief
 * @version 0.1
 * @date 2023-06-20
 *
 * @copyright Copyright (c) 2023
 *
Problem Description
You must be familiar with various types of operators. One of the most commonly used operators in other languages is increment and decrement operators.
Given two numbers X and Y.
Your task is to print the value of X decremented by 1 and value of Y after incrementing it by 1.

Example 1:

Input: X = 4, Y = 5
Output: [3,6]

 */

// Answer

class Solution
{
public:
    vector<int> XandY(int X, int Y)
    {
        return {--X, ++Y};
    }
};