
// Problem Statement
// Lisa wants to create a linked list sorted in ascending order. 
// She wants to insert nodes in such a way that the linked list remains sorted after insertion.
// Write a program that takes the number of nodes to be inserted, followed by their values in non-decreasing order. 
// The program should then ask for a new value and insert a node with that value at the appropriate 
// position to maintain the sorted order.
// Finally, the program should print the updated linked list
// 24
// Example
// Input:
// 5
// 13579
// 4
// Output: 134579
// Explanation:
// The program first creates a sorted linked list using the given 
// input values: 1, 3, 5, 7, and 9. After creatina the initial sorted linked list, 
// the program asks for a new value, which is 4. 
// It then inserts a node with value 4 at the appropriate position to maintain the sorted order. 
// Finally, the program prints the updated linked list, 
// which is 1, 3, 4, 5, 7, and 9 in ascending order.
// Input format:
// The first line of input consists of an integer n, representing the number of elements in the initial sorted linked list The second line of input consists of n space-separated integers, representing the elements of the sorted linked list The third line of input consists of integer data, which represents the element to be inserted into the linked list
// Output format:
// The output displays the updated linked list after inserting the new element, separated bv space The linked list should remain sorted in ascending order
// Refer to the sample output for the formatting specifications.
// Code constraints :
// In this scenario, the test cases fall under the following constraints 1sns10
// -100 <_ elements, data <_ 100
// Sample test cases :
// Input 1:

// Output 1:
// S 13579 4
// 134579
// Input 2:

// Output 2:
// 6 -15 -1005910 7
// -15 -1005 7 9 10

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void sortedInsert(Node** head_ref, int new_data) {
    Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = nullptr;

    if (*head_ref == nullptr || (*head_ref)->data >= new_data) {
        new_node->next = *head_ref;
        *head_ref = new_node;
    } 
    else {
        Node* current = *head_ref;
        while (current->next != nullptr && current->next->data < new_data) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int n, data;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        sortedInsert(&head, data);
    }

    cin >> data;
    sortedInsert(&head, data);

    printList(head);

    return 0;
}
