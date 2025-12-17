Problem Statement

Arun is tasked with implementing a program that simulates a mathematical operation on an 
input number. The program uses a class to represent a Parent class and its derived Child class.
The Parent class contains a protected member variable num and a public member function setNum(int n)
to assign a value to num. The Child class inherits from the Parent class and implements the member function fun().

Using inheritance, write a program that extracts the individual digits of the given number,
stores them, and computes the sum of all possible pairs of these digits. Finally, display the 
calculated sum as output.


---

Input Format

The input consists of a single integer value n.


---

Output Format

The output prints an integer value, representing the final sum obtained by adding all 
possible pairs of digits of the given number.
Sample Test Cases

Input 1

1234

Output 1

30


---

Input 2

4356

Output 2

54
Short Explanation (samajhne ke liye)

1234 → digits: 4, 3, 2, 1
Pair sums:
(4+3)+(4+2)+(4+1)+(3+2)+(3+1)+(2+1) = 30

4356 → digits: 6, 5, 3, 4
All pair sums = 54



code



#include <bits/stdc++.h>
using namespace std;

class Parent {
protected:
    int num;
public:
    void setNum(int n) {
        num = n;
    }
};

class Child : public Parent {
public:
    void fun() {
        vector<int> d;
        int n = num;
        while(n > 0) {
            d.push_back(n % 10);
            n /= 10;
        }
        int sum = 0;
        for(int i = 0; i < d.size(); i++) {
            for(int j = i + 1; j < d.size(); j++) {
                sum += d[i] + d[j];
            }
        }
        cout << sum;
    }
};

int main() {
    Child c;
    int num;
    cin >> num;
    c.setNum(num);
    c.fun();
    return 0;
}
