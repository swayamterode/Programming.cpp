class Solution
{
public:
    long factorial(int fact)
    {
        if (fact <= 1)
        {
            return 1;
        }
        return fact * factorial(fact - 1);
    }
};