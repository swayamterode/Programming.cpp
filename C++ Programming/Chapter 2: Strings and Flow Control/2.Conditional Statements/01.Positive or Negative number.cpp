// Problem Description
// Write a Program to Check if a Number is Positive , Negative or zero .

// Example 1:

// Input: number = 23
// Output: positive

class Solution
{
public:
    string CheckPositiveOrNegative(int number)
    {
        if (number > 0)
            return "positive";
        else if (number == 0)
            return "zero";
        else
            return "negative";
    }
};