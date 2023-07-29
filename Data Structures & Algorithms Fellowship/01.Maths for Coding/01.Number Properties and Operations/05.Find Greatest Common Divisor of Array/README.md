# Find Greatest Common Divisor of Array

## Problem Description

Given an integer array nums, return\*\*\*\* the greatest common divisor of the smallest number and largest number in nums.

The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.

**Example 1:**

```js
Input: nums = [2,5,6,9,10]
Output: 2
Explanation: The smallest number in nums is 2.

The largest number in nums is 10.

The greatest common divisor of 2 and 10 is 2.
```

**Example 2:**

```js
Input: nums = [7,5,6,8,3]
Output: 1

Explanation: The smallest number in nums is 3.

The largest number in nums is 8.

The greatest common divisor of 3 and 8 is 1.
```

## Solution

```cpp
class Solution {
public:
    int gcd(int a,int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    int findGCD(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int x=nums[i];
            mini=min(mini,x);
            maxi=max(maxi,x);
        }
        return gcd(mini,maxi);
    }
};
```
