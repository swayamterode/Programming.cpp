# Reverse Linked List

## Problem Description

Given the head of a singly linked list, reverse the list, and return the reversed list.

**Example 1:**

![img](https://assets.nextleap.app/images/d22e5b99-4b2e-4399-8190-22af1efcd5a5.jpg)

```js
Input: head = [1, 2, 3, 4, 5];
Output: [5, 4, 3, 2, 1];
```

**Example 2:**

```js
Input: head = [1, 2];
Output: [2, 1];
```

**Example 3:**

```js
Input: head = [];
Output: [];
```

**Constraints:**

The number of nodes in the list is the range [0, 5000].

- `-5000 <= Node.val <= 5000`

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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL; // if no nodes found!
        if(head->next == NULL) return head; // if only one node exits then is already reversed.
        ListNode* p = NULL, *c = head, *n = head->next;
        while(c != NULL) {
            c->next = p;
            p = c;
            c = n;
            if(n != NULL) {
                n = n->next;
            }
        }
        return p;
    }
};
```
