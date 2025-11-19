QUESTION PARAGRAPH

Seema is learning about void pointers and their applications. 
Help her write a program that takes an integer and a character as inputs.
The program should determine the following:

1. Whether the integer is positive, negative, or zero.


2. Whether the character is an alphabet, number, or neither.



You must use void pointers to access both inputs and display the correct messages.

Input Format

First line: An integer n

Second line: A character c


Output Format

Line 1:

"The number is positive"

"The number is negative"

"The number is zero"


Line 2:

"The character is an alphabet"

"The character is a number"

"The character is not a number or an alphabet"
SAMPLE TEST CASES

Input 1

22
C

Output

The number is positive
The character is an alphabet


---

Input 2

-5
2

Output

The number is negative
The character is a number


---

Input 3

0
@

Output

The number is zero
The character is not a number or an alphabet

#include <iostream>
#include <cctype>
using namespace std;

void analyzeInput(void* numPtr, void* charPtr) {
    int number = *(int*)numPtr;
    char character = *(char*)charPtr;

    if (number > 0) {
        cout << "The number is positive" << endl;
    } 
    else if (number < 0) {
        cout << "The number is negative" << endl;
    } 
    else {
        cout << "The number is zero" << endl;
    }

    if (isalpha(character)) {
        cout << "The character is an alphabet" << endl;
    } 
    else if (isdigit(character)) {
        cout << "The character is a number" << endl;
    } 
    else {
        cout << "The character is not a number or an alphabet" << endl;
    }
}

int main() {
    int number;
    char character;

    cin >> number;
    cin >> character;

    void* numPtr = &number;
    void* charPtr = &character;

    analyzeInput(numPtr, charPtr);

    return 0;
}

