Question Paragraph

Elsa is working on a program that manipulates custom string objects. 
She wants to concatenate two strings, print the result, and repeat each string a 
specified number of times.

To achieve this, she designs a class that supports:

String concatenation using the + operator

String repetition using the * operator


The program reads two strings and an integer value indicating the number of
repetitions, then displays the concatenated string followed by the repeated
versions of each string.


---

Input Format

1. First line: a string representing str1


2. Second line: a string representing str2


3. Third line: an integer n representing the number of repetitions




---

Output Format

1. First line: concatenation of str1 and str2


2. Second line: str1 repeated n times


3. Third line: str2 repeated n times

Constraints

Maximum length of each string: 100 characters

1 ≤ n ≤ 10
Sample Test Case 1
Input
Hello
helllooo
5
Output
Hellohelllooo
HelloHelloHelloHelloHello
helllooohelllooohelllooohelllooohelllooo
Sample Test Case 2
Input
Today
Today
5
Output
TodayToday
TodayTodayTodayTodayToday
TodayTodayTodayTodayToday




Code 

#include <iostream>
#include <cstring>
using namespace std;

class CustomString {
    char str[1001];
public:
    CustomString() {
        str[0] = '\0';
    }

    CustomString(char s[]) {
        strcpy(str, s);
    }

    CustomString operator+(CustomString s) {
        CustomString temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    CustomString operator*(int n) {
        CustomString temp;
        for (int i = 0; i < n; i++)
            strcat(temp.str, str);
        return temp;
    }

    void display() {
        cout << str;
    }
};

int main() {
    char s1[101], s2[101];
    int n;

    cin.getline(s1, 101);
    cin.getline(s2, 101);
    cin >> n;

    CustomString str1(s1), str2(s2);

    (str1 + str2).display();
    cout << endl;

    (str1 * n).display();
    cout << endl;

    (str2 * n).display();

    return 0;
}
