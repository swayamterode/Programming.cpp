class Solution
{
public:
    int min(int a, int b, int c)
    {
        if (a < b)
        {
            if (a < c)
                return a;
        }
        else if (b < a)
        {
            if (b < c)
                return b;
        }
        else
            return c;
    }
};