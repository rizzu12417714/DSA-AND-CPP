Single File Programming Question
Problem Statement﻿



Ram, a student studying mathematics, is developing a simple calculator program. He sometimes needs to add two numbers, and at other times, he needs to multiply three numbers, depending on the task he is working on.



His task is to Create a class with two overloaded functions to handle addition and multiplication operations based on the number of input arguments. Write a program using function overloading to accomplish this task.



Function Prototype

fun1(int num1, int num2, int num3)

fun1(int num1, int num2)

Input format :
The input consists of the number of elements N followed by the N elements separated by space.

Output format :
The output displays the sum if there are two integers or the product if there are three integers.

If the number of elements is other than 2 or 3, then display the message as invalid input.



Refer to the sample output for the formatting specifications.

Code constraints :
2 ≤ N ≤ 3

1 ≤ elements ≤ 100

Sample test cases :
Input 1 :
3 1 2 3
Output 1 :
6
Input 2 :
2 14 56
Output 2 :
70
Input 3 :
4 67 89 43 21
Output 3 :
Invalid Input



#include <iostream>
using namespace std;

class Calculator {
public:
    int fun1(int num1, int num2) {
        return num1 + num2;
    }

    int fun1(int num1, int num2, int num3) {
        return num1 * num2 * num3;
    }
};

int main() {
    int N;
    cin >> N;

    Calculator calc;

    if (N == 2) {
        int a, b;
        cin >> a >> b;
        cout << calc.fun1(a, b);
    } 
    else if (N == 3) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << calc.fun1(a, b, c);
    } 
    else {
        cout << "Invalid Input";
    }

    return 0;
}
