// Problem Description
// Write a program to find if the given year is a leap year or not.

// Example 1:

// Input: year = 2020
// Output: true
// Explanation:
// Example 2:

// Input: year = 2004
// Output: true
// Explanation: 2
// Example 3:

// Input: year = 1900
// Output: false
// Explanation:
// Example 4:

// Input: year = 2000
// Output: true

class Solution
{
public:
    bool leapyear(int year)
    {
        if (year % 4 != 0)
        {
            return false;
        }
        else if (year % 100 != 0)
        {
            return true;
        }
        else if (year % 400 != 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};