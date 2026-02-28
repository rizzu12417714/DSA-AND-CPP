Single File Programming Question
Problem Statement



Suppose you are developing a program that takes input from users to determine the sentiment of their feedback. The program requires users to enter a numeric value representing their sentiment. The program uses exceptional handling to categorize the sentiment into three categories: positive, negative, or neutral.



Write a program to find whether the given number is Positive, Negative, or zero using the exceptional handling technique. Pass different parameters for different catch methods.



Note: This question helps in clearing TCS tests.

Input format :
The input consists of an integer.

Output format :
If the given integer is a positive integer, the output prints "You Entered Positive number".

If the given integer is a negative integer, the output prints "You Entered Negative number".

If the given integer is zero, the output prints "You Entered Zero".



Refer to the sample output for the formatting specifications.

Sample test cases :
Input 1 :
12
Output 1 :
You Entered Positive number
Input 2 :
-20
Output 2 :
You Entered Negative Number
Input 3 :
0
Output 3 :
You Entered Zero

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    try {
        if (n > 0) {
            throw 1;
        } else if (n < 0) {
            throw -1;
        } else {
            throw 0;
        }
    }
    catch (int x) {
        if (x > 0) {
            cout << "You Entered Positive number";
        } else if (x < 0) {
            cout << "You Entered Negative Number";
        } else {
            cout << "You Entered Zero";
        }
    }

    return 0;
}
