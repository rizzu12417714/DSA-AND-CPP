
// Problem Statement
// Prasath is developing a program to manage sorted singly linked lists of sales data. 
// The linked list should be kept sorted in ascending order. 
// The task is to insert a new data point into the sorted linked list and display the list before and after insertion.
// Help Prasath in creating the program.
// Input format :
// The first line of input contains an integer n, the number of initial data points to be inserted into the linked list. 
// The second line contains n integers, which are the initial data
// points.
// The third line contains a single integer data, the new data point to be inserted into the linked list
// Output format:
// The first line of output prints "Original data points:" 
// followed by the linked list elements before the insertion of the new data point
// The second line prints "Updated data points:" 
// followed by the linked list elements after the insertion of the new data point.
// Refer to the sample output for formatting specifications.
// Code constraints :
// The given test cases fall under the following constraints. 1<=n<=25  1<=initial data points, data <= 100
// Sample test cases :
// Input 1:
// 6
// 25 36 47 58 69 80
// 19
// Output 1:

// Original data points: 25 36 47 58 69 80
//  Updated data points: 19 25 36 47 58 69 80

// Input 2:
// 2 
// 50 100
// Output 2:
// Original data points: 50 100
// Updated data points: 50 75
//  100
// -
// 75




#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertSorted(Node** head, int data) {
    Node* newNode = createNode(data);

    if (*head == NULL || (*head)->data >= data) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    Node* current = *head;
    while (current->next != NULL && current->next->data < data) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    Node* head = NULL;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        insertSorted(&head, data);
    }

    int data;
    cin >> data;

    cout << "Original data points: ";
    display(head);

    insertSorted(&head, data);

    cout << "Updated data points: ";
    display(head);

    return 0;
}
