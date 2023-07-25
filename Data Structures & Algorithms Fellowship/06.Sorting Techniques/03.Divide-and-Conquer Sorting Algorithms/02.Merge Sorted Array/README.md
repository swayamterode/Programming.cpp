# Merge Sorted Array

## Problem Description

You are given two integer arrays nums1 and nums2, sorted in **non-decreasing order** of length say m and n.

Merge nums1 and nums2 into a single array sorted in **non-decreasing order** and return the new array of length m + n.

**Example 1:**

```js
Input: nums1 = [1, 2, 3], nums2 = [2, 5, 6]
Output: [1, 2, 2, 3, 5, 6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6].
```

**Example 2:**

```js
Input: nums1 = [1], nums2 = [-1]
Output: [-1,1]
Explanation: The arrays we are merging are [1] and [-1].
The result of the merge is [-1, 1].
```

**Example 3:**

```js
Input: nums1 = [0], nums2 = [1]
Output: [0, 1]
Explanation: The arrays we are merging are [0] and [1].
The result of the merge is [0, 1].
```

**Constraints:**

- `nums1.length == m + n`
- `nums2.length == n`
- `0 <= m, n <= 200`
- `1 <= m + n <= 200`
- `-10^9 <= nums1[i], nums2[j] <= 10^9`

## Solution

```cpp
// brute force

class Solution
{
public:
    vector<int> merge(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++)
        {
            ans.push_back(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// Optimal Approach

class Solution
{
public:
    vector<int> merge(vector<int> &nums1, vector<int> &nums2)
    {
        // Your code goes here
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> ans(n1 + n2);
        int i = 0, j = 0, k = 0;

        // Traverse both array
        while (i < n1 && j < n2)
        {
            // Check if current element of first
            // array is smaller than current element
            // of second array. If yes, store first
            // array element and increment first array
            // index. Otherwise do same with second array
            if (nums1[i] < nums2[j])
                ans[k++] = nums1[i++];
            else
                ans[k++] = nums2[j++];
        }

        // Store remaining elements of first array
        while (i < n1)
            ans[k++] = nums1[i++];

        // Store remaining elements of second array
        while (j < n2)
            ans[k++] = nums2[j++];

        return ans;
    }
};
```
