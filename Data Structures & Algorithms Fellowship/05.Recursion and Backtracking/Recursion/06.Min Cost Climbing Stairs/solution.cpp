class Solution
{
public:
    int minCost(int i, vector<int> &cost, int *dp)
    {
        if (i >= cost.size())
            return 0;
        if (dp[i] != -1)
            return dp[i];
        int oneStep = cost[i] + minCost(i + 1, cost, dp);
        int twoStep = cost[i] + minCost(i + 2, cost, dp);
        return dp[i] = min(oneStep, twoStep);
    }

    int minCostClimbingStairs(vector<int> &cost)
    {
        int n = cost.size();
        int dp[n + 1];
        for (int i = 0; i < n; i++)
            dp[i] = -1;
        return min(minCost(0, cost, dp), minCost(1, cost, dp));
    }
};