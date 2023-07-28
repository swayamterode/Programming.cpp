# Bubble Sort

## Problem Description

You are given array `a1`,`a2`,`a3`
. What will **return** the next function bubbleSort(A) shown in the next picture.

**Example 1:**

```js
Input: A = [1, 3, 2, 5, 4]
Output: 2
Explanation: Just implement the function shown in picture.
```

![img](https://assets.nextleap.app/images/png1-74485525-3888-481d-aebc-1abd999622bd.png)

## Solution

```cpp
class Solution {
public:
	int bubbleSort(vector<int>& A) {
		int count = 0;
        int n = A.size();
        bool swapped = true;
        while(swapped != false) {
            swapped = false;
            count = count + 1;
            for(int i = 0; i<n-1; i++) {
                if(A[i] > A[i+1]){
                    swapped=true;
                    swap(A[i], A[i+1]);
                }
            }
        }
        return count;
	}
};
```
