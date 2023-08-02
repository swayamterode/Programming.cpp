# Power of Three

## Problem Description

Given an integer n, return true if it is a power of three. Otherwise, return false.

An integer n is a power of three, if there exists an integer x such that

`n == 3^x`

**Example 1:**

```js
Input: n = 27
Output: true
Explanation: 27 = 3^3
```

```js
**Example 2:**

Input: n = 0
Output: false
Explanation: There is no x where $3^x$ = 0.
```

**Example 3:**

```js
Input: n = -1
Output: false
Explanation: There is no x where 3^x = (-1).
```

## Solution

```cpp
class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        if (n < 1)
            return false;
        if (n == 1)
            return true;
        if (n % 3 != 0)
            return false;
        return isPowerOfThree(n / 3);
    }
};
```
