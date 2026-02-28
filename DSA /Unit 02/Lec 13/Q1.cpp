
// QUESTION PARAGRAPH

// Lisa is organizing a list of attendees for two consecutive events. 
// She wants to split a list of attendee names into two halves for the two events. 
// You are tasked with helping Lisa by creating a program that handles this task efficiently.

// Write a program to manage a two-way linked list of attendee names to split it into two halves.
// Input:
// The first line of input consists of a single integer N, representing the number of attendees.
// The following N lines contain the names of the attendees, one name per line.
// Output:
// The first line of output displays the names of the attendees assigned to the first event.
// The second line displays the names of the attendees assigned to the second event.
// ✅ SAMPLE TEST CASE 1
// Input
// 4
// John
// Emma
// Michael
// Sophia
// Output
// John Emma 
// Michael Sophia
// ✅ SAMPLE TEST CASE 2
// Input
// 5
// Alice
// Bob
// Claire
// David
// Emily
// Output
// Alice Bob Claire 
// David Emily

#include <iostream>
#include <cstring>
using namespace std;

struct Node {
    string data;
    Node* next;
    Node* prev;
};

void insertAtEnd(Node*& head, const string& s) {
    Node* newNode = new Node{s, nullptr, nullptr};

    if (!head) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

void splitList(Node* head, Node*& first, Node*& second) {
    if (!head) {
        first = nullptr;
        second = nullptr;
        return;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    first = head;
    second = slow->next;

    if (second)
        second->prev = nullptr;

    slow->next = nullptr;
}

void display(Node* head) {
    Node* t = head;
    while (t) {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    Node* first = nullptr;
    Node* second = nullptr;

    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        insertAtEnd(head, s);
    }

    splitList(head, first, second);

    display(first);
    display(second);

    return 0;
}
