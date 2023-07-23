class Solution
{
public:
    int findWays(int n, vector<int> &dp)
    {
        if (n <= 1)
            return 1;
        if (dp[n] != -1)
            return dp[n];
        return dp[n] = findWays(n - 1, dp) + findWays(n - 2, dp);
    }
    int climbStairs(int n)
    {
        vector<int> dp(n + 1, -1);
        return findWays(n, dp);
    }
};