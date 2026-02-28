Question Paragraph
You have been tasked with creating a program that calculates the average word length in a given sentence.
Write a function calculateAverageWordLength that takes a sentence (string) as input and returns the average length of the words in the sentence.
The average word length is calculated by dividing the total number of characters in all words by the number of words in the sentence.
Input format:
The input consists of a sentence as space-separated strings�.
Output format:
The program outputs the average 
length of the words in the sentence as a double value rounded off to three decimal places.
Sample Test Cases
Input 1:
The quick brown fox jumps over the lazy dog
Output 1:
3.889
Input 2:
The future is gonna be okay
Output 2:
3.667
Input 3:
AB CDEF
Output 3:
3.000


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);
    int word_count = 0, char_count = 0;
    string word;
    for (int i = 0; i < sentence.length(); ++i) {
        if (sentence[i] != ' ') {
            word.push_back(sentence[i]);
        } else {
            if (word.length() > 0) {
                char_count += word.length();
                word_count++;
                word.clear();
            }
        }
    }
    if (word.length() > 0) {
        char_count += word.length();
        word_count++;
    }
    double avg = (word_count == 0) ? 0.0 : (double) char_count / word_count;
    cout << fixed << setprecision(3) << avg << endl;
    return 0;
}
