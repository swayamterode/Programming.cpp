# Switch Case and Loops

## Greatest of Three Numbers

<details>

<summary>Details</summary>

### Problem Description

```text
Write a program to return greatest among three integers.
```

**Example 1:**

```cpp
Input: num1 = 1, num2 = 2, num3 = 3
Output: 3
```

**Example 2:**

```cpp
Input: num1 = -29, num2 = 100, num3 = 49
Output: 100
```

### Solution

<details>

<summary>My Code</summary>

<br>

```cpp
class Solution {
public:
	int findGreatest(int num1, int num2, int num3)
    {
		vector<int>nums;
		nums.push_back(num1);
		nums.push_back(num2);
		nums.push_back(num3);
		return *max_element(nums.begin(),nums.end());
	}
};
```

</details>

<details>

<summary>Authors Code</summary>

<br>

```cpp
class Solution {
public:
	int findGreatest(int num1, int num2, int num3) {
		int greatest = num1;
        if (num2 > greatest) {
            greatest = num2;
        }
        if (num3 > greatest) {
            greatest = num3;
        }
        return greatest;
	}
};
```

</details>

---

</details>

## Days of week

<details>

<summary>Details</summary>

### Problem Description

```
Given a number between 1 and 7, write a function daysOfWeek(int num) that returns the name of the day of the week corresponding to the input number.
```

```
If the number is out of range please return "Invalid Input" as response.
```

**Example 1:**

```js
Input: num = 1;
Output: "Monday";
```

### Solution

<details>

<summary>My Code</summary>

```cpp
class Solution {
public:
	string daysOfWeek(int num) {
		if(num == 1) return "Monday";
		else if(num == 2) return "Tuesday";
		else if(num == 3)return "Wednesday";
		else if (num == 4 ) return "Thursday";
		else if (num == 5 ) return "Friday";
		else if (num == 6 ) return "Saturday";
		else return "Sunday";
	}
};
```

</details>

<details>

<summary>Authors Code</summary>

```cpp
class Solution {
public:
	string daysOfWeek(int num) {
		if (num < 1 || num > 7) {
            return "Invalid Input";
        }
        string days[7]  = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
        return days[num - 1];
	}
};
```

</details>

---

</details>

## Sum of first N natural numbers

<details>

<summary>Details</summary>

### Problem Description

```text
Write a function sumOfNaturalNumbers(int n) that takes in an integer n and returns the sum of the first n natural numbers.
```

Example 1:

```js
Input: n = 5;
Output: 15;
```

### Solution

<details>

<summary>My Code</summary>

<br>

```cpp
class Solution {
public:
	int sumOfNaturalNumbers(int n) {
		  if (n <= 0) {
            return -1;
        }

        int sum = 0;

        for (int i = 1; i <= n; i++) {
            sum += i;
        }

        return sum;
	}
};
```

</details>

<details>

<summary>Authors Code</summary>

<br>

```cpp
class Solution {
public:
	int sumOfNaturalNumbers(int n) {
		int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        return sum;
	}
};
```

</details>

</details>

## Months of the year

<details>

<summary>Details</summary>

### Problem Description

Write a program to Display all Months of a Year.

**Example 1:**

```text
Output: [January,February,March,April,May,June,July,August,September,October,November,December]
```

### Solution

<details>

<summary>Authors Code</summary>

```cpp
class Solution {
public:
	vector<string> MonthsOfTheYear () {
		vector<string> months{"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        return months;
	}
};
```

</details>

</details>

## Factorial

<details>

<summary>Details</summary>

### Problem Description

```text
Write a Program to find factorial of a number .

Note: Factorial of n is the product of all positive descending integers. Factorial of n is denoted by n!.
```

**Example 1:**

```js
Input: fact = 7;
Output: 5040;
```

### Solution

<details>

<summary>My Code</summary>

```cpp
class Solution {
public:
	long factorial(int fact) {
		 if (fact < 0) {
            // Return an error or handle the invalid input as per your requirements
            return -1;
        }

        long result = 1;

        for (int i = 1; i <= fact; i++) {
            result *= i;
        }

        return result;
	}
};
```

</details>

<details>

<summary>Authors Code</summary>

```cpp
class Solution {
public:
	long factorial(int fact) {
		if (fact <= 1) {
            return 1;
        }
        return fact * factorial(fact - 1);
	}
};
```

</details>

---

</details>

## Sum of numbers in a range

<details>

<summary>Details</summary>

### Problem Description

```text
Given the range as integer input, write a program to find the sum of all the numbers that lay in the given interval.
```

**Example 1:**

```js
Input: interval = [1, 5];
Output: 15;
```

### Solution

<details>

<summary>My Code</summary>

<br>

```cpp
class Solution {
public:
	int sum_of_numbers_in_range(vector<int>& interval) {
		int res = 0;
		int start = interval[0];
		int end = interval[1];
		for(int i = start; i<=end; i++ ) {
			res += i;
		}
		return res;
	}
};
```

</details>

<details>

<summary>Authors Code</summary>

<br>

```cpp
class Solution {
public:
	int sum_of_numbers_in_range(vector<int>& interval) {
		int sum = 0;
        for (int i = interval[0]; i <= interval[1]; i++) {
            sum += i;
        }
		return sum;
	}
};
```

</details>

---

</details>

## Fibonacci Series

<details>

<summary>Details</summary>

### Problem Description

```text
Write a Program to Generate Fibonacci Numbers.
The number is said to be in a Fibonacci series if each subsequent number is the sum of the previous two numbers.
```

Example 1:

```js
Input: n = 5;
Output: [0, 1, 1, 2, 3];
```

<details>

<summary>My Code</summary>

<br>

```cpp
class Solution {
public:
	vector<int> fibonacci(int n) {
		vector<int> sequence;

        if (n <= 0)
            return sequence;

        sequence.push_back(0);

        if (n == 1)
            return sequence;

        sequence.push_back(1);

        for (int i = 2; i < n; i++) {
            int next = sequence[i - 1] + sequence[i - 2];
            sequence.push_back(next);
        }

        return sequence;
	}
};
```

</details>

<details>

<summary>Authors Code</summary>

```cpp
class Solution {
public:
	vector<int> fibonacci(int n) {
		vector<int> fibonacci(n);
        int first = 0, second = 1, next;
        for (int i = 0; i < n; i++) {
            if (i <= 1) {
                next = i;
            } else {
                next = first + second;
                first = second;
                second = next;
            }
            fibonacci[i] = next;
        }
        return fibonacci;
	}
};
```

</details>

---

</details>
