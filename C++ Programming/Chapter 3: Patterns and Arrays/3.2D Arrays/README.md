# 2D Arrays

## • Maximum element

<details>

### Problem Description

```
You are given an 2D-array of integers. Your task is to find the maximum element in the array.
```

`Example 1:`

```
Input: args = [[1, 2, 3],[4, 5, 6],[7, 8, 9]]

Output: 9
```

**Solutions**

- <details>
    <summary>My Code</summary>

  <br>

  ```cpp
  class Solution {
  public:
      int max(vector<vector<int>>& args) {
      int maxElement = args[0][0];

          for (const auto& row : args) {
              for (int num : row) {
                  if (num > maxElement) {
                      maxElement = num;
                  }
              }
          }

          return maxElement;	}
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
        int max(vector<vector<int>>& args) {
            int max = INT_MIN;
            for (int i = 0; i < args.size(); i++) {
                for (int j = 0; j < args[i].size(); j++) {
                    if (args[i][j] > max) {
                        max = args[i][j];
                    }
                }
            }
            return max;
        }
    };
  ```

    </details>

</details>

</details>

## • Sum of all elements in 2D array

<details>

### Problem Description

```
You are given an 2D array of integers. Your task is to find the sum of all elements in the array.
```

`Example 1:`

```
Input: arr = [[1, 2, 3],[4, 5, 6]]
Output: 21
```

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```cpp
    class Solution {
    public:
        int sumOfElements(vector<vector<int>>& arr) {
            int sum = 0;
            for(int i = 0; i<arr.size(); i++) {
                for(int j = 0; j<arr[0].size(); j++) {
                    sum += arr[i][j];
                }
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
        int sumOfElements(vector<vector<int>>& arr) {
            int sum = 0;
            for (vector<int> row : arr) {
                for (int cell : row) {
                    sum += cell;
                }
            }
            return sum;
        }
    };
  ```

    </details>

</details>

</details>

## • Row with maximum ones

<details>

### Problem Description

```
Given a binary matrix, you have to find the row with the maximum number of 1s.
```

`Example 1:`

```
Input: arr = [[1,1,1],[0,0,0],[0,0,0]],
r = 3, c = 3

Output: 0
```

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```cpp
    class Solution {
    public:
        int maximumOnesRow(vector<vector<int>>& arr, int r, int c) {
            int maxOnesRow = 0;
            int maxOnesCount = 0;

            for (int i = 0; i < r; i++) {
                int currentOnesCount = 0;

                for (int j = 0; j < c; j++) {
                    if (arr[i][j] == 1) {
                        currentOnesCount++;
                    }
                }

                if (currentOnesCount > maxOnesCount) {
                    maxOnesCount = currentOnesCount; // Update the maximum count
                    maxOnesRow = i; // Update the row with maximum ones
                }
            }

            return maxOnesRow;	}
    };
  ```

    </details>

- <details>

    <summary>Editorial</summary>

    <br>

  ```cpp
    class Solution {
    public:
        int maximumOnesRow(vector<vector<int>>& arr, int r, int c) {
            int maxOnesRow = 0;
            int maxOnesCount = 0;
            for (int i = 0; i < r; i++) {
                int onesCount = 0;
                for (int j = 0; j < c; j++) {
                    int x = arr[i][j];
                    if (x == 1) {
                        onesCount++;
                    }
                }
                if (onesCount > maxOnesCount) {
                    maxOnesCount = onesCount;
                    maxOnesRow = i;
                }
            }
            return maxOnesRow;
        }
    };
  ```

    </details>

</details>

</details>

## • Minimum Element in 2D array

<details>

### Problem Description

```
Write a program that finds the minimum element in a given 2D array of elements. The function should return the minimum element.
```

`Example 1:`

```
Input: arr = [[1, 2, 3],[4, 5, 6],[7, 8, 9]]
Output: 1
```

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```cpp
  class Solution {
  public:
      int minimum(vector<vector<int>>& arr) {
          int ans = INT_MAX;
          for(int i= 0; i<arr.size(); i++) {
              for(int j = 0; j<arr[0].size(); j++) {
                  ans = min(ans,arr[i][j]);
              }
          }
          return ans;
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
      int minimum(vector<vector<int>>& arr) {
          int min = INT_MAX;
          for (vector<int> row : arr) {
              for (int cell : row) {
                  if (cell < min) {
                      min = cell;
                  }
              }
          }
          return min;
      }
  };
  ```

    </details>

</details>

</details>

## • Average of all elements in 2D array

<details>

### Problem Description

```
Write a program that calculates the average of all elements in a given 2D array. The function should return a float representing the average of all elements in the array.
```

`Example 1:`

