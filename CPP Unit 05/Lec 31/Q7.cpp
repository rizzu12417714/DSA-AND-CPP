Single File Programming Question
Problem Statement



Nila is tasked with developing a program to determine if a given string is a palindrome and display its reversed version. A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward (ignoring spaces, punctuation, and capitalization).



The program should finally display the result, indicate whether the input string is a palindrome, and print the reversed version of the input string.



Your task is to implement the isPalindrome and reverseString functions as provided in the given code and design the main function to fulfill the requirements of the palindrome-checking program. Properly manage memory allocation and deallocation to avoid memory leaks and ensure that the program handles strings of various lengths correctly.

Input format :
The input consists of a string.

Output format :
The output displays whether the input string is a palindrome or not.

If the input string is a palindrome, the program should display the message: "The input string is a palindrome."

If the input string is not a palindrome, the program should display the message: "The input string is not a palindrome."

The program should also display the reversed version of the input string on a separate line, preceded by the message: "Reversed string: [Reversed String]"



Refer to the sample output for the formatting specifications.

Code constraints :
The input string should be up to 100 characters long, including spaces and other special characters.

The input string may contain uppercase and lowercase letters, spaces, punctuation, and numbers.

Sample test cases :
Input 1 :
radar
Output 1 :
The input string is a palindrome.
Reversed string: radar
Input 2 :
12321
Output 2 :
The input string is a palindrome.
Reversed string: 12321
Input 3 :
Testing 1 2 3 testing
Output 3 :
The input string is not a palindrome.
Reversed string: gnitset 3 2 1 gnitseT

image
Whitelist
Set 1:
new
delete



#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

char* reverseString(const char* str) {
    int len = strlen(str);
    char* rev = new char[len + 1];
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    return rev;
}

bool isPalindrome(const char* str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        while (left < right && !isalnum(str[left])) left++;
        while (left < right && !isalnum(str[right])) right--;

        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    char input[101];
    cin.getline(input, 101);

    if (isPalindrome(input)) {
        cout << "The input string is a palindrome." << endl;
    } else {
        cout << "The input string is not a palindrome." << endl;
    }

    char* reversed = reverseString(input);
    cout << "Reversed string: " << reversed;

    delete[] reversed;
    return 0;
}
