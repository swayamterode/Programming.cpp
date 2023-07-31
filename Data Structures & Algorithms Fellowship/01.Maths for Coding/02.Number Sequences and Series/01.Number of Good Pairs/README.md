# Number of Good Pairs

## Problem Description

Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if `nums[i] == nums[j]` and `i < j`.

**Example 1:**

```js
Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
```

**Example 2:**

```js
Input: nums = [1,1,1,1]
Output: 6
Explanation: Each pair in the array are good.
```

**Example 3:**

```js
Input: nums = [1, 2, 3];
Output: 0;
```

## Solution

```cpp
class Solution {
    public:
   int numIdenticalPairs(vector<int>& nums) {
     int n = nums.size();
     int  count = 0;
     for(int i = 0; i<n; i++)
     {
       for(int j = i+1; j<n; j++)
       {
         if(nums[i] == nums[j]) count++;
       }
     }
     return count;

   }
};
```
