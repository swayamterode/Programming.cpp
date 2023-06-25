class Solution
{
public:
    int countVowels(string s)
    {
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            {
                count++;
            }
        }
        return count;
    }
};