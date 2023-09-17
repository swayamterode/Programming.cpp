# Middle of the Linked List

## Problem Description

Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the **second middle node**.

**Example 1:**

![img](https://assets.nextleap.app/images/f1efe9e1-d6fd-4768-b916-8bdba547d002.jpg)

```js
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
```

**Example 2:**

![img](https://assets.nextleap.app/images/cc61d9bb-0492-43df-a8e7-9c19dfbffb31.jpg)

```js
Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
```

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
    ListNode* middleNode(ListNode* head) {
        ListNode*slow = head;
        ListNode*fast = head;
        while(fast!=NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
```