# Concepts

## · Circular Linked List

<details>

<br>

A Circular LinkedList is similar to a regular LinkedList, with the key difference that the last node of the list points back to the first node, creating a circular structure. In other words, the next pointer of the last node in the list points to the first node, rather than being null. This circular arrangement allows for efficient traversal and enables operations that involve cyclic patterns.

## Advantages of Circular Linked List

The Circular LinkedList offers several advantages:

Circular Structure: The circular arrangement provides easy access to both the first and last elements of the list. It allows continuous iteration without needing to check for the end of the list.
Efficient Traversal: Traversing a Circular LinkedList is more efficient compared to a regular LinkedList, as there is no need to check for the end of the list while iterating.
Circular Patterns: The circular nature of the list is useful for problems involving cyclic patterns, such as round-robin scheduling or circular buffers.

## Implementation of Circular Linked List

To implement a Circular LinkedList, we need a reference to the head (first node) of the list. The next pointer of the last node will always point back to the head, creating the circular structure.

Each node in the list contains two components: the data element and the next pointer that references the next node in the list. The last node's next pointer points to the head, creating the circular linkage.

## Example Code

```cpp
#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}
};

Node* insert(Node* head, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        newNode->next = newNode; // Points to itself in case of an empty list
        return newNode;
    }

    Node* last = head;
    while (last->next != head) {
        last = last->next;
    }

    last->next = newNode;
    newNode->next = head;

    return head;
}

void traverse(Node* head) {
    if (head == nullptr) {
        std::cout << "Empty list" << std::endl;
        return;
    }

    Node* current = head;
    do {
        std::cout << current->data << " ";
        current = current->next;
    } while (current != head);
}

int main() {
    Node* head = nullptr;

    // Insert elements in the Circular LinkedList
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);

    // Traverse the Circular LinkedList
    traverse(head);

    return 0;
}

```

</details>

## · Inserting a Node in Circular Linked List

<details>

<br>

A Circular LinkedList is a variant of the traditional LinkedList where the last node of the list points back to the first node, creating a circular structure. This allows for efficient traversal and enables operations that involve cyclic patterns.

## Inserting a Node at the Beginning

To insert a node at the beginning of a Circular LinkedList, we need to update the next pointers of the new node and the current head node. Here are the steps to perform this operation:

1. Create a new node with the desired data.
2. If the list is empty, set the next pointer of the new node to itself and make it the new head of the list.
3. If the list is not empty, find the last node in the list (the node whose next pointer points to the current head).
4. Set the next pointer of the new node to the current head node.
5. Update the next pointer of the last node to point to the new node.
6. Update the head of the list to point to the new node.

## Inserting a Node at the End

To insert a node at the end of a Circular LinkedList, we need to update the next pointers of the new node and the current last node. Here are the steps to perform this operation:

1. Create a new node with the desired data.
2. If the list is empty, set the next pointer of the new node to itself and make it the new head of the list.
3. If the list is not empty, find the last node in the list (the node whose next pointer points to the current head).
4. Set the next pointer of the new node to the current head node.
5. Set the next pointer of the last node to the new node.

## Inserting a Node at a Specific Position

To insert a node at a specific position in a Circular LinkedList, we need to update the next pointers of the new node and the nodes before and after the desired position. Here are the steps to perform this operation:

1. Create a new node with the desired data.
2. If the list is empty, set the next pointer of the new node to itself and make it the new head of the list.
3. If the desired position is 0, follow the steps for inserting at the beginning.
4. Traverse the list until you reach the node before the desired position.
5. Set the next pointer of the new node to the next node of the current node.
6. Set the next pointer of the current node to the new node.

## Example Code

```cpp
#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr){
    // Constructor
    };
};

Node* insertAtBeginning(Node* head, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        newNode->next = newNode;
        return newNode;
    }

    Node* last = head;
    while (last->next != head) {
        last = last->next;
    }

    newNode->next = head;
    last->next = newNode;

    return newNode;
}

Node* insertAtEnd(Node* head, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        newNode->next = newNode;
        return newNode;
    }

    Node* last = head;
    while (last->next != head) {
        last = last->next;
    }

    newNode->next = head;
    last->next = newNode;

    return head;
}

Node* insertAtPosition(Node* head, int data, int position) {
    if (position == 0) {
        return insertAtBeginning(head, data);
    }

    Node* newNode = new Node(data);
    Node* current = head;
    for (int i = 0; i < position - 1; i++) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;

    return head;
}

void traverse(Node* head) {
    if (head == nullptr) {
        std::cout << "Empty list" << std::endl;
        return;
    }

    Node* current = head;
    do {
        std::cout << current->data << " ";
        current = current->next;
    } while (current != head);
}

int main() {
    Node* head = nullptr;

    // Insert at the beginning
    head = insertAtBeginning(head, 1);
    head = insertAtBeginning(head, 2);
    head = insertAtBeginning(head, 3);

    // Insert at the end
    head = insertAtEnd(head, 4);
    head = insertAtEnd(head, 5);

    // Insert at a specific position
    head = insertAtPosition(head, 6, 2);

    // Traverse the Circular LinkedList
    traverse(head);

    return 0;
}

```

</details>

## · Deleting a Node in Circular Linked List

<details>

<br>

Circular LinkedList is a type of linked list where the last node of the list points back to the first node, forming a loop. Deleting a node in a Circular LinkedList involves updating the pointers to remove the node from the list while maintaining the circular structure.

## Algorithm

To delete a node from a Circular LinkedList, we need to consider the following cases:

1. Deleting the first node:
   - If the list is empty (head is null), there is nothing to delete.
   - If the list has only one node, set head to null.
   - Otherwise, find the last node in the list and update its next pointer to skip the first node (head). Then, update the head to the next node.
2. Deleting an intermediate node:
   - Traverse the list to find the node to be deleted and its previous node.
   - Update the previous node's next pointer to skip the node to be deleted.
3. Deleting the last node:
   - Traverse the list to find the last node and its previous node.
   - Update the previous node's next pointer to skip the last node. Set the previous node as the new last node.

## Example Code

```cpp
#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class CircularLinkedList {

public:
  Node* head;
    CircularLinkedList() {
        this->head = nullptr;
    }

    void deleteNode(int key) {
        if (head == nullptr) {
            return;
        }

        Node* current = head;
        Node* previous = nullptr;

        // Case 1: Deleting the first node
        if (current->data == key) {
            while (current->next != head) {
                current = current->next;
            }
            current->next = head->next;
            head = head->next;
        } else {
            // Case 2: Deleting an intermediate or last node
            while (current->next != head) {
                previous = current;
                current = current->next;
                if (current->data == key) {
                    previous->next = current->next;
                    break;
                }
            }
            // Case 3: Deleting the last node
            if (current->next == head) {
                previous->next = head;
            }
        }
    }

    void printList() {
        if (head == nullptr) {
            return;
        }

        Node* current = head;
        do {
            std::cout << current->data << " ";
            current = current->next;
        } while (current != head);
        std::cout << std::endl;
    }
};

int main() {
    CircularLinkedList list;

    // Create a circular linked list
    list.head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);

    list.head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = list.head;

    std::cout << "Original List:" << std::endl;
    list.printList();

    // Delete a node
    list.deleteNode(2);

    std::cout << "List after deleting node 2:" << std::endl;
    list.printList();

    return 0;
}

```

</details>
