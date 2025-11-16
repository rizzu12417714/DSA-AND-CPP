
// Problem Statement

// Dharun is working on a program to manipulate linked lists. He
// wants to write a function that takes two linked lists as input,
// inserts nodes at the end, and deletes all the nodes from the
// first list that also appear in the second list.

// Dharun needs your help implementing this function. The
// function should take two linked lists, list1, and list2, as input.
// where each list is represented by its head node

// Input format :

// The first line contains an integer n, denoting the number of
// nodes in listl

// The second line contains n space-separated integers,
// representing the values of the nodes in list]
// The third line contains an integer m, denoting the number of
// nodes in list2

// The fourth line contains m space-separated integers,
// representing the values of the nodes in list2

// Output format :

// The first line of output displays "Before deletion: " followed by
// the elements of the first linked list before the deletion
// separated by a space,

// The second line of output displays "After deletion:" followed by
// the elements of the first linked list after the deletion, separated
// by a space.

// If all elements in the first linked list are the same after deletion, the third line displays, "Elements in both lists are same".
// Refer to the sample output for formatting specifications.
// Code constraints :
// 7714 In this scenario, the test cases fall under the following constraints 1sn,m s100 -5000 < values of nodes s 5000
// Sample test cases :
// input 1:
// 5
// 2 3 4 5 1
// 5
// 1 6 2 3 8
// Output 1:
// Before deletion: 2 3 4 5 1 
// After deletion: 4 5
// Input 2:
// 5
// 1 2 3 4 5 
// 5 
// 1 2 3 4 5
// Output 2:
// Before deletion: 1 2 3 4 5 
// After deletion: Elements in both lists are s



#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertNode(Node*& head, int data) {
    Node* newNode = new Node{data, nullptr};
    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
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
    while (head) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

bool valueExists(Node* head, int value) {
    Node* temp = head;
    while (temp) {
        if (temp->data == value)
            return true;
        temp = temp->next;
    }
    return false;
}

void deleteNodesInSecondList(Node*& first, Node* second) {
    Node* temp2 = second;

    while (temp2) {
        int target = temp2->data;

        while (first && first->data == target) {
            Node* del = first;
            first = first->next;
            delete del;
        }

        Node* curr = first;
        Node* prev = nullptr;

        while (curr) {
            if (curr->data == target) {
                if (prev) prev->next = curr->next;
                Node* del = curr;
                curr = curr->next;
                delete del;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }

        temp2 = temp2->next;
    }
}

bool areAllElementsSame(Node* head) {
    if (!head) return true;
    int value = head->data;
    Node* temp = head->next;
    while (temp) {
        if (temp->data != value)
            return false;
        temp = temp->next;
    }
    return true;
}

int main() {
    Node* first = nullptr;
    Node* second = nullptr;

    int size1, size2;
    cin >> size1;

    for (int i = 0; i < size1; i++) {
        int value;
        cin >> value;
        insertNode(first, value);
    }

    cin >> size2;

    for (int i = 0; i < size2; i++) {
        int value;
        cin >> value;
        insertNode(second, value);
    }

    cout << "Before deletion: ";
    displayLinkedList(first);

    deleteNodesInSecondList(first, second);

    cout << "After deletion: ";
    displayLinkedList(first);

    if (areAllElementsSame(first)) {
        cout << "Elements in both lists are same";
    }

    deleteLinkedList(first);
    deleteLinkedList(second);

    return 0;
}
