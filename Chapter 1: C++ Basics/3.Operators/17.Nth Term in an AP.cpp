class Solution
{
public:
    int nthTermInAnAP(int a, int d, int n)
    {
        return a + (n - 1) * d;
    }
};