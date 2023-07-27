// Problem Description
// Write a program to compare three strings if they are equal.

// Example 1:

// Input: str1 = "hello", str2 = "hello", str3 = "hello"
// Output: true

class Solution
{
public:
    bool compare(string str1, string str2, string str3)
    {
        if (str1 == str2)
        {
            if (str2 == str3)
            {
                return true;
            }
        }
        return false;
    }
};