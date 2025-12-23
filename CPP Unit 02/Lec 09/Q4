QUESTION PARAGRAPH (Complete & Clean)

Saru is analyzing product data and needs to count the number of vowels in a string of characters provided by the user.
Your task is to write a program that counts the number of vowels in the input string using the pointer–pointer concept.

Input Format

The input consists of characters entered one by one, separated by spaces.

The input sequence terminates when -1 is entered.


Output Format

Print a single integer:

The total number of vowels in the entered characters.


Constraints

Maximum length ≤ 1000 characters

Input may contain spaces and lowercase letters

Termination sequence is -1



---

✅ SAMPLE TEST CASES

Input 1

a b c d e f g h i j -1

Output

3


---

Input 2

v h l -1

Output
0

#include <iostream>
#include <cctype>
using namespace std;

int isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int countVowels(char* s) {
    int count = 0;
    char* p = s;

    while (*p != '\0') {
        if (isVowel(*p)) count++;
        p++;
    }
    return count;
}

int main() {
    char str[1000];
    char* ptr = str;
    char inputChar;

    while (true) {
        cin >> inputChar;

        if (inputChar == '-') {
            char nextChar;
            cin >> nextChar;
            if (nextChar == '1') {
                break;
            } else {
                *ptr++ = inputChar;
                *ptr++ = nextChar;
            }
        } else {
            *ptr++ = inputChar;
        }
    }

    *ptr = '\0';

    int vowelCount = countVowels(str);
    cout << vowelCount;

    return 0;
}


