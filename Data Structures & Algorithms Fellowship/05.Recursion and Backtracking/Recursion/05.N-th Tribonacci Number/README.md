# N-th Tribonacci Number

## Problem Description

The Tribonacci sequence Tn is defined as follows:

`T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.`

Given `n`, return the value of Tn.

**Example 1:**

```js
Input: n = 4
Output: 4
Explanation: T_3 = 0 + 1 + 1 = 2
T_4 = 1 + 1 + 2 = 4
```

**Example 2:**

```js
Input: n = 25;
Output: 1389537;
```

## Solution

Recursion (TLE ❌)

```cpp
class Solution {
public:
int solve(int n , vector<int>&dp) {
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;
        return (solve(n-1,dp) + solve(n-2,dp) + solve(n-3,dp));
}
	int tribonacci(int n) {
        return solve(n,dp);
	}
};
```

Dp (Memo) ✅

```cpp
class Solution {
public:
int solve(int n , vector<int>&dp) {
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;
        if(dp[n] != -1) return dp[n];
        return dp[n] = (solve(n-1,dp) + solve(n-2,dp) + solve(n-3,dp));
}
	int tribonacci(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
	}
};
```
