# Min Cost Climbing Stairs

## Problem Description

You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.

You can either start from the step with index 0, or the step with index 1.

Return the minimum cost to reach the top of the floor.

**Example 1:**

```js
Input: cost = [10,15,20]
Output: 15
Explanation: You will start at index 1.
- Pay 15 and climb two steps to reach the top.
The total cost is 15.
```

**Example 2:**

```js
Input: cost = [1,100,1,1,1,100,1,1,100,1]
Output: 6
Explanation: You will start at index 0.
- Pay 1 and climb two steps to reach index 2.
- Pay 1 and climb two steps to reach index 4.
- Pay 1 and climb two steps to reach index 6.
- Pay 1 and climb one step to reach index 7.
- Pay 1 and climb two steps to reach index 9.
- Pay 1 and climb one step to reach the top.
The total cost is 6.
```

**Constraints:**

- `2 <= cost.length <= 1000`
- `0 <= cost[i] <= 999`

## Solution

```cpp
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
```
