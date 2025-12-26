
// Problem Statement
// Sara has a series of sales data recorded in a singly linked list She wants to left-shift the list by k nodes to better analyze the sales patterns
// Help Sara implement a program to left-shift her sales data linked list by k nodes AUV
// Input format :
// The first line of input contains an integer N, representing the
// number of nodes
// The second line consists of N space- separated integers
// representing the sales data values,.
// The last integer k represents the number of nodes by which the list should be left-shifted
// Output format :
// The output prints the updated linked list after left-shifting by k nodes.
// Refer to the sample output for formatting specifications.
// Code constraints :
// The given test cases fall under the following constraints 1N<=25
// 1 <= data values <= 150
// Sample test cases :
// Input 1:
// 5
// 2478 
// 9
// Output 1:
// 892 4 7
// Input 2:
// 8 
// 12345678 
// 4
// Output 2:
// 56781 2 3 4


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

Node* insertNode(Node* head, int data) {
    Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
    }
    else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

Node* leftShiftLinkedList(Node* head, int k) {
    if (head == NULL || head->next == NULL || k == 0)
        return head;

    Node* temp = head;
    int count = 1;

    while (count < k && temp != NULL) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL || temp->next == NULL)
        return head;

    Node* kthNode = temp;
    Node* newHead = kthNode->next;

    Node* end = newHead;
    while (end->next != NULL) {
        end = end->next;
    }

    end->next = head;
    kthNode->next = NULL;

    return newHead;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int N, k;
    cin >> N;

    Node* head = NULL;
    for (int i = 0; i < N; i++) {
        int value;
        cin >> value;
        head = insertNode(head, value);
    }

    cin >> k;

    head = leftShiftLinkedList(head, k);

    printList(head);

    return 0;
}
