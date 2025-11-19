Question ParagraphAnkita is working on a project to analyze patterns in text data. As part of her assignment, she needs to identify whether a given string is a palindrome—a string that reads the same forwards and backwards.To automate this, she decides to write a program that checks if an input string is a palindrome using string objects. The program must also display the reversed version of the string and a message indicating whether it is a palindrome or not.Your task is to help Ankita implement this functionality by creating a function named isPalindrome�.Input format:The input consists of a string representing the text data.Output format:The first line of output prints:
"Reversed String: <reversed_string>"The second line of output prints:"The string is a palindrome" if the string is a palindrome"The string is not a palindrome" if it is notSample Test CasesInput 1:madamOutput 1:Reversed String: madam
The string is a palindromeInput 2:123@321Output 2:Reversed String: 123@321
The string is a palindromeInput 3:HighlevelOutput 3:Reversed String: levelhgiH
The string is not a palindrome




#include <iostream>
#include <string>
using namespace std;

void isPalindrome(string str) {
    string rev = string(str.rbegin(), str.rend());
    cout << "Reversed String: " << rev << endl;
    if(str == rev)
        cout << "The string is a palindrome" << endl;
    else
        cout << "The string is not a palindrome" << endl;
}

int main() {
    string str;
    cin >> str;
    isPalindrome(str);
    return 0;
}
