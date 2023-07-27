// This is a C++ function that checks whether a given string is a palindrome or not.
// A palindrome is a word, phrase, number, or other sequence of characters that reads the same backward as forward.
// The function uses two pointers technique to compare characters from the beginning and end of the string.

class Solution
{
public:
    bool isPalindrome(string s)
    {
        if (s.length() <= 1)
            return true; // If the string has 0 or 1 character, it is considered a palindrome.

        int st = 0, en = s.length() - 1; // Initialize two pointers, st points to the start of the string and en points to the end.

        while (st < en)
        {
            // Skip non-alphanumeric characters from the start of the string.
            while (st < en && !isalnum(s[st]))
                st++;

            // Skip non-alphanumeric characters from the end of the string.
            while (st < en && !isalnum(s[en]))
                en--;

            // Compare the characters at the current positions (ignoring case).
            // If they are not the same, the string is not a palindrome.
            if (tolower(s[st]) != tolower(s[en]))
                return false;

            st++; // Move the start pointer forward.
            en--; // Move the end pointer backward.
        }

        // If the loop completes without finding any mismatch, the string is a palindrome.
        return true;
    }
};
