/**
 * @file 2.Nobits's Test.cpp
 * @author Swayam Terode
 * @brief
 * @version 0.1
 * @date 2023-06-20
 *
 * @copyright Copyright (c) 2023
 *
 *
Nobita wants to score well in his upcoming test, but he is not able to solve the simple division problems, seeing Nobita's determination Doraemon gives him a gadget that can do division problems easily but somehow Nobita deleted the internal program which calculates the division.

As an excellent coder, Nobita came to you for help. Help Nobita to write a code for his gadget.
You will be given two integers D and Q , you have to print the floor value of D/Q

Example 1:

Input: D = 9, Q = 3
Output: 3
Explanation: $8/5 = 1.6 = 1(floor)$

Example 2:

Input: D = 8, Q = 5
Output: 1

 */

// Answer

class Solution
{
public:
    int floorDivision(int D, int Q)
    {
        return floor(D / Q);
    }
};