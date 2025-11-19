QUESTION PARAGRAPH (FULL & CLEAN)

Alexa is building a system to manage library books. She wants to check whether a given book is available within the given price range or not. Since she is stuck with other work, she needs your help to write a program that solves the problem using a void pointer.

Your program should accept the price of the book and its availability status (Yes or No) as inputs.

The rules are:

The price must be a positive float.

The availability status should be Y, y, N, or n.

A book is considered available within the given range if:

0 < price < 2500.50
AND
availability is 'Y' or 'y'


Input Format:

First line → float value (price of the book)

Second line → char (availability status)


Output Format:

Print:

"Yes" if the book is available within the specified price range,

otherwise "No".
SAMPLE TEST CASES (Exact from your screenshots)

Input 1

2300.50
y

Output

Yes


---

Input 2

-89.90
N

Output

No


---

Input 3

2300.34
Y

Output

Ye
Input 4
6543.00
n
Output
No
#include <iostream>
#include <cctype>
using namespace std;

void checkBookAvailability(void* pricePtr, void* availPtr) {
    float price = *(float*)pricePtr;
    char avail = *(char*)availPtr;

    if (price <= 0 || price > 2500.50) {
        cout << "No";
        return;
    }

    if (avail == 'Y' || avail == 'y') {
        cout << "Yes";
    } else {
        cout << "No";
    }
}

int main() {
    float price;
    char availability;

    cin >> price;
    cin >> availability;

    checkBookAvailability(&price, &availability);

    return 0;
}
