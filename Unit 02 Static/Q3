
// Problem Statement

// Jake maintains a linked list of his gym members, each represented by a unique membership number. Jake needs to check if a particular membership number is part of his list of active members. Write a solution to help Jake find out if the membership number exists in his linked list.


// ---

// Input format

// The first line of input consists of an integer N, the number of active gym members in the list.
// The second line contains N integers, each representing a unique membership number of an active gym member.
// The third line contains an integer M, representing the membership number that Jake needs to check in the list.


// ---

// Output format

// The output prints "Membership number M is active" if the membership number exists in the list.
// Otherwise, the output prints "Membership number M is not in the list".

// Refer to the sample output for the formatting specifications.


// ---

// Code constraints

// In this scenario, the given test cases fall under the following constraints:
// 1 ≤ N ≤ 10
// 1 ≤ membership number ≤ 1000


// ---

// Sample Test Cases

// Input 1:

// 2
// 889 911
// 977

// Output 1:

// Membership number 977 is not in the list


// ---

// Input 2:

// 3
// 100 200 300
// 100

// Output 2:

// Membership number 100 is active



#include <iostream>
using namespace std;

struct Node {
    int membershipNumber;
    Node* next;
};

// Function to create a new node
Node* createNode(int membershipNumber) {
    Node* newNode = new Node();
    newNode->membershipNumber = membershipNumber;
    newNode->next = nullptr;
    return newNode;
}

// Function to check if membership exists in the list
bool isMemberInList(Node* head, int membershipToCheck) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->membershipNumber == membershipToCheck)
            return true;
        temp = temp->next;
    }
    return false;
}

int main() {
    int N;
    cin >> N;

    Node* head = nullptr;
    Node* tail = nullptr;

    // Build the linked list
    for (int i = 0; i < N; i++) {
        int membershipNumber;
        cin >> membershipNumber;
        Node* newNode = createNode(membershipNumber);

        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int membershipToCheck;
    cin >> membershipToCheck;

    // Check membership existence
    if (isMemberInList(head, membershipToCheck)) {
        cout << "Membership number " << membershipToCheck << " is active";
    } else {
        cout << "Membership number " << membershipToCheck << " is not in the list";
    }

    return 0;
}
