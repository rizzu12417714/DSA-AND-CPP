Single File Programming Question
Problem Statement



Sita, a developer, needs to find the index of the first unique character in a given string. She is implementing a function to efficiently check for the first character that does not repeat. Help her implement this task.

Input format :
The first line of input consists of a string s, representing the input string.

Output format :
The first line of output prints: "First unique character index: " followed by the index of the first unique character. If no unique character exists, print -1.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

The length of the string is between 1 and 1000 characters.
The string consists of lowercase English letters only.
MAX_CHAR = 256
Sample test cases :
Input 1 :
leetcode
Output 1 :
First unique character index: 0
Input 2 :
aabbccddzz
Output 2 :
-1



#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> freq(256, 0);
    for (char c : s) {
        freq[c]++;
    }

    int index = -1;
    for (int i = 0; i < s.length(); i++) {
        if (freq[s[i]] == 1) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << -1;
    } else {
        cout << "First unique character index: " << index;
    }

    return 0;
}
