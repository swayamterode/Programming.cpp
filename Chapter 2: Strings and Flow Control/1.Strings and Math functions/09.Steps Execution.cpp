
// Problem Description
// Take 4 digit number input from the user, add 8 to it and then divide it by 3(Only take integer part) Now, the modulus of that number is taken with 5 and then multiply the resultant value by 5. Display the final result.

// Example 1:

// Input: number = 2345
// Output: 20

class Solution
{
public:
    int finalResult(int number)
    {
        int res = number + 8;
        res /= 3;
        res %= 5;
        res *= 5;
        return res;
    }
};