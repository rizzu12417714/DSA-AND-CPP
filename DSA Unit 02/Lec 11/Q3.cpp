
// In a warehouse, a system keeps track of packages using a grounded header linked list where each node represents a package. 
// Each package is added to the end of the list. Sometimes, packages need to be removed from specific positions in the list.
// Your task is to implement this system which can add packages to the list, display the list, and remove a package from a specified position.
// Input format :
// The first line contains an integer, n, which represents the number of packages to be added to the list.
// The second line contains n integers, each representing the ID of a package.
// The third line contains an integer, position, which indicates the position of the package to be removed from the list (1-based index).
// Output format :
// The first line of output represents the elements before deletion
// and the next line represents the remaining elements in the linked list after deleting the particular value.
// Refer to the sample output for formatting specifications.
// Code constraints :
// 1 ≤ n ≤ 25
// 1 ≤ elements ≤ 100
// Sample Test Case 1
// Input:
// 5
// 10 20 30 40 50
// 2
// Output:
// Linked List before deletion: 10 20 30 40 50
// Linked List after deletion: 10 30 40 50
// Sample Test Case 2
// Input:
// 5
// 12 23 43 56 89
// 5
// Output:
// Linked List before deletion: 12 23 43 56 89
// Linked List after deletion: 12 23 43 56


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

void deleteAtPosition(Node* head, int pos) {
    Node* prev = head;
    Node* curr = head->next;
    int i = 1;

    if (curr == nullptr) return;

    while (curr != nullptr && i < pos) {
        prev = curr;
        curr = curr->next;
        i++;
    }

    if (curr != nullptr) {
        prev->next = curr->next;
        delete curr;
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

    int pos;
    cin >> pos;

    cout << "Linked List before deletion: ";
    displayList(head);

    deleteAtPosition(head, pos);

    cout << "Linked List after deletion: ";
    displayList(head);

    return 0;
}
