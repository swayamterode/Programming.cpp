# Palindrome Linked List

## Problem Description

Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

**Example 1:**

![img](https://assets.nextleap.app/images/dd856e08-cab5-4d87-b5a2-7abe918b4944.jpg)

```js
Input: head = [1, 2, 2, 1];
Output: true;
```

**Example 2:**

![img](https://assets.nextleap.app/images/462cbecb-fd12-4f4d-838f-b2f9ca8b06aa.jpg)

```js
Input: head = [1, 2];
Output: false;
```

**Constraints:**

The number of nodes in the list is in the range `[1, 10^5]`.

- `0 <= Node.val <= 9`

## Solution

**Brute Force Solution**

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
bool solve(vector<int>&nums) {
    int start = 0, end = nums.size()-1;
        while(start<=end) {
            if(nums[start] != nums[end])
                return false;
                start++;
                end--;
        }
    return true;
}
    bool isPalindrome(ListNode* head) {
        vector<int>nums;
        while(head!=NULL) {
            nums.push_back(head->val);
            head = head->next;
        }
        return solve(nums);
    }
};
```

**Optimal Solution**

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    // Function to reverse a linked list
    ListNode* reverseLL(ListNode* head) {
        ListNode* prev = NULL;  // Initialize a pointer to the previous node (NULL initially)
        ListNode* next = NULL;  // Initialize a pointer to the next node (NULL initially)

        while (head != NULL) {
            next = head->next;   // Store the next node in the original list
            head->next = prev;   // Reverse the link to the previous node
            prev = head;         // Update the previous node to the current node
            head = next;         // Move to the next node in the original list
        }
        return prev;  // Return the new head of the reversed list
    }

    // Function to check if a linked list is a palindrome
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return true;  // An empty list or a list with a single node is a palindrome

        ListNode* slow = head;  // Initialize a slow pointer to the head of the list
        ListNode* fast = head;  // Initialize a fast pointer to the head of the list

        // Find the middle of the linked list using slow and fast pointers
        while (fast->next && fast->next->next) {
            slow = slow->next;  // Move the slow pointer one step at a time
            fast = fast->next->next;  // Move the fast pointer two steps at a time
        }

        slow->next = reverseLL(slow->next);  // Reverse the second half of the linked list
        slow = slow->next;  // Move slow pointer to the start of the reversed second half

        // Check if the linked list is a palindrome by comparing elements from both ends
        while (slow != NULL) {
            if (head->val != slow->val)
                return false;  // If values are not equal, it's not a palindrome
            slow = slow->next;  // Move the slow pointer forward in the reversed second half
            head = head->next;  // Move the head pointer forward in the original first half
        }
        return true;  // The linked list is a palindrome
    }
};
```

**Time Complexity:**

The `reverseLL` function has a time complexity of `O(n)`, where n is the number of nodes in the linked list. This is because the function iterates through each node once to reverse the list.
Time complexity of isPalindrome function:

The `isPalindrome` function has a time complexity of `O(n)`, where n is the number of nodes in the linked list.

This is because the function performs the following operations:

- Finding the middle of the linked list using slow and fast pointers `(O(n))`.
- Reversing the second half of the linked list `(O(n/2) ≈ O(n))`.
- Comparing the elements of the first half with the reversed second half` (O(n/2) ≈ O(n))`.

**Overall time complexity of the class:**

The overall time complexity is O(n) due to the dominating factor of reversing the second half of the linked list and comparing elements.

**`Summary`:**

- Implements a `reverseLL` function to reverse a linked list in-place.
- Implements an `isPalindrome` function to check if a linked list is a palindrome.
- The `isPalindrome` function first finds the middle of the list using slow and fast pointers.
- It then reverses the second half of the list and compares it with the first half to determine if the list is a palindrome.
- The time complexity for reversing and checking for a palindrome is O(n), where n is the number of nodes in the linked list.
