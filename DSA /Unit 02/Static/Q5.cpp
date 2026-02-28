Problem Statement

John is learning about doubly linked lists in his data structures class. To solidify his understanding, he 
decides to implement a program that allows various operations on a doubly linked list. The program will support 
creating a list, displaying it, inserting elements at the beginning, end, or around specific values, and deleting elements similarly.

Your task:
Complete the program by implementing deleteFromEnd() and deleteBeforeValue(int value) functions.
Input format

The first line contains an integer choice, representing the operation to perform:

Choice 1: Create the linked list.
The next lines contain space-separated integers, with -1 indicating the end of input.

Choice 2: Display the linked list.

Choice 3: Insert a node at the beginning.
The next line contains an integer representing the value to insert.

Choice 4: Insert a node at the end.
The next line contains an integer representing the value to insert.

Choice 5: Insert a node before a specific value.
The next line contains two integers:
value (existing node value) and data (value to insert).

Choice 6: Insert a node after a specific value.
The next line contains two integers:
value (existing node value) and data (value to insert).

Choice 7: Delete a node from the beginning.

Choice 8: Delete a node from the end.

Choice 9: Delete a node before a specific value.
The next line contains an integer representing the node before which deletion occurs.

Choice 10: Delete a node after a specific value.
The next line contains an integer representing the node after which deletion occurs.

Choice 11: Terminate the program.
Output format

For choice 1, print
LINKED LIST CREATED

For choice 2, print the list as space-separated integers on one line.
If the list is empty, print:
The list is empty

For choices 3, 4, 5, 6, print the updated linked list with a message indicating the insertion.

For choices 7, 8, 9, 10, print the updated linked list with a message indicating the deletion.

For operations that are not possible, print:
Value not found in the list

For choice 11, terminate.

For any invalid option, print:
Invalid option! Please try again.
Code constraints
1 ≤ elements of the list ≤ 100
1 ≤ choice ≤ 11
Sample Test Cases
Input 1:
1
5
3
7
-1
2
11
Output 1:
LINKED LIST CREATED
5 3 7
Input 2:
1
8
12
15
-1
2
3
2
3
2
4
20
11
Output 2:
LINKED LIST CREATED
8 12 15
The linked list after insertion at the beginning is:
2 8 12 15
The linked list after insertion at the end is:
2 8 12 15 20
Input 3:
1
1
2
3
-1
7
8
9
2
11
Output 3:
LINKED LIST CREATED
1 2 3
The linked list after deletion from the beginning is:
2 3
The linked list after deletion from the end is:
2
Input 4:
1
5
10
20
25
-1
2
5
15
10
20
11
Output 4:
LINKED LIST CREATED
5 10 20 25
The linked list after insertion before a value is:
5 10 15 20 25
The linked list after deletion after a value is:
5 10 15 20
Input 5:
1
9
14
18
10
22
-1
5
22 16
2
11
Output 5:
LINKED LIST CREATED
The linked list after insertion before a value is:
9 14 18 10 22
The linked list after insertion before a value is:
9 14 16 18 10 22
Input 6:
1
20
100
-1
2
5
15
10
11
Output 6:
LINKED LIST CREATED
20 100
Value not found in the list
The linked list after insertion before a value is:
20 100
Input 7:
1
2
4
6
-1
2
6
8
12
11
Output 7:
LINKED LIST CREATED
2 4 6
Value not found in the list
The linked list after insertion after a value is:
2 4 6
Input 8:
1
7
14
21
28
35
-1
2
9
21
17
11
Output 8:
LINKED LIST CREATED
7 14 21 28 35
The linked list after deletion before a value is:
7 21 28 35
Invalid option! Please try again.
Input 9:
2
11
Output 9:
The list is empty




#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int data) : data(data), next(nullptr), prev(nullptr) {}
};

Node* head = nullptr;

