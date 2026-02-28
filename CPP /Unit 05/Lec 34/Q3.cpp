Single File Programming Question
Problem statement



Marc is working as a software developer for a scientific research institute, and his team is currently investigating various types of interesting numbers. One such type is the "Neon Number." A neon number is a special type of positive integer where the sum of the digits of its square is equal to the original number.



Your task is to develop a program that can efficiently determine whether a given positive integer is a neon number or not,  while also implementing a virtual destructor for appropriate memory management.



For Example,

N = 9

Then, 92=81 => 8+1=9

So, 9 is a neon number.

Input format :
The input consists of an integer n.

Output format :
If the number is a Neon number, output: "n is a Neon Number".

If the number is not a Neon number, output: "n is Not a Neon Number".

If the input is invalid (not a positive integer), output: "Invalid".



Refer to the sample output for the formatting specifications.

Code constraints :
N ≤ 20

Sample test cases :
Input 1 :
8
Output 1 :
8 is Not a Neon Number
Input 2 :
1
Output 2 :
1 is a Neon Number
Input 3 :
6543
Output 3 :
Invalid


Whitelist
Set 1:
virtual




#include <iostream>
using namespace std;

class NeonCheck {
public:
    NeonCheck(int n) {
        if (n <= 0 || n > 20) {
            cout << "Invalid";
            return;
        }

        int sq = n * n;
        int sum = 0;

        while (sq > 0) {
            sum += sq % 10;
            sq /= 10;
        }

        if (sum == n)
            cout << n << " is a Neon Number";
        else
            cout << n << " is Not a Neon Number";
    }

    virtual ~NeonCheck() {}
};

int main() {
    int n;
    cin >> n;
    NeonCheck obj(n);
    return 0;
}
