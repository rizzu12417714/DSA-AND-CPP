Problem Statement

Aarav is working on managing a dynamic list of numbers using a linked list. He needs a program that allows him to insert numbers at the end of the list, delete from the beginning, delete from the end, or delete at a specific position. Additionally, he wants to view the list at any point and exit when done. Your task is to complete the program by implementing deleteFromEnd() and deleteAtPosition(int position) functions.


---

Input format

The first line contains an integer representing the choice of operation:

Choice 1: followed by an integer X: Insert X at the end.

Choice 2: Delete from the beginning.

Choice 3: Delete from the end.

Choice 4: followed by an integer P: Delete the node at position P.

Choice 5: Display the linked list.

Choice 6: Exit the program.


The input sequence continues until the exit command (6) is given.


---

Output format

The output prints the following:

"Node deleted from the beginning." if deletion from the beginning is successful.

"Node deleted from the end." if deletion from the end is successful.

"Node deleted at position P." if deletion at a specific position is successful.

"Invalid position." if the position does not exist in the list.
"The list is empty." if displaying an empty list.
"The list is empty, cannot delete." if an attempt is made to delete a node from an empty list (for beginning, end, or specific position deletions).
The linked list is printed in the format:
X -> Y -> Z -> NULL
"Exiting..." when the program ends.
Sample Test Case 1
Input 1:
1
10
1
20
2
5
6
Output 1:
Node deleted from the beginning.
20 -> NULL
Exiting...
Sample Test Case 2
Input 2:
1
30
1
40
1
60
3
5
6
Output 2:
Node deleted from the end.
30 -> 40 -> NULL
Exiting...


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void insertAtEnd(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void deleteFromBeginning() {
    if (head == nullptr) {
        cout << "The list is empty, cannot delete." << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    cout << "Node deleted from the beginning." << endl;
}

void deleteFromEnd() {
    if (head == nullptr) {
        cout << "The list is empty, cannot delete." << endl;
        return;
    }

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        cout << "Node deleted from the end." << endl;
        return;
    }

    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
     
    delete temp->next;
    temp->next = nullptr;
    cout << "Node deleted from the end." << endl;
}

void deleteAtPosition(int position) {
    if (head == nullptr) {
        cout << "The list is empty, cannot delete." << endl;
        return;
    }

    if (position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        
        cout << "Node deleted at position 1." << endl;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) {
        cout << "Invalid position." << endl;
        return;
    }

    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;

    cout << "Node deleted at position " << position << "." << endl;
}

void displayList() {
    if (head == nullptr) {
        cout << "The list is empty." << endl;
        return;
    }
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void freeList() {
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    int choice, data, position;

    while (true) {
        cin >> choice;

        switch (choice) {
            case 1:
                cin >> data;
                insertAtEnd(data);
                break;
            case 2:
                deleteFromBeginning();
                break;
            case 3:
                deleteFromEnd();
                break;
            case 4:
                cin >> position;
                deleteAtPosition(position);
                break;
            case 5:
                displayList();
                break;
            case 6:
                cout << "Exiting..." << endl;
                freeList();
                return 0;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }
}