void createList() {
    Node* newNode, * temp;
    int data;
    cin >> data;

    while (data != -1) {
        newNode = new Node(data);

        if (head == nullptr) {
            head = newNode;
        } else {
            temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
        cin >> data;
    }
    cout << "LINKED LIST CREATED" << endl;
}

void displayList() {
    Node* temp = head;
    if (head == nullptr) {
        cout << "The list is empty" << endl;
        return;
    }
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtBeginning(int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    newNode->prev = nullptr;

    if (head != nullptr) {
        head->prev = newNode;
    }

    head = newNode;
    cout << "The linked list after insertion at the beginning is:" << endl;
    displayList();
}

void insertAtEnd(int data) {
    Node* newNode = new Node(data);
    newNode->next = nullptr;

    if (head == nullptr) {
        newNode->prev = nullptr;
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    cout << "The linked list after insertion at the end is:" << endl;
    displayList();
}

void insertBeforeValue(int value, int data) {
    Node* newNode = new Node(data);
    Node* temp = head;

    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    if (head->data == value) {
        newNode->next = head;
        newNode->prev = nullptr;
        head->prev = newNode;
        head = newNode;
    } else {
        while (temp != nullptr && temp->data != value) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Value not found in the list" << endl;
        } else {
            newNode->next = temp;
            newNode->prev = temp->prev;
            if (temp->prev != nullptr) {
                temp->prev->next = newNode;
            }
            temp->prev = newNode;
        }
    }
    cout << "The linked list after insertion before a value is:" << endl;
    displayList();
}

void insertAfterValue(int value, int data) {
    Node* newNode = new Node(data);
    Node* temp = head;

    while (temp != nullptr && temp->data != value) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Value not found in the list" << endl;
    } else {
        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next != nullptr) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }
    cout << "The linked list after insertion after a value is:" << endl;
    displayList();
}

void deleteFromBeginning() {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    head = head->next;

    if (head != nullptr) {
        head->prev = nullptr;
    }

    delete temp;
    cout << "The linked list after deletion from the beginning is:" << endl;
    displayList();
}

void deleteFromEnd() {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;
    if (head->next == nullptr) { // Only one node
        delete head;
        head = nullptr;
    } else {
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->prev->next = nullptr;
        delete temp;
    }

    cout << "The linked list after deletion from the end is:" << endl;
    displayList();
}

void deleteBeforeValue(int value) {
    if (head == nullptr || head->next == nullptr) {
        cout << "Operation not possible" << endl;
        return;
    }

    Node* temp = head->next; // start from second node
    while (temp != nullptr && temp->data != value) {
        temp = temp->next;
    }

    if (temp == nullptr || temp->prev == nullptr) {
        cout << "Operation not possible" << endl;
    } else {
        Node* nodeToDelete = temp->prev;
        if (nodeToDelete->prev != nullptr) {
            nodeToDelete->prev->next = temp;
        } else {
            head = temp;
        }
        temp->prev = nodeToDelete->prev;
        delete nodeToDelete;
    }

    cout << "The linked list after deletion before a value is:" << endl;
    displayList();
}

void deleteAfterValue(int value) {
    Node* temp = head;

    while (temp != nullptr && temp->data != value) {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) {
        cout << "Operation not possible" << endl;
    } else {
        Node* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        if (nodeToDelete->next != nullptr) {
            nodeToDelete->next->prev = temp;
        }
        delete nodeToDelete;
    }
    cout << "The linked list after deletion after a value is:" << endl;
    displayList();
}

void freeList() {
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    int option, data, value;

    while (1) {
        cin >> option;

        switch (option) {
            case 1:
                createList();
                break;
            case 2:
                displayList();
                break;
            case 3:
                cin >> data;
                insertAtBeginning(data);
                break;
            case 4:
                cin >> data;
                insertAtEnd(data);
                break;
            case 5:
                cin >> value >> data;
                insertBeforeValue(value, data);
                break;
            case 6:
                cin >> value >> data;
                insertAfterValue(value, data);
                break;
            case 7:
                deleteFromBeginning();
                break;
            case 8:
                deleteFromEnd();
                break;
            case 9:
                cin >> value;
                deleteBeforeValue(value);
                break;
            case 10:
                cin >> value;
                deleteAfterValue(value);
                break;
            case 11:
                freeList();
                exit(0);
            default:
                cout << "Invalid option! Please try again" << endl;
        }
    }

    return 0;
}
