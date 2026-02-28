Single File Programming Question
Problem Statement



Raju is developing a program for a language translation app. Users can input a sentence in English, and your program will dynamically allocate memory to create a reversed version of the sentence in English. The reversed sentence will be displayed as the user's translation.



Write a program that takes a string as input and dynamically allocates memory to create a reversed version of the string. The program should implement a function called reverseString that accepts the input string, dynamically allocates memory for the reversed string, and returns a pointer to the reversed string. Finally, print the reversed version of that given sentence.



Company Tag: Amcat

Input format :
The input contains a single line of text containing a sentence in English. The sentence can contain alphanumeric characters, punctuation, and spaces.

Output format :
The output displays the reversed version of the sentence in English in the following format: "Reversed String: [reversed string]".



Refer to the sample output for the formatting specifications.

Code constraints :
The length of the input sentence will not exceed 1000 characters.

The sentence can contain any printable ASCII characters, including spaces, punctuation, and digits.

The dynamic memory allocation should be used to create the reversed string.

Sample test cases :
Input 1 :
Hello 9876543210, how are you today ?
Output 1 :
Reversed string: ? yadot uoy era woh ,0123456789 olleH
Input 2 :
A man, a plan, a canal, Panama! Was it a car or a cat I saw? Madam, in Eden, I'm Adam!
Output 2 :
Reversed string: !madA m'I ,nedE ni ,madaM ?was I tac a ro rac a ti saW !amanaP ,lanac a ,nalp a ,nam A

Whitelist
Set 1:
new
delete




#include <iostream>
#include <cstring>
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

int main() {
    char input[1001];
    cin.getline(input, 1001);

    char* reversed = reverseString(input);

    cout << "Reversed string: " << reversed;

    delete[] reversed;
    return 0;
}
