QUESTION PARAGRAPH (Full & Clean)

You are developing a program to determine the maximum number between two input values.
To achieve this, you have created a class called NumberComparator.
Your goal is to use the this pointer concept inside this class.

Input Format

The input consists of two integer values, n1 and n2, separated by a space.

Output Format

Print the maximum of the two numbers in the format:

n1/n2 is the maximum number

You must strictly follow the output format.

Constraints

−10⁷ ≤ n1, n2 ≤ 10⁷


---

✅ SAMPLE TEST CASES

Input 1

20 25

Output

25 is the maximum number


---

Input 2

-21 -58

Output

-21 is the maximum number



#include <iostream>
using namespace std;

class NumberComparator {
    int n1, n2;

public:
    void setNumbers(int a, int b) {
        this->n1 = a;
        this->n2 = b;
    }

    void findMax() {
        if (n1 > n2)
            cout << n1 << " is the maximum number" << endl;
        else
            cout << n2 << " is the maximum number" << endl;
    }
};

int main() {
    NumberComparator obj;
    int a, b;

    cin >> a >> b;

    obj.setNumbers(a, b);
    obj.findMax();

    return 0;
}



