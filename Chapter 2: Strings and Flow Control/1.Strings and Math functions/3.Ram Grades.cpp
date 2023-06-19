/**
 * @file 3.Ram Grades.cpp
 * @author Swayam Terode
 * @brief
 * @version 0.1
 * @date 2023-06-20
 *
 * @copyright Copyright (c) 2023
 *

Problem Description
Ram is studying in Class V and has four subjects,
each subject carry 100 marks.
He passed with flying colors in his exam,
but when his neighbour asked how much percentage did he got in exam,
he got stuck in calculation.
Ram is a good student but he forgot how to calculate percentage.
Help Ram to get him out of this problem.

Example 1:

Input: a = 25, b = 25, c = 25, d = 25
Output: 25.00000

 */

// Answer

class Solution
{
public:
    double percentage(int a, int b, int c, int d)
    {
        double total = a + b + c + d;
        double ans = (total / 400) * 100;
    }
};