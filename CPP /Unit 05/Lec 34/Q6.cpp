Single File Programming Question
Problem statement



Karthick is developing a search engine system that allows users to find a substring in a given text document. Users will input the main text and the substring they want to search for.



His task is to implement a program that uses operator overloading (/) to find if the provided substring is present in the given text. Write a program to accomplish this task.

Input format :
The first line contains a string str1, representing the main string.

The second line contains a string str2, representing the substring to search for.

Output format :
The output prints "Substring is present" if str2 is a substring of str1.

The output prints "Substring is not present" if str2 is not a substring of str1.



Refer to the sample output for the formatting specifications.

Code constraints :
The length of each string should not exceed 30 characters.

Sample test cases :
Input 1 :
Programming
gram
Output 1 :
Substring is present
Input 2 :
Television
live
Output 2 :
Substring is not present


Whitelist
Set 1:
class



#include <iostream>
#include <string>
using namespace std;

class Text {
    string str;
public:
    Text(string s) {
        str = s;
    }

    bool operator/(Text &sub) {
        if (str.find(sub.str) != string::npos)
            return true;
        return false;
    }
};

int main() {
    string s1, s2;
    cin >> s1;
    cin >> s2;

    Text mainStr(s1);
    Text subStr(s2);

    if (mainStr / subStr)
        cout << "Substring is present";
    else
        cout << "Substring is not present";

    return 0;
}
