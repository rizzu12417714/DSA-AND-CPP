
// Problem Statement

// In a university, students are registering for different clubs based on their student ID numbers. Each club wants to separate students into two lists: one for students with even ID numbers and another for students with odd ID numbers.

// Your task is to write a program to help the clubs split the list of student IDs into two separate lists based on their parity (even or odd), using a grounded header linked list.
// Input format:

// The first line contains an integer, n, representing the number of student IDs.
// The second line contains n integers, each representing a student ID.
// Output format:

// The first line of output prints the list of student IDs with even numbers.
// The second line prints the list of student IDs with odd numbers.
// Refer to the sample output for formatting specifications.
// Code constraints:
// 1 ≤ n ≤ 20
// 1 ≤ student IDs ≤ 100
// Sample Test Case 1
// Input:
// 5
// 14 26 38 45 51
// Output:
// Even List: 14 26 38
// Odd List: 45 51
// Sample Test Case 2
// Input:
// 8
// 41 52 74 46 78 90 42 94
// Output:
// Even List: 52 74 46 78 90 42 94
// Odd List: 41


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

void insertNode(Node* head, int data) {
    Node* temp = head;
    while (temp->next != nullptr) temp = temp->next;
    temp->next = createNode(data);
}

void displayList(Node* head) {
    Node* curr = head->next;
    while (curr != nullptr) {
        cout << curr->data;
        if (curr->next != nullptr) cout << " ";
        curr = curr->next;
    }
    cout << endl;
}

void splitListByParity(Node* head, Node*& evenHead, Node*& oddHead) {
    evenHead = createNode(0);
    oddHead = createNode(0);
    Node* e = evenHead;
    Node* o = oddHead;

    Node* curr = head->next;
    while (curr != nullptr) {
        if (curr->data % 2 == 0) {
            e->next = createNode(curr->data);
            e = e->next;
        } else {
            o->next = createNode(curr->data);
            o = o->next;
        }
        curr = curr->next;
    }
}

int main() {
    Node* head = new Node();
    head->next = nullptr;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        insertNode(head, data);
    }

    Node* evenHead = nullptr;
    Node* oddHead = nullptr;

    splitListByParity(head, evenHead, oddHead);

    cout << "Even List: ";
    displayList(evenHead);

    cout << "Odd List: ";
    displayList(oddHead);

    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
