Single File Programming Question
Problem Statement



Suppose you are developing a simple calculator program that takes two integers as input (num & den) and calculates their division. The program uses exception handling to handle the case when the denominator (den) is zero, preventing division by zero errors. You have been asked to create a calculator program to ensure its correctness and robustness.

Input format :
The input consists of two integers, representing num and den separated by a space.

Output format :
The output prints the division of the two numbers.

The output prints the error message if the second number(den) is zero.



Refer to the sample output for the formatting specifications.

Sample test cases :
Input 1 :
11 2
Output 1 :
5
Input 2 :
12 0
Output 2 :
Divide by Zero Exception




#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int num, den;
    cin >> num >> den;

    try {
        if (den == 0) {
            throw runtime_error("Divide by Zero Exception");
        }
        cout << num / den;
    }
    catch (runtime_error& e) {
        cout << e.what();
    }

    return 0;
}
