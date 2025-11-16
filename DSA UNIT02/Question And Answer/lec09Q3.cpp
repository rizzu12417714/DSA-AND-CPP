
// Problem Statement
// A company wants to analyze the performance of its sales team by reviewing the sales figures from the most recent months. 
// Each month's sales data is entered into a singly linked list, with each node representing a month's sales,.
// Write a program that computes the sum of sales for the, last m months from the linked list data
// Input format :
// The first line consists of an integer n, representing the number of months' sales data
// The second line consists of n space-separated integers. representing the sales data for each month 
// The third line consists of an integer m, representing the number of most recent months to sum up.
// Output format:
// The output prints the sum of sales for the last m months
// Refer to the sample output for formatting specifications.
// Code constralints:
// The given test cases fall under the following constraints: 1<= n <=100
// 0 <= sales data <= 100
// Input 1:
// 6 
// 3 310430 12
// 3
// Output 1:
// 46
// Input 2:
// 10 
// 7412580369 
// 5
// Output 2:
// 26




#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void insertNode(Node** head_ref, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = newNode;
        return;
    }

    Node* temp = *head_ref;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

int getLinkedListSize(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int sumOfLastNNodes(Node* head, int n) {
    int size = getLinkedListSize(head);
    int skip = size - n;
    int sum = 0;

    Node* temp = head;
    int i = 0;

    while (temp != NULL) {
        if (i >= skip) {
            sum += temp->data;
        }
        temp = temp->next;
        i++;
    }
    return sum;
}

void deleteLinkedList(Node** head_ref) {
    Node* current = *head_ref;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        delete current;
        current = next;
    }
    *head_ref = nullptr;
}

int main() {
    Node* head = nullptr;

    int numNodes;
    cin >> numNodes;

    for (int i = 0; i < numNodes; i++) {
        int data;
        cin >> data;
        insertNode(&head, data);
    }

    int n;
    cin >> n;

    int sum = sumOfLastNNodes(head, n);
    cout << sum << endl;

    deleteLinkedList(&head);
    return 0;
}

