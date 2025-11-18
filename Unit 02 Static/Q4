Problem Statement

Imagine you are developing a contact management system where each contact is stored as a node in a doubly linked list. Each contact is identified by a unique integer ID.

To efficiently manage the contact list, you need to implement a program that allows users to:

1. Insertion at the End: Insert a node with a given integer data at the end of the doubly linked list.


2. Insertion at a given Position: Insert a node with a given integer data at a specified position within the doubly linked list.


3. Display the List: Display the elements of the doubly linked list.




---

Input format

The first line of input consists of an integer n, representing the number of elements to be initially inserted into the doubly linked list.
The second line consists of n space-separated integers, denoting the elements to be inserted at the end.
The third line consists of an integer m, representing the new element to be inserted.
The fourth line consists of an integer p, representing the position at which the new element should be inserted (1-based indexing).


---

Output format

If p is valid, display the elements of the doubly linked list after performing the insertion at the specified position.

If p is invalid, display:

Invalid position

and on the next line, print the original list.

Refer to the sample output for the formatting specifications.
Code constraints
1 ≤ n ≤ 15
1 ≤ elements ≤ 100
Sample Test Cases
Input 1:
5
10 25 34 48 57
35
4
Output 1:
10 25 34 35 48 57
Input 2:
7
1 4 5 2 3 6 8
45
9
Output 2:
Invalid position
1 4 5 2 3 6 8


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    Node* createNode(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = nullptr;
        return newNode;
    }

    void insertAtEnd(int data) {
        Node* newNode = createNode(data);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void displayList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void insertAtPosition(int data, int pos) {
        int count = 0;
        Node* temp = head;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        // Invalid position
        if (pos < 1 || pos > count + 1) {
            cout << "Invalid position" << endl;
            displayList();
            return;
        }

        Node* newNode = createNode(data);

        // Case 1: Insert at beginning
        if (pos == 1) {
            newNode->next = head;
            if (head != nullptr)
                head->prev = newNode;
            head = newNode;
            if (tail == nullptr)
                tail = newNode;
        }
        // Case 2: Insert at end
        else if (pos == count + 1) {
            insertAtEnd(data);
            return displayList();
        }
        // Case 3: Insert in middle
        else {
            Node* current = head;
            for (int i = 1; i < pos - 1; i++) {
                current = current->next;
            }
            newNode->next = current->next;
            newNode->prev = current;
            current->next->prev = newNode;
            current->next = newNode;
        }

        displayList();
    }
};

int main() {
    DoublyLinkedList dList;
    int n;
    cin >> n;

    int data;
    for (int i = 0; i < n; i++) {
        cin >> data;
        dList.insertAtEnd(data);
    }

    int newData, pos;
    cin >> newData >> pos;

    dList.insertAtPosition(newData, pos);

    return 0;
}
