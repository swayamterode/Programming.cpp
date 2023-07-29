# Find the Duplicate Number

## Problem Description

Given an array of integers nums containing n + 1 integers where each integer is in the range `[1, n]` inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

**Example 1:**

Input: nums = [1,3,4,2,2]
Output: 2

**Example 2:**

Input: nums = [3,1,3,4,2]
Output: 3

## Solution

```cpp
class Solution
{
    public:
        int findDuplicate(vector<int> &nums)
        {
           	// tortoise method
            int slow = nums[0];
            int fast = nums[0];

            do {
                slow = nums[slow];	//1x speed
                fast = nums[nums[fast]];	//2x speed
            }
            while (slow != fast);

            fast = nums[0];
            while (slow != fast)
            {
                slow = nums[slow];	//1x speed
                fast = nums[fast];	//1x speed
            }
            return slow; // you can also return fast ✅
        }
};
```
