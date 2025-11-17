
// Exact Problem Statement (as in your photo)
// Guide Ramesh in writing a program that simulates the management of customer records in a bank 
// using a circular header linked list.
// Customers arrive in two batches; the first batch of customer IDs is inserted at the front of the list, 
// while the second batch is inserted at the end of the list. Finally, display the total number of customers in 
// the list and their IDs in order of insertion.
// Input format:
// The first line contains an integer n1, the number of customer IDs to be inserted at the front.
// The second line contains n1 space-separated integers, the customer IDs to be inserted at the front.
// The third line contains an integer n2, the number of customer IDs to be inserted at the end.
// The fourth line contains n2 space-separated integers, the customer IDs to be inserted at the end.
// Output format:
// The first line of output prints "Number of nodes in the CLL is " followed by the total number of
//  customers in the circular header linked list.
// The second line prints the customer node values.
// Sample test cases:
// Input 1:
// 3
// 10 20 30
// 2
// 40 50
// Output 1:
// Number of nodes in the CLL is 5
// 30 20 10 40 50
// Input 2:
// 1
// 15
// 2
// 40 50
// Output 2:
// Number of nodes in the CLL is 3
// 15 40 50




#include <iostream>
#include <string>
using namespace std;

struct Message {
    string content;
    Message* next;
};

Message* getnode(const string& s) {
    Message* x = new Message();
    x->content = s;
    x->next = nullptr;
    return x;
}

Message* insertAtFront(Message* head, const string& s) {
    Message* temp = getnode(s);
    if (head == nullptr) {
        temp->next = temp;
        return temp;
    } else {
        temp->next = head->next;
        head->next = temp;
        return head;
    }
}
Message* reverseList(Message* head) {
    if (head == nullptr || head->next == head) return head;
    Message* prev = nullptr;
    Message* curr = head->next;
    Message* first = curr;
    do {
        Message* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    } while (curr != first);
    first->next = prev;
    return prev;
}

void display(Message* head) {
    if (head == nullptr) {
        cout << "Message queue is empty!";
        return;
    }
    cout << "Message Queue:\n";
    Message* temp = head;
    do {
        cout << "- " << temp->content << "\n";
        temp = temp->next;
    } while (temp != head);
}
int main() {
    int n;
    cin >> n;
    cin.ignore();

    if (n == 0) {
        cout << "Message queue is empty!";
        return 0;
    }

    Message* head = nullptr;

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        head = insertAtFront(head, s);
    }

    head = reverseList(head);
    display(head);

    return 0;
}
