// Problem Statement

// Kathir is a software engineer working on a project that
// involves managing a linked list of integers. His task is to
// develop a program that allows the user to insert integers at
// the beginning of the list and then display the entire list. The
// program should continue inserting elements until the user
// decides to stop (1)

// Input format :ỉ

// The first line of input consists of an integer n, representing the
// item to be inserted at the beginning of the linked list
// The second line of input consists of an integer (0 or 1)
// representing the choice to continue or stop the insertion
// process.

// Input 0 to continue inserting more integers.
// Input 1 to stop inserting and display the linked list

// Output format:

// The output displays "Node inserted" each time a new integer is
// inserted into the linked list in a new line.
// After insertion, the output displays "Linked List: " followed by the
// integers in the linked list in insertion order
// The final line of output displays "Node ended" after displaying
// the linked list

// Refer to the sample output for the formatting specifications

// In this scenario, the test cases fall under the following constraints: 1sn <3500
// Sample test cases:
// Input 1:
// 2
// 0
// 4
// 1
// Output 1:
// Node inserted 
// Node inserted 
// Linked List: 4 2 
// Node ended

// Input 2
// 4
// 1
// Output 2:
// 4 1
// Node inserted
//  Linked List: 4 
// Node ended

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void insertAtBeginning(int item) {
    Node* newNode = new Node;
    newNode->data = item;
    newNode->next = head;
    head = newNode;
    cout << "Node inserted" << endl;
}

void traverseLinkedList() {
    cout << "Linked List: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int choice, item;

    do {
        cin >> item;
        insertAtBeginning(item);
        cin >> choice;
    } while (choice == 0);

    traverseLinkedList();

    cout << "Node ended";
    return 0;
}





