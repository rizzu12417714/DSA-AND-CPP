
// Problem Statement
// Nandha wants to delete a range of nodes between two qiven positions in a singly linked list. 
// Write a program that takes input for the size of the linked list, the elements of the linked ist,
//  the start position, and the end position. The program should delete the nodes between the specified positions and 
//  display the updated linked list X
// Input format :
// The first line contains an integer n' representing the size of the linked list.
// The second line contains 'n' space-separated integers representing the elements of the linked list 
// The third line contains an integer 'S` representing the start position
// The fourth line contains an integer 'E' representing the end position. m
// Output format:
// The first line of output displays "Linked List before deletion: " followed by the linked
//  list before deletion The second line of output displays "Linked List after deletion: "
//   followed by the linked list after deletion
// Refer to the sample output for formatting specifications
// Code constraints :
// The given test cases fall under the following constraints: 
//  1<=n <=100 
// -50000 <= elements <= 50000 
// 1<=S<=100 
// 1<=E<=100
// Sample test cases :
// Input 1:
// 5
// 1 2 3 4 5
// 1
// 3
// Output 1:
// Linked List before deletion:1 2 3 4 5  
// Linked List after deletion: 4 5
// Input 2:
// 5 
// -50000 50000 4000 3676 7263
// 1
// 5
// Output 2:
//  Linked List before deletion: -50000 50000 4000 3676 7263 
// Linked List after deletion: all the elements are deleted



#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertNode(Node** head, int data) {
    Node* newNode = new Node{data, nullptr};
    if (!(*head)) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
    }
}

void deleteNodesInRange(Node** head, int start, int end) {
    Node* temp = *head;
    Node* prev = nullptr;
    int index = 1;

    while (temp && index < start) {
        prev = temp;
        temp = temp->next;
        index++;
    }

    for (int i = start; i <= end && temp; i++) {
        Node* del = temp;
        temp = temp->next;
        delete del;
    }

    if (!prev) {
        *head = temp;
    } else {
        prev->next = temp;
    }
}

void displayLinkedList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data;
        if (temp->next) cout << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteLinkedList(Node* head) {
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = nullptr;
    int size;
    cin >> size;

    for (int i = 0; i < size; i++) {
        int value;
        cin >> value;
        insertNode(&head, value);
    }

    int start, end;
    cin >> start;
    cin >> end;

    cout << "Linked List before deletion: ";
    displayLinkedList(head);

    deleteNodesInRange(&head, start, end);

    if (head == nullptr) {
        cout << "Linked List after deletion: all the elements are deleted" << endl;
    } else {
        cout << "Linked List after deletion: ";
        displayLinkedList(head);
    }

    deleteLinkedList(head);
    return 0;
}
