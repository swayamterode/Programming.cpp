# Linked List Cycle

## Problem Description

Given `head`, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the `next` pointer. Internally, `pos` is used to denote the index of the node that tail's next pointer is connected to. **Note that** `pos` **is not passed as a parameter.**

Return `true` if there is a cycle in the linked list. Otherwise, return `false`.

**Example 1:**

![img](https://assets.nextleap.app/images/8054f343-3a7b-4552-b371-a2de7bf8d911.png)

```js
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
```

**Example 2:**

![img](https://assets.nextleap.app/images/f6a96238-6578-4965-9376-ab527e3b02d8.png)

```js
Input: head = [1,2], pos = 0
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.
```

**Example 3:**

![img](https://assets.nextleap.app/images/f1998745-011a-468c-a6b1-f404ebc73f65.png)

```js
Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.
```

**Constraints:**

The number of the nodes in the list is in the range [0, 10^4].

- `-105 <= Node.val <= 105`
- `pos is -1 or a valid index in the linked-list.`

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
        }
        return false;
    }
};
```
