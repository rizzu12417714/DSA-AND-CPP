Question ParagraphJaanu wants to perform operations on a string. 
She wants to append the given character to the end of the string and remove the 
last character from the string. Jaanu needs your help to write a program that performs
these operations on the given string.Write a program that takes a string and a 
character as inputs and performs the mentioned operations with help of modifiers of
string class�.
Input format:
The first line of input consists of a string, str.The second line of input consists of a 
character, ch.
Output format:
The first line of output prints the string with the single 
character ch appended at the end.The second line prints a string representing the original
string after the appended character has been removed.
Sample Test Cases
Input 1:
Hello
XOutput 1:
HelloX
HelloInput 2:ABCD!
@Output 2:ABCD!@
ABCD!

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;
    getline(cin, str);
    cin >> ch;
    str.push_back(ch);
    cout << str << endl;
    str.pop_back();
    cout << str << endl;
    return 0;
}

