/**
Sara is standing in a line for her turn to see the doctor.
There are N people standing in front of Sara and for each person, the doctor takes exactly X minutes.
Sara wants to know the time after which her number comes. Since Sara is weak in maths, your task is to calculate the time for her.

Example 1:

Input: N = 5, X = 3
Output: 15

Example 2:

Input: N = 3, X = 2
Output: 6

*
*/

class Solution
{
public:
    int timeForSara(int N, int X)
    {
        return N * X;
    }
};