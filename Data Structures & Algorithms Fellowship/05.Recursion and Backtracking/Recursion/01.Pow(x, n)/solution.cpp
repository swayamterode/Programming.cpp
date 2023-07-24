class Solution
{
private:
    double solve(double x, long n) // long lena hai yaad se!
    {
        if (n == 0)
            return 1;
        if (n < 0)
        {
            return solve(1 / x, -n);
        }

        // for the even case;
        if (n % 2 == 0)
            return solve(x * x, n / 2);
        return x * solve(x * x, (n - 1) / 2); // odd case;
    }

public:
    double myPow(double x, int n)
    {
        return solve(x, (long)n);
    }
};