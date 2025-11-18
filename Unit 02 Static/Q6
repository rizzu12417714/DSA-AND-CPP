Problem Statement

Meera is learning about doubly linked lists and wants to practice inserting elements at a specific position in the list. She has decided to write a program where she can create a doubly linked list and then insert a new node at any given position.

Your task:
Implement the insertAtPosition(int data, int position) function that inserts a node with the given value at the required position.


---

Input format

The first line of input contains integers (space-separated) representing the initial linked list elements, ending with -1.

The second line contains two integers:
data → the value to insert
position → the 1-based index where the new node should be inserted



---

Output format

Print "The list is empty" if the initial list has no elements.

Print "Invalid position" if the position is out of range.

Otherwise, print the linked list after insertion as space-separated integers.


Refer to the sample output for better understanding.


---

Code constraints

1 ≤ elements ≤ 100

1 ≤ position ≤ N+1 (where N is the current length of list)



---

Sample Test Cases

Input 1:

5 10 15 -1
20 2

Output 1:

5 20 10 15


---

Input 2:

7 14 21 -1
99 10

Output 2:

Invalid position
7 14 21

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = nullptr;

void insertAtPosition(int data, int position) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->prev = nullptr;
    newNode->next = nullptr;

    // If list is empty
    if (head == nullptr) {
        cout << "The list is empty";
        return;
    }

    // Count current nodes
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }

    // Invalid position check
    if (position < 1 || position > count + 1) {
        cout << "Invalid position" << endl;
        temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        return;
    }

    // Insert at beginning
    if (position == 1) {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }

    temp = head;
    int i = 1;
    while (i < position - 1 && temp->next != nullptr) {
        temp = temp->next;
        i++;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != nullptr)
        temp->next->prev = newNode;

    temp->next = newNode;
}

void display() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    int value;
    Node* tail = nullptr;

    // Read initial list
    while (cin >> value && value != -1) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;
        newNode->prev = nullptr;

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    int data, position;
    cin >> data >> position;

    // Check for empty list before insertion
    if (head == nullptr) {
        cout << "The list is empty";
        return 0;
    }

    insertAtPosition(data, position);
    display();

    return 0;
}

