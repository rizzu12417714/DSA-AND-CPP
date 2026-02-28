Single File Programming Question
Problem Statement



Meet David, a computer science student working on a project requiring converting decimal numbers to binary. To simplify his task, David created a class called DecimalToBinaryConverter.



This class contains a method named convert that takes a decimal integer as input and prints its binary representation. David focuses on using early binding for method calls to ensure optimal performance.

Input format :
The input consists of a single integer, n representing the decimal number to be converted.

Output format :
The output should be the binary representation of the input decimal number, printed on a single line.

If the input is 0, the output should be 0.



Refer to the sample output for the formatting specifications.

Code constraints :
0 ≤ n ≤ 109

Sample test cases :
Input 1 :
12
Output 1 :
1100
Input 2 :
1485
Output 2 :
10111001101
Input 3 :
0
Output 3 :
0




#include <iostream>
using namespace std;

class DecimalToBinaryConverter {
public:
    void convert(long long n) {
        if (n == 0) {
            cout << 0;
            return;
        }

        long long binary[64];
        int index = 0;

        while (n > 0) {
            binary[index++] = n % 2;
            n /= 2;
        }

        for (int i = index - 1; i >= 0; i--) {
            cout << binary[i];
        }
    }
};

int main() {
    long long n;
    cin >> n;

    DecimalToBinaryConverter obj;
    obj.convert(n);

    return 0;
}
