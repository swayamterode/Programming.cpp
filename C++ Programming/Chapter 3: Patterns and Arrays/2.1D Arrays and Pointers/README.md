# 1D Arrays and Pointers

## • Sum of numbers in array

<details>

<summary>Details</summary>

### Problem Description

```
Given an array of integers, return the sum of all numbers in the array.
```

Example 1:

```
Input: arr = [1,4,2]
Output: 7
```

### • Solution

<details>

<summary>My Code</summary>

```cpp
class Solution {
public:
	int sumNumbers(vector<int>& arr) {
		int ans = 0;
		for(auto& x:arr) ans +=x;
		return ans;
	}
};
```

</details>

<details>

<summary>Editorial</summary>

```cpp
class Solution {
public:
	int sumNumbers(vector<int>& arr) {
		int sum = 0;
        for (int elem : arr) {
            sum += elem;
        }
        return sum;
	}
};
```

</details>

</details>

## • Maximum number in an array

<details>

<summary>Details</summary>

### Problem Description

```
Given an array of integers, return the maximum number in the array.
```

`Example 1:`

```
Input: arr = [1,2,6,3]
Output: 6
```

**Solutions**

- <details>

  <summary>My Code</summary>

  <br>

  ```cpp
  class Solution {
  public:
  	int findMax(vector<int>& arr) {
  		return *max_element(arr.begin(),arr.end());
  	}
  };
  ```

  </details>

- <details>

  <summary>Editorial</summary>

  <br>

  ```cpp
  #include <limits.h>
  class Solution {
  public:
  	int findMax(vector<int>& arr) {
  		int max = INT_MIN;
  		for (int elem : arr) {
  			if (elem > max) {
  				max = elem;
  			}
  		}
  		return max;
  	}
  };
  ```

  </details>

</details>

## • Count even numbers in array

<details>

### Problem Description

```
Write a program that takes in an array of integers and returns the number of even numbers in the array.
```

`Example 1:`

```
Input: arr = [1,2,3,4]
Output: 2
```

**Solutions**

- <details>

  <summary>My Code</summary>

  <br>

  ```cpp
  class Solution {
  public:
  	int countEvens(vector<int>& arr) {
  		int c = 0;
  		for(auto &x: arr) {
  			if(x% 2 == 0) c++;
  		}
  		return c;
  	}
  };
  ```

  </details>

- <details>

  <summary>Editorial</summary>

  <br>

  ```cpp
  class Solution {
  public:
  	int countEvens(vector<int>& arr) {
  		int count = 0;
  		for (int num : arr) {
  			if (num % 2 == 0) {
  				count++;
  			}
  		}
  		return count;
  	}
  };
  ```

  </details>

</details>

## • Minimum number in an array

 <details>
 
### Problem Description

```
Write a program that takes in an array of integers and returns the minimum element in the array.
```

`Example 1:`

```
Input: arr = [1,5,3,65]
Output: 1
```

**Solutions**

- <details>

  <summary>My Code</summary>

  <br>

  ```cpp
  class Solution {
  public:
  	int findMin(vector<int>& arr) {
  		return *min_element(arr.begin(),arr.end());
  	}
  };
  ```

  </details>

- <details>

  <summary>Editorial</summary>

  <br>

  ```cpp
  	class Solution {
  	public:
  		int findMin(vector<int>& arr) {
  			int min = arr[0];
  			for (int i = 1; i < arr.size(); i++) {
  				if (arr[i] < min) {
  					min = arr[i];
  				}
  			}
  			return min;
  		}
  	};
  ```

  </details>

</details>

</details>

## • Average of all numbers in an array

<details>

### Problem Description

```
Write a program that calculates the average of all numbers in a given array.

The array may contain positive or negative integers, as well as zero.

The function should return a float representing the average of all numbers in the array.
```

`Example 1:`

```
Input: arr = [1, 2, 3, 4, 5]
Output: 3.00000
```

**Solutions**

- <details>

  <summary>My Code</summary>

  <br>

  ```cpp
  class Solution {
  public:
  	double findAverage(vector<int>& arr) {
  		double count = 0;
  		double sum = 0;
  		for(auto& x: arr) {
  			count++;
  			sum+=x;
  		}
  		return sum / count;
  	}
  };
  ```

  </details>

- <details>

  <summary>Editorial</summary>

  <br>

  ```cpp
  class Solution {
  public:
  	double findAverage(vector<int>& arr) {
  		int sum = 0;
  		for (int num : arr) {
  			sum += num;
  		}
  		return arr.size() > 0 ? sum / arr.size() : 0;
  	}
  };
  ```

  </details>

