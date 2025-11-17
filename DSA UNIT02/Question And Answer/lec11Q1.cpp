
// Problem Statement
// Emma is working with two sets of sensor data recorded in two separate grounded header linked lists. She wants to merge these two lists alternately to analyze the combined data more efficiently
// Help Emma by writing a program to merge the two grounded header linked lists alternately
// Input format :
// The first line of input consists of the number `of elements n ir the first list.
// The second line consists of n elements, separated by space The third line consists of the number of elements m in the second list
// The fourth line consists of m elements, separated by space
// Output format:
// The output prints the merged linked list with nodes from botr ists alternately
// Refer to the sample output for formatting specifications
// Code constraints:
// The given test cases fall under the following constraints 1<=n,m<=15
// 1<= elements < 100
// Sample test cases :
// Input 1:
// 5
// 1 2 3 4 5 
// 5
// 6 7 8 9 10
// Output 1:
//  1 6 2 7 3 8 4 9 5 10
// Output 2:
// 12 56 26 59 34 64 48 78
// Output 2:
// 4
// 12 26 34 48
// 4
// 56 59 64 78

#include <bits/stdc++.h>
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

void insertNode(Node* head, int data) {
    Node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = createNode(data);
}

Node* mergeLists(Node* list1, Node* list2) {
    Node* dummy = createNode(0);
    Node* tail = dummy;

    Node* p1 = list1->next;
    Node* p2 = list2->next;

    while (p1 != NULL && p2 != NULL) {
        if (p1->data <= p2->data) {
            tail->next = p1;
            p1 = p1->next;
        } else {
            tail->next = p2;
            p2 = p2->next;
        }
        tail = tail->next;
    }

    while (p1 != NULL) {
        tail->next = p1;
        p1 = p1->next;
        tail = tail->next;
    }

    while (p2 != NULL) {
        tail->next = p2;
        p2 = p2->next;
        tail = tail->next;
    }

    return dummy->next;
}

void displayList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data;
        if (curr->next != NULL) cout << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    Node* list1 = createNode(0);
    Node* list2 = createNode(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        insertNode(list1, data);
    }

    cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        insertNode(list2, data);
    }

    Node* mergedList = mergeLists(list1, list2);
    displayList(mergedList);

    return 0;
}
