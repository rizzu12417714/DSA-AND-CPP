
// Problem statement (paragraph)
// Sam is working on a messaging system where messages are stored in a circular linked list. 
// In this system, each new message is inserted at the beginning of the queue, meaning the most recent message 
// is inserted just after the head node. However, for display purposes, Sam wants to reverse the insertion order of the
//  messages so that the last inserted message appears first in the output, simulating a “last in, first out” (LIFO) behavior.
// The first line of input contains an integer n, representing the number of messages in the queue.
// The next n lines contain strings representing the content of each message.
// The output displays Message Queue: followed by each message content in the reversed order, each prefixed by - .
// Constraints
// 1 ≤ n ≤ 10
// Each string may contain uppercase, lowercase, spaces, and special characters, with at most 50 characters.
// Sample test cases
// Input 1
// 4
// Hello, how are you?
// Can we meet tomorrow?
// Don't forget to bring the d-
// See you soon!
// Output 1
// Message Queue:
// - See you soon!
// - Don't forget to bring the d-
// - Can we meet tomorrow?
// - Hello, how are you?
// Input 2
// 2
// Hello, Hi
// Let's code
// Output 2
// Message Queue:
// - Let's code
// - Hello, Hi
// Input 3
// 0
// Output 3
// Message queue is empty!


#include <iostream>
#include <string>
using namespace std;

struct Message {
    string content;
    Message* next;
};

Message* createMessageNode(const string& content) {
    Message* newMessage = new Message();
    newMessage->content = content;
    newMessage->next = nullptr;
    return newMessage;
}

Message* insertMessage(Message* head, const string& content) {
    Message* newMessage = createMessageNode(content);
    if (head == nullptr) {
        newMessage->next = newMessage;
        return newMessage;
    } else {
        newMessage->next = head->next;
        head->next = newMessage;
        return head;
    }
}

Message* reverseInsertedMessages(Message* head) {
    if (head == nullptr || head->next == head) return head;
    Message* prev = nullptr;
    Message* current = head->next;
    Message* start = current;
    do {
        Message* nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    } while (current != start);
    start->next = prev;
    return prev;
}

void displayMessages(Message* head) {
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
    int numMessages;
    cin >> numMessages;
    cin.ignore();

    if (numMessages == 0) {
        cout << "Message queue is empty!";
        return 0;
    }

    Message* head = nullptr;

    for (int i = 0; i < numMessages; i++) {
        string content;
        getline(cin, content);
        head = insertMessage(head, content);
    }

    head = reverseInsertedMessages(head);
    displayMessages(head);

    return 0;
}
