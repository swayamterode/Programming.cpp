/**
 * @file 6.Operators.cpp
 * @author Swayam Terode
 * @brief
 * @version 0.1
 * @date 2023-06-20
 *
 * @copyright Copyright (c) 2023
 *
Problem Description
Given two integers a and b, your task is to calculate and print the following four values:-

a+b

a-b

a*b

a/b

Example 1:

Input: a = 15, b = 3
Output: [18,12,45,5]
 */
class Solution
{
public:
    vector<int> fourOperations(int a, int b)
    {
        vector<int> ans;
        ans.push_back(a + b);
        ans.push_back(a - b);
        ans.push_back(a * b);
        ans.push_back(a / b);
        return ans;
    }
};