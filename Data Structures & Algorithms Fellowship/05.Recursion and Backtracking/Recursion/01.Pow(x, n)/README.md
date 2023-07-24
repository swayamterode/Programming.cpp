# Pow(x, n)

Implement pow(x, n), which calculates `x` raised to the power `n` (i.e., `x^n`).

**Example 1:**

```js
Input: (x = 2.0), (n = 10);
Output: 1024.0;
```

**Example 2:**

```js
Input: (x = 2.1), (n = 3);
Output: 9.261;
```

**Example 3:**

```js
Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25
```

**Constraints:**

- `-100.0 < x < 100.0`
- `-231 <= n <= 231-1`
- `n is an integer.`
- `Either x is not zero or n > 0.`
- `-104 <= xn <= 104`

## Solution

```cpp
class Solution
{
    private:
        double solve(double x, long n)	//long lena hai yaad se!
    {
        if (n == 0) return 1;
        if (n < 0)
        {
            return solve(1 / x, -n);
        }

       	//for the even case;
        if (n % 2 == 0) return solve(x *x, n / 2);
        return x* solve(x *x, (n - 1) / 2);	//odd case;
    }
    public:
        double myPow(double x, int n)
        {
            return solve(x, (long) n);
        }
};
```
