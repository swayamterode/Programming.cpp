# Remove Linked List Elements

## Problem Statement

Given the `head` of a linked list and an integer `val`, remove all the nodes of the linked list that has `Node.val == val`, and return the new head.

**Example 1:**

![img](https://assets.nextleap.app/images/953ac911-9c6d-41ac-b6c5-f58b4ba89c10.jpg)

```js
Input: (head = [1, 2, 6, 3, 4, 5, 6]), (val = 6);
Output: [1, 2, 3, 4, 5];
```

**Example 2:**

```js
Input: (head = []), (val = 1);
Output: [];
```

**Example 3:**

```js
Input: (head = [7, 7, 7, 7]), (val = 7);
Output: [];
```

**Constraints:**

The number of nodes in the list is in the range [0, 104].

- 1 <= Node.val <= 50
- 0 <= val <= 50

## Solution

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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode;
        dummy->next = head;
        ListNode* curr = dummy;
        while(curr->next != NULL) {
            if(curr->next->val == val) {
                curr->next = curr->next->next;
            }
            else {
                curr = curr->next;
            }
        }
        return dummy->next;
    }
};
```
