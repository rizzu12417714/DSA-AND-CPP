Single File Programming Question
Problem Statement



Alice is developing a simple number conversion tool that converts decimal numbers to their octal representation. She decides to implement this functionality using an abstract base class BaseConverter that declares a pure virtual function convert.



She then creates a concrete class DecimalToOctalConverter that overrides this function to provide the logic for converting decimal numbers to octal. The program uses late binding to call the conversion method, allowing Alice to extend her tool with additional number conversion methods in the future.

Input format :
The input represents a single integer n representing the decimal number to be converted.

Output format :
The output displays a single integer representing the octal equivalent of the given decimal number.



Refer to the sample output for formatting specifications.

Code constraints :
0 ≤ n ≤ 1000

Sample test cases :
Input 1 :
42
Output 1 :
52
Input 2 :
0
Output 2 :
0




#include <iostream>
using namespace std;

class BaseConverter {
public:
    virtual void convert(int n) = 0;
    virtual ~BaseConverter() {}
};

class DecimalToOctalConverter : public BaseConverter {
public:
    void convert(int n) {
        if (n == 0) {
            cout << 0;
            return;
        }

        int octal[20];
        int index = 0;

        while (n > 0) {
            octal[index++] = n % 8;
            n /= 8;
        }

        for (int i = index - 1; i >= 0; i--) {
            cout << octal[i];
        }
    }
};

int main() {
    int n;
    cin >> n;

    BaseConverter* converter = new DecimalToOctalConverter();
    converter->convert(n);

    delete converter;
    return 0;
}
