# Subtract the Product and Sum of Digits of an Integer

## Problem Description

Given an integer number n, return the difference between the product of its digits and the sum of its digits.

**Example 1:**

```js
Input: n = 234
Output: 15
Explanation: Product of digits = 2 * 3 * 4 = 24

Sum of digits = 2 + 3 + 4 = 9

Result = 24 - 9 = 15
```

## Solution

```cpp
class Solution {
public:
	int subtractProductAndSum(int n) {
		long long int num = n;
		long long int sum = 0;
		long long int product = 1;
		while(n != 0) {
			int digit = n % 10;
			n /= 10;
			product *=  digit;
		}
		while(num != 0) {
			int digit = num % 10;
			num /= 10;
			sum +=  digit;
		}
		return product - sum;
	}
};
```