</details>
</details>

## • Replace even number by 0 and odd by 1

<details>

### Problem Description

```
Write a program that takes in a array of integers and replaces all even numbers with 0 and all odd numbers with 1. The function should return a new array with the modified values.
```

`Example 1:`

```
Input: arr =  [1, 2, 3, 4, 5]
Output: [1, 0, 1, 0, 1]
```

**Solutions**

- <details>

  <summary>My Code</summary>

  <br>

  ```cpp
  class Solution {
  public:
  	vector<int> modifyArray(vector<int>& arr) {
  		for(int i = 0; i<arr.size(); i++) {
  			if(arr[i] % 2 == 0) arr[i] = 0;
  			else arr[i] = 1;
  		}
  		return arr;
  	}
  };
  ```

  </details>

- <details>

  <summary>Editorial</summary>

  <br>

  ```cpp
  class Solution {
  public:
  	vector<int> modifyArray(vector<int>& arr) {
  		for (int i = 0; i < arr.size(); i++) {
  			if (arr[i] % 2 == 0) {
  				arr[i] = 0;
  			} else {
  				arr[i] = 1;
  			}
  		}
  		return arr;
  	}
  };
  ```

  </details>

</details>

</details>

## • Reverse an Array

<details>

### Problem Description

```
Write a program to reverse an array of elements using loop.
```

`Example 1:`

```
Input: arr = [1,2,3]
Output: [3,2,1]
```

**Solutions**

- <details>

  <summary>My Code</summary>

  ```cpp
  class Solution {
  public:
  	vector<int> reverseArray(vector<int>& arr) {
  		reverse(arr.begin(),arr.end());
  		return arr;
  	}
  };
  ```

  </details>

- <details>

  <summary>Editorial</summary>

  ```cpp
  class Solution {
  public:
  	vector<int> reverseArray(vector<int>& arr) {
  		vector<int> reversedArr(arr.size());
  		for (int i = arr.size() - 1, j = 0; i >= 0; i--, j++) {
  			reversedArr[j] = arr[i];
  		}
  		return reversedArr;
  	}
  };
  ```

  </details>

</details>
</details>

## • Sum of all positive numbers in array

<details>

### Problem Descriptio

```
Write a program that calculates the sum of all positive numbers in a given array. The function should return an integer representing the sum of all positive numbers in the array.
```

`Example 1:`

```
Input: arr = [1, 2, 3, 4, 5]
Output: 15
```

**Solutions**

- <details>

  <summary>My Code</summary>

  <br>

  ```cpp
  class Solution {
  public:
  	int findSumOfPositives(vector<int>& arr) {
  		int sum = 0;
  			for(auto& x:arr) {
  				if(x > 0) sum+=x;
  			}
  		return sum;
  	}
  };
  ```

  </details>

- <details>

  <summary>Editorial</summary>

  <br>

  ```cpp
  class Solution {
  public:
  	int findSumOfPositives(vector<int>& arr) {
  		int sum = 0;
  		for (int num : arr) {
  			if (num > 0) {
  				sum += num;
  			}
  		}
  		return sum;
  	}
  };
  ```

  </details>

</details>

</details>

## • Pair with given sum

<details>

### Problem Description

```
Given an array of integers and a target sum, return the first pair of integers that add up to the target sum.
```

`Example 1:`

```
Input: arr = [1,2,3,4], targetSum = 4
Output: [1,3]
```

**Solutions**

- <details>

  <summary>My Code</summary>

  <br>

  ```cpp
  class Solution {
  public:
  	vector<int> findPairWithGivenSum(vector<int>& arr, int targetSum) {
  		for(int i = 0; i<arr.size(); i++) {
  			for(int j = 1; j<arr.size(); j++) {
  				if(arr[i] + arr[j] == targetSum) return {arr[i], arr[j]};
  			}
  		}
  		return {-1};
  	}
  };
  ```

  </details>

- <details>

  <summary>Editorial</summary>

  <br>

  ```cpp
  class Solution {
  public:
  	vector<int> findPairWithGivenSum(vector<int>& arr, int targetSum) {
  		vector<int> pair(2);
  		std::set<int> set;
  		for (int elem : arr) {
  			int complement = targetSum - elem;
  			if (set.find(complement) != set.end()) {
  				pair[0] = complement;
  				pair[1] = elem;
  				return pair;
  			}
  			set.insert(elem);
  		}
  		pair[0] = -1;
  		pair[1] = -1;
  		return pair;
  	}
  };
  ```

  </details>

</details>

</details>
