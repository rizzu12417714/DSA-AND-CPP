
// Milton is working on a project that involves managing data using a circular header-linked list. 
// The circular header linked list is a special type of linked list where the last node points back to the head node. 
// Each node in the list contains a value and a pointer to the next node.
// Milton needs to implement a program that checks if the circular header linked list is sorted in non-decreasing order.
// Input format :
// The first line of input consists of an integer n, representing the number of elements in the linked list.
// The second line consists of n space-separated integers representing the elements in a linked list.
// Output format :
// The output displays
// "The list is sorted in non-decreasing order"
// if the list is sorted.
// Otherwise, the output displays
// "The list is not sorted in non-decreasing order".
// Code constraints :
// 1 ≤ n ≤ 10
// −10 ≤ elements ≤ 10
//  Sample Test Case 1
// Input:
// 5
// 1 2 3 4 5
// Output:
// The list is sorted in non-decreasing order
// Sample Test Case 2
// Input:
// 4
// 1 4 2 3
// Output:
// The list is not sorted in non-decreasing order


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void append(Node** headRef, int data) {
    Node* newNode = new Node;
    newNode->data = data;

    if (*headRef == nullptr) {
        *headRef = newNode;
        newNode->next = *headRef;
        return;
    }

    Node* temp = *headRef;
    while (temp->next != *headRef)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = *headRef;
}

int isSorted(Node* head) {
    if (head == nullptr || head->next == head)
        return 1;

    Node* curr = head;
    do {
        Node* nextNode = curr->next;
        if (nextNode != head && curr->data > nextNode->data)
            return 0;
        curr = curr->next;
    } while (curr != head);

    return 1;
}

int main() {
    Node* head = nullptr;
    int n, data;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> data;
        append(&head, data);
    }

    if (isSorted(head))
        cout << "The list is sorted in non-decreasing order";
    else
        cout << "The list is not sorted in non-decreasing order";

    return 0;
}