```
Input: arr = [[1, 2, 3],[4, 5, 0]]
Output: 2.50000
```

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```cpp
  class Solution {
  public:
      double findAverage(vector<vector<int>>& arr) {
          double ans = 0;
          int count = 0;
          for(int i = 0; i<arr.size(); i++){
              for(int j = 0; j<arr[0].size(); j++) {
                      count++;
                      ans += arr[i][j];
              }
          }
          return ans / count;
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
        double findAverage(vector<vector<int>>& arr) {
            int sum = 0;
            int count = 0;
            for (int i = 0; i < arr.size(); i++) {
                for (int j = 0; j < arr[i].size(); j++) {
                    sum += arr[i][j];
                    count++;
                }
            }
            return static_cast<double>(sum) / count;
        }
    };
  ```

    </details>

</details>

</details>

## • Sum of diagonal elements

<details>

### Problem Description

```
Write a program that calculates the sum of the diagonal elements in a two-dimensional array. The function should return an integer representing the sum of the diagonal elements.
```

`Example 1:`

```
Input: arr = [[1, 2, 3],[4, 5, 6],[7, 8, 9]]
Output: 15
```

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```cpp
  class Solution {
  public:
      int findDiagonalSum(vector<vector<int>>& arr) {
          int sum = 0;
          for(int i = 0; i<arr.size(); i++) {
              for(int j = 0; j<arr[0].size(); j++) {
                  if(i == j) sum+= arr[i][j];
              }
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
        int findDiagonalSum(vector<vector<int>>& arr) {
            int sum = 0;
            for (int i = 0; i < arr.size(); i++) {
                sum += arr[i][i];
            }
            return sum;
        }
    };
  ```

    </details>

</details>

</details>

## • Searching an element

<details>

### Problem Description

```
Write a program that searches for a given element in a two-dimensional array (matrix). The function should return a boolean value indicating whether the element was found in the matrix or not.
```

`Example 1:`

```
Input: arr = [ [1, 2, 3], [4, 5, 6], [7, 8, 9] ], target = 5
Output: true
```

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```cpp
    class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& arr, int target) {
                for (const auto& row : arr) {
                for (const auto& element : row) {
                    if (element == target) {
                        return true;
                    }
                }
            }
            return false;
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
        bool searchMatrix(vector<vector<int>>& arr, int target) {
            for (vector<int> row : arr) {
                for (int cell : row) {
                    if (cell == target) {
                        return true;
                    }
                }
            }
            return false;
        }
    };
  ```

    </details>

</details>

</details>

## • Maximum element in each row

<details>

### Problem Description

```
Write a program that finds the maximum element in each row of a given two-dimensional array (matrix). The function should return a new array containing the maximum elements from each row of the matrix.
```

`Example 1:`

```
Input: arr = [[1, 2, 3],[4, 5, 6],[7, 8, 9]]
Output: [3, 6, 9]
```

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```cpp
  class Solution {
  public:
      vector<int> findRowMaxima(vector<vector<int>>& arr) {
      vector<int> rowMaxima;

          for (const auto& row : arr) {
              int maxElement = row[0]; // Assume the first element of the row as the maximum

              for (int num : row) {
                  if (num > maxElement) {
                      maxElement = num; // Update the maximum element if a larger element is found
                  }
              }

              rowMaxima.push_back(maxElement); // Add the maximum element to the result array
          }

          return rowMaxima;	}
  };
  ```

    </details>

- <details>

    <summary>Editorial</summary>

    <br>

  ```cpp
  class Solution {
  public:
      vector<int> findRowMaxima(vector<vector<int>>& arr) {
          vector<int> maxima(arr.size());
          for (int i = 0; i < arr.size(); i++) {
              int max = arr[i][0];
              for (int j = 1; j < arr[i].size(); j++) {
                  if (arr[i][j] > max) {
                      max = arr[i][j];
                  }
              }
              maxima[i] = max;
          }
          return maxima;
      }
  };
  ```

    </details>

</details>

</details>

## • Sum of anti diagonal elements

<details>

### Problem Description

```
Write a program that calculates the sum of the anti-diagonal elements in a two-dimensional array. The function should return an integer representing the sum of the anti-diagonal elements.
```

`Example 1:`

```
Input: arr = [[1, 2, 3],[4, 5, 6],[7, 8, 9]]
Output: 15
```

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```cpp
  class Solution {
  public:
      int sumAntiDiagonal(vector<vector<int>>& arr) {
      int sum = 0;
          int n = arr.size();

          for (int i = 0; i < n; i++) {
              sum += arr[i][n - i - 1];
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
      int sumAntiDiagonal(vector<vector<int>>& arr) {
          int sum = 0;
          for (int i = 0; i < arr.size(); i++) {
              sum += arr[i][arr.size() - 1 - i];
          }
          return sum;
      }
  };
  ```

    </details>

</details>

</details>
