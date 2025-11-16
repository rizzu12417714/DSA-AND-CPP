
// Problem statement
// Fin is creating a linked list to store his favorite numbers in the order he inputs them. 
// He wants to continue adding numbers until he inputs a negative number, 
// which will signal the end of the input. 
// After the input ends, he wants to print all the numbers in the linked list in the order they were added
// Input format :
// The input consists of an integer n, representing the number to be added to the linked list in a new line each. 
// The input ends when a negative number is entered,
// Output format:
// If the linked list is empty, the output displays the message "Linked List is empty.
// If the linked list is not empty, the output displays "Linked List: 
// " followed by the contents of the linked list separated by a space. 
// Each node's data is displayed in the order it was inserted.
// Refer to the sample output for format specifications.
// Code constraints :
// In this scenario. 
// the test cases fall under the 
// following constraints: -5000<= n <= 5000
// Sample test cases :
// Input 1:
// 1
// 3
// 4
// -1
// Output 1:
// Linked List:1 2 
// Input 2:
// -2
// Output 2
// Linked List is empty.
// Input 3:
// 2000 -3000 4000 -5000 -1
// Output 3:
// Linked List: 2000


#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void insert(Node** head_ref, int new_data) {
    Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = nullptr;

    if (*head_ref == nullptr) {
        *head_ref = new_node;
    } 
    else {
        Node* temp = *head_ref;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void print(Node* head) {
    if (head == nullptr) {
        cout << "Linked List is empty." << endl;
        return;
    }

    cout << "Linked List: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    struct Node *head = NULL;
    int elements;

    while (1)
    {
        cin >> elements;
        if (elements >= 0)
        {
            insert(&head, elements);
        }
        else
        {
            break;
        }
    }

    print(head);

    return 0;
}