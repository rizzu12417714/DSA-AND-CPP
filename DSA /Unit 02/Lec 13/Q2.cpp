
// QUESTION PARAGRAPH

// Create a program to delete all the nodes with even values in a two-way linked list and print only 
// the nodes with odd values. The program should take user input for the number of nodes and the values of each 
// node and then perform the deletion.
// Input:
// The first line of input contains an integer n representing the number of nodes.
// The second line contains n integers, representing the data to be added to the list.
// Output:
// The output prints the values of the nodes that have odd values after deleting all nodes with even values.

// SAMPLE TEST CASE 1
// Input
// 3
// 47 78 32
// Output
// 47
// ✅ SAMPLE TEST CASE 2
// Input
// 8
// 23 76 70 56 97 58 25 74
// Output
// 23 97 25

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

void insertAtTail(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        newNode->prev = nullptr;
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

void deleteEvenNodes(Node*& head) {
    Node* current = head;

    while (current != nullptr) {
        if (current->data % 2 == 0) {
            Node* toDelete = current;

            if (toDelete->prev)
                toDelete->prev->next = toDelete->next;
            else
                head = toDelete->next;

            if (toDelete->next)
                toDelete->next->prev = toDelete->prev;

            current = toDelete->next;
            delete toDelete;
        } else {
            current = current->next;
        }
    }
}

void display(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = nullptr;
    int n, data;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> data;
        insertAtTail(head, data);
    }

    deleteEvenNodes(head);
    display(head);

    return 0;
}
