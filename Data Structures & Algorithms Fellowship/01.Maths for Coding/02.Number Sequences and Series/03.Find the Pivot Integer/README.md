# Find the Pivot Integer

## Problem Description

Given a positive integer n, find the pivot integer x such that:

The sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively.
Return the pivot integer x. If no such integer exists, return -1. It is guaranteed that there will be at most one pivot index for the given input.

**Example 1:**

```js
Input: n = 8
Output: 6
Explanation: 6 is the pivot integer since: 1 + 2 + 3 + 4 + 5 + 6 = 6 + 7 + 8 = 21.
```

**Example 2:**

```js
Input: n = 1
Output: 1
Explanation: 1 is the pivot integer since: 1 = 1.
```

**Example 3:**

```js
Input: n = 1
Output: 1
Explanation: 1 is the pivot integer since: 1 = 1.
```

**Example 4:**

```js
Input: n = 4
Output: -1
Explanation: It can be proved that no such integer exist.
```

**Constraints:**

- `1 <= n <= 1000`

## Solution

```cpp
class Solution {
public:
	int pivotInteger(int n) {
    int leftSum = 0;
    int rightSum = 0;

    // Calculate the sum of all elements
    // on the right side of x
    for (int i = 1; i <= n; i++) {
        rightSum += i;
    }

    // Find the pivot integer
    for (int i = 1; i <= n; i++) {
        rightSum -= i;
        if (leftSum == rightSum) {
            return i;
        }
        leftSum += i;
    }

    // If no pivot integer is found
    return -1;	}
};
```
