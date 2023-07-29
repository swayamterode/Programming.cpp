# Three Divisors

## Problem Description

Given an integer n, return true if n has exactly three positive divisors. Otherwise, return false.

An integer m is a divisor of n if there exists an integer k such that n = k \* m.

**Example 1:**

```js
Input: n = 2
Output: false
Explanation:  2 has only two divisors: 1 and 2.
```

**Example 2:**

```js
Input: n = 4
Output: true
Explanation: 4 has three divisors: 1, 2, and 4.
```

**Example 3:**

```js
Input: n = 4
Output: true
Explanation: 4 has three divisors: 1, 2, and 4.
```

## Solution

```cpp
class Solution {
public:
	bool isThree(int n) {
		int count = 0;
		for(int i = 1; i<= n; i++)
		{
			if(n % i == 0) count++;
		}
		return count == 3;
	}
};
```
