Question Paragraph

You are developing a text processing application that requires removing duplicate characters 
from a given string. Your task is to write a program that takes a 
string as input and removes all duplicate characters from it.After removing the duplicate characters, 
the program should print the modified string. Write a program to implement this functionality using modifiers of string class�.
Input format:
The input consists of a string str.
Output format:
The output prints a string representing the updated string after removing the duplicates.
Sample Test Cases
Input 1:
ABABCDE
Output 1:
ABCDE
Input 2:123412qq
Output 2:1234Qq
Input 3:LAZY
Output 3:LAZY

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    string res;
    for (int i = 0; i < str.length(); ++i) {
        if (res.find(str[i]) == string::npos) {
            res.append(1, str[i]);
        }
    }
    cout << res << endl;
    return 0;
}
