# Chapter 1 • Patterns

## • Pyramid Pattern

<details>

<summary>Details</summary>

### Problem Description

```text
Print a pyramid pattern of numbers using an array.
```

Example 1:

```text
Input: n = 5

Output:
1
22
333
4444
55555
```

Solution

<details>

<summary>My Code</summary>

<br>

```cpp
class Solution {
public:
	void printPyramid(int n)
    {
        for (int i = 1; i <= n; i++) {
            int arr[i];
            for (int j = 0; j < i; j++) {
                arr[j] = i;
            }
            for (int j = 0; j < i; j++) {
				cout << arr[j];
            }
            	cout << endl;
        }	}
};
```

</details>

<details>

<summary>Editorial</summary>

```cpp
class Solution {
public:
	void printPyramid(int n) {
		for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                std::cout << i;
            }
			 std::cout << std::endl;
        }
	}
};
```

</details>

</details>

## • Star pattern

<details>

<summary>Details</summary>

<br>

```
Write a program to print the following star pattern:
```

```
*
**
***
```

Example 1:

```
Input: n = 3
Output:
*
**
***
```

Example 2:

```
Input: n = 4
Output:
*
**
***
****
```

Example 3:

```
Input: n = 1
Output:
*
```

### Solution

<details>

<summary>My Code</summary>

```cpp
class Solution {
public:
	void star(int n) {
    for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
            cout << "*";
            }
            cout << endl;
        }	}
};
```

</details>

<details>

<summary>Editorial</summary>

<br>

```cpp
class Solution {
public:
	void star(int n) {
		for (int i = 1; i <= n; i++) {
           for (int j = 1; j <= i; j++) {
               std::cout << "*";
           }
			std::cout << std::endl;
       }
	}
};
```

</details>

---

</details>

## • Star pattern 2

<details>

<summary>Details</summary>

### Problem Description

<br>

```
Write a program to print the star patterns

eg: n=4
****
***
**
*
```

Example 1:

```
Input: n = 3
Output:
***
**
*
```

### Solution

<details>

<summary>My Code</summary>

<br>

```cpp
class Solution {
public:
	void StarPattern (int n) {
     for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                std::cout << "*";
            }
            std::cout << std::endl;
	}
    }
};
```

</details>

<details>

<summary>Editorial</summary>

<br>

```cpp
class Solution {
public:
	void StarPattern (int n) {
		for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
	}
};
```

</details>

</details>

## • Print Number Pattern

<details>

<summary>Details</summary>

### Problem Description

```
Write a program that prints out a times table for the numbers 1 through n, where n is an integer entered by the user.
```

Example 1:

```
Input: n = 4

Output:
1 2 3 4
2 4 6 8
3 6 9 12
4 8 12 16
```

### Solution

<details>

<summary>My Code</summary>

```cpp
class Solution {
public:
	void TimesTable (int n) {
 		for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                std::cout << i * j << " ";
            }
            std::cout << std::endl;
        }
	}
};
```

</details>

<details>

<summary>Editorial</summary>

```cpp
class Solution {
public:
	void TimesTable (int n) {
		for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
				std::cout << i * j << " ";
            }
			std::cout << std::endl;
        }
	}
};
```

</details>

</details>

## • Print Number Pattern 2

<details>

<summary>Details</summary>

### Problem Description

```
Write a program to return the following pattern: For n = 4

1

1 2

1 2 3

1 2 3 4
```

```
For given n print n lines of numbers first line containing only 1 and last line containing 1 to n like in the above example.
```

Example 1:

```
Input: n = 4
Output:
1
1 2
1 2 3
1 2 3 4
```

Example 2:

```
Input: n = 3
Output:
1
1 2
1 2 3
```

### Solution

<details>

<summary>My Code</summary>

```cpp
class Solution {
public:
	void numberPatternPrint(int n) {
		for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
				cout << j << " ";
            }
			cout << endl;
        }
	}
};
```

</details>

<details>

<summary>Editorial</summary>

```cpp
class Solution {
public:
	void numberPatternPrint(int n) {
		for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                std::cout << j << " ";
            }
			std::cout << std::endl;
        }
	}
};
```

</details>

</details>

## • Triangle pattern print

<details>

<summary>Details</summary>

### Problem Description

Write a program that prints out the following pattern:

```
  *
 ***
*****
```

### Solution

<details>

<summary>My Code</summary>

<br>

```cpp
class Solution {
public:
	void trianglePattern(int n) {
        int space = n - 1;
        int stars = 1;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= space; j++) {
                std::cout << " ";
            }
            for (int j = 1; j <= stars; j++) {
                std::cout << "*";
            }

            std::cout << std::endl;
            space--;
            stars += 2;
        }
	}
};
```

</details>

<details>

<summary>Editorial</summary>

<br>

```cpp
class Solution {
public:
	void trianglePattern(int n) {
		for(int i=1; i<=n; i++) {
            for(int j=1; j<=n-i; j++) {
                std::cout << " ";
            }
            for(int k=1; k<=2*i-1; k++) {
               std::cout << "*";
            }
            std::cout << std::endl;
        }
	}
};
```

</details>

</details>
