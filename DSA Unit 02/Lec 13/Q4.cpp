
// UESTION 4 — PARAGRAPH (Exact Required Format)

// Tom manages a library system where books are categorized by their ID numbers 
// in ascending order. He wants to maintain the order of books using a two-way linked list. Each 
// time a new book is added, it should be placed in the correct position to keep the list sorted. 
// Tom also wants to insert a final book after all the initial books have been added.

// Write a program to help Tom maintain the sorted order of books in the library.

// Input format :
// The first line of input contains an integer n representing the number of initial books.
// The second line consists of n integers, representing the ID of each book to be added.
// The third line contains an integer representing the ID of the final book to be added.

// Output format :
// The output prints the sorted order of book IDs after all books have been added.

// Code constraints :
// 1 ≤ n ≤ 25
// 1 ≤ book IDs ≤ 100

// Sample Test Case 1

// Input

// 3
// 2 4 1
// 3

// Output

// 1 2 3 4


// ---

// ✅ Sample Test Case 2

// Input

// 1
// 5
// 2

// Output

// 2 5


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* getNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->prev = nullptr;
    newNode->next = nullptr;
    return newNode;
}

void sortedInsert(Node*& head, Node* newNode) {
    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* current = head;

    if (newNode->data < current->data) {
        newNode->next = current;
        current->prev = newNode;
        head = newNode;
        return;
    }

    while (current->next != nullptr && current->next->data < newNode->data) {
        current = current->next;
    }

    newNode->next = current->next;

    if (current->next != nullptr)
        current->next->prev = newNode;

    current->next = newNode;
    newNode->prev = current;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = nullptr;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        Node* newNode = getNode(data);
        sortedInsert(head, newNode);
    }

    int lastData;
    cin >> lastData;

    Node* lastNode = getNode(lastData);
    sortedInsert(head, lastNode);

    printList(head);

    return 0;
}
