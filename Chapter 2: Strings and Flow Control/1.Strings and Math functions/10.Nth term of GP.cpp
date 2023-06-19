// Problem Description
// Write a program to find the nth term of the series. Given ‘a’ the First term, ‘r’ the common ratio and ‘n’ for the number of terms in a series.

// Example 1:

// Input: a = 2, r = 3, N = 5
// Output: 162
class Solution
{
public:
    int Nth_of_GP(int a, int r, int N)
    {
        return a * pow(r, N - 1);
    }
};