
// QUESTION PARAGRAPH

// A healthcare provider wants to analyze a list of patient records to determine if the sequence of 
// records is a palindrome. A sequence is considered a palindrome if it reads the same forward and backwards.

// You need to write a program using a two-way linked list to help the provider check if the given 
// list of medical records is a palindrome.

// The first line of input contains an integer n, representing the number of records.
// The second line contains n space-separated integers, each representing a medical record identifier.

// If the list of records is a palindrome, print
// "The patient's medical history is a palindrome"

// If it is not a palindrome, print
// "The patient's medical history is not a palindrome"
// SAMPLE TEST CASE 1

// Input

// 5
// 1 2 3 2 1

// Output

// The patient's medical history is a palindrome


// ---

// ✅ SAMPLE TEST CASE 2

// Input

// 5
// 1 2 3 4 5

// Output

// The patient's medical history is not a palindrome

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* createNode(int data) {
    Node* n = new Node{data, nullptr, nullptr};
    return n;
}

void insertAtEnd(Node*& head, Node*& tail, int data) {
    Node* n = createNode(data);
    if (!head) {
        head = tail = n;
    } else {
        tail->next = n;
        n->prev = tail;
        tail = n;
    }
}

bool isPalindrome(Node* head, Node* tail) {
    while (head && tail && head != tail && tail->next != head) {
        if (head->data != tail->data)
            return false;
        head = head->next;
        tail = tail->prev;
    }
    return true;
}

void freeList(Node* head) {
    while (head) {
        Node* next = head->next;
        delete head;
        head = next;
    }
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    int n, data;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> data;
        insertAtEnd(head, tail, data);
    }

    if (isPalindrome(head, tail))
        cout << "The patient's medical history is a palindrome";
    else
        cout << "The patient's medical history is not a palindrome";

    freeList(head);
    return 0;
}
