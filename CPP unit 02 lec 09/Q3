QUESTION PARAGRAPH (FULL & CLEAN)

Sandeep is developing a language-processing tool for a linguistics research project. The goal is to analyze consonant usage in a given text. Write a program that takes a paragraph as input and counts the number of consonants in each word of the text. You must use the pointer-to-pointer concept to analyze the text and count the consonants.

Input Format

The input consists of one single line containing a sentence or a list of words.

Output Format

Print a single integer:
the total number of consonants present in the given text.

Code Constraints

Total characters in the text ≤ 1000

Only a single output line

Extra spaces or newlines in output will fail testcases



---

✅ SAMPLE TEST CASES

Input 1

I love eating pizza and drinking soda on weekends

Output

24


---

Input 2

hello world

Output

7

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[1001];
    cin.getline(s, 1001);

    int count = 0;
    char *ptr = s;
    char **pp = &ptr;

    while (**pp != '\0') {
        char ch = **pp;

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            char lower = tolower(ch);
            if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
                count++;
            }
        }

        (*pp)++;
    }

    cout << count;
    return 0;
}
