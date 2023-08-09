# Maximum Subarray

## Problem Description

Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.

**Example 1:**

```js
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
```

**Example 2:**

```js
Input: nums = [1];
Output: 1;
```

**Example 3:**

```js
Input: nums = [5, 4, -1, 7, 8];
Output: 23;
```

## Solution

```cpp
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum  = 0 , ans = 0;
        for(auto it: nums) {
            sum += it;
            if(sum < 0) sum = 0;
            ans = max(sum,ans);
        }
        return ans;
    }
};
```
