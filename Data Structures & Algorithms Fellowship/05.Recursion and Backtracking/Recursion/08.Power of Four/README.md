# Power of Four

Problem Description
Given an integer n, return true if it is a power of four. Otherwise, return false.

An integer n is a power of four, if there exists an integer x such that

`n==4^x`

**Example 1:**

```js
Input: n = 16;
Output: true;
```

**Example 2:**

```js
Input: n = 5;
Output: false;
```

## Solution

```cpp
class Solution {
public:
	bool isPowerOfFour(int n) {
        if(n <= 0) return false;
        if(n == 1) return true;
        if(n%4 != 0) return false;
        return isPowerOfFour(n/4);
	}
};
```
