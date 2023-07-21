# Maths for Coding

## 1. Count the Digits That Divide a Number

<details>

```
Given an integer `num`, return the number of digits in `num` that divide `num`.

An integer val divides `nums` if `nums % val == 0`
```

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

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

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

    </details>

- <details>

    <summary>Editorial</summary>

    <br>

  **Approach 1:** Using modulo operator and Divison
  Intuition

  Just extract the digits that number consists and check how many digits divide the number using modulo operator.

  `Algorithm`

  - Store the num in temp variable also declare answer as 0.
  - Extract the each digit using digit=num%10
  - Check if the digit divides the temp
  - Increment the answer.

    <br>

  ```cpp
    class Solution {
    public:
        int countDigits(int num) {
            int ans=0;
            int temp=num;
            while(num){
                int digit=num%10;
                if(temp%digit==0){
                    ans++;
                }
                num/=10;

            }
            return ans;
        }
    };
  ```

    </details>

---

</details>

</details>

## 2. Three Divisors

<details>

```
Given an integer n, return true if n has exactly three positive divisors. Otherwise, return false.

An integer m is a divisor of n if there exists an integer k such that n = k * m.
```

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

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```cpp
    class Solution {
    public:
        bool isThree(int n) {
            // Your code goes here
            int count = 0;
            for(int i = 1; i<= n; i++)
            {
                if(n % i == 0) count++;
            }
            return count == 3;
        }
    };
  ```

    </details>

- <details>

    <summary>Editorial</summary>

    <br>

  **Approach 1:** Iterative Approach.

  **Intuition**
  Count the divisors of the number by iterating till square root of n.

  **Algorithm**

  - Calculate the divisors of the number by Iterating till the sqrt(number).

  - If the divisors count is equal to 3 return true.

  - Else return false

    <br>

  ```cpp
    class Solution {
    public:
        bool isThree(int n) {
            if(n<=3){
                return false;
            }
            int ans=2;
            for(int i=2;i*i<=n;i++){
                if(n%i==0){
                    int a=i;
                    int b=n/a;
                    if(a==b){
                        ans++;
                    }
                    else{
                        ans+=2;
                    }
                }
                if(ans>3){
                    return false;
                }
            }
            return ans==3;
        }
    };
  ```

    </details>

---

</details>

</details>

## 3. Find Greatest Common Divisor of Array

<details>

```
Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.

The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.
```

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

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```cpp
    class Solution {
    public:
        int findGCD(vector<int>& nums) {
            int mini = *min_element(nums.begin(), nums.end());
            int maxi = *max_element(nums.begin(), nums.end());
            return __gcd(mini,maxi);
        }
    };
  ```

    </details>

- <details>

    <summary>Editorial</summary>

    **Approach 1:** Euclidean Algorithm.

    **Intuition**

    Find the maximum and minimum number from the nums. Then find the gcd of the maximum and minimum using Euclidean algorithm.

    Euclidean Algorithm: It is based on the principle that the greatest common divisor of two numbers does not change if the larger number is replaced by its difference with the smaller number.

    For example, 21 is the GCD of 252 and 105 (as 252 = 21 × 12 and 105 = 21 × 5), and the same number 21 is also the GCD of 105 and 252 − 105 = 147.

    Since this replacement reduces the larger of the two numbers, repeating this process gives successively smaller pairs of numbers until the two numbers become equal. When that occurs, they are the GCD of the original two numbers

    **Algorithm**

    The Euclidean Algorithm for finding GCD(A,B) is as follows:

    - If A = 0 then GCD(A,B)=B, since the GCD(0,B)=B, and we can stop.

    - If B = 0 then GCD(A,B)=A, since the GCD(A,0)=A, and we can stop.

    **Write A in quotient remainder form (A = B⋅Q + R)**

    - Find GCD(B,R) using the Euclidean Algorithm since GCD(A,B) = GCD(B,R)

    **Example.**

    - Find the GCD of 270 and 192

        A=270, B=192

        A ≠0

        B ≠0
    
    - Use long division to find that 270/192 = 1 with a remainder of 78. We can write this as: 270 = 192 * 1 +78
    Find GCD(192,78), since GCD(270,192)=GCD(192,78)
    A=192, B=78

        A ≠0
        
        B ≠0
    
    - Use long division to find that 192/78 = 2 with a remainder of 36. We can write this as:
    
    - 192 = 78 * 2 + 36
    
    **Find GCD(78,36), since GCD(192,78)=GCD(78,36)**
    
    A=78, B=36

    A ≠0
    B ≠0
    
    - Use long division to find that 78/36 = 2 with a remainder of 6. We can write this as:
    78 = 36 * 2 + 6
    
    - Find GCD(36,6), since GCD(78,36)=GCD(36,6)
    A=36, B=6

    A ≠0
    B ≠0

    - Use long division to find that 36/6 = 6 with a remainder of 0. We can write this as:
    36 = 6 * 6 + 0

    **Find GCD(6,0), since GCD(36,6)=GCD(6,0)**

    A=6, B=0

    A ≠0
    B =0, GCD(6,0)=6

    **So we have shown:GCD(270,192) = GCD(192,78) = GCD(78,36) = GCD(36,6) = GCD(6,0) = 6GCD(270,192) = 6**

    <br>

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

    </details>

---

</details>

</details>
