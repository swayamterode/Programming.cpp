# Climbing Stairs

## Problem Description

You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

**Example 1:**

```js
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
```

**Example 2:**

```js
Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
```

**Constraints:**

- `1 <= n <= 45`

## Solution

```cpp
class Solution {
public:
int findWays(int n, vector<int>& dp) {
	if(n <= 1) return 1;
	if(dp[n] != -1) return dp[n];
	return dp[n]  = findWays(n-1,dp) + findWays(n-2,dp);
}
	int climbStairs(int n) {
		vector<int>dp(n + 1,-1);
		return findWays(n,dp);
	}
};
```
