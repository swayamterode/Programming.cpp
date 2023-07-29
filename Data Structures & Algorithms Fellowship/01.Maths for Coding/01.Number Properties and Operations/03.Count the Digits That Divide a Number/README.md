# Count the Digits That Divide a Number

## Problem Description

Given an integer num, return the number of digits in num that divide num.

An integer val divides nums if `nums % val == 0`

**Example 1:**

```js
Input: num = 121
Output: 2
Explanation: 121 is divisible by 1, but not 2. Since 1 occurs twice as a digit, we return 2.
```

**Example 2:**

```js
Input: num = 1248
Output: 4
Explanation: 1248 is divisible by all of its digits, hence the answer is 4.
```

## Solution

```cpp
class Solution {
public:
	int countDigits(int num) {
        int count = 0;
        int number = num;
        while(num != 0)
        {
            int rem = num % 10;
            num /= 10;
            if(number % rem == 0)
                count++;
        }
        return count;
	}
};
```
