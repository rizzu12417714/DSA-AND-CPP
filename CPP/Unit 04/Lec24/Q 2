Question Paragraph

Reshma needs to analyze the frequency of words in a sentence. She designs two classes:

Word to store a word and its count

WordCounter to process a sentence and manage word frequencies


The WordCounter class uses a constructor that accepts a sentence string,
demonstrating basic-to-class type conversion. The program converts
the input sentence into a WordCounter object, counts the total number of unique words,
and displays the frequency of each word in the order of their first appearance.

If a word appears multiple times, it is counted once in the total word count,
but its frequency reflects the number of occurrences.


---

Input Format

A single line containing a sentence

Words are separated by spaces



---

Output Format

1. First line:

Total words: <count>


2. Second line:

Word Counts:


3. Following lines:

word: frequency



Words must be displayed in the order they first appear in the sentence.


---

Sample Test Case

Input

Either me or you going to school because we are going to a movie.

Output

Total words: 12
Word Counts:
Either: 1
me: 1
or: 1
you: 1
going: 2
to: 2
school: 1
because: 1
we: 1
are: 1
a: 1
movie.: 1



Code 




#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Word {
public:
    string text;
    int count;
};

class WordCounter {
    Word words[100];
    int size;
public:
    WordCounter(string sentence) {
        size = 0;
        string w;
        stringstream ss(sentence);
        while (ss >> w) {
            bool found = false;
            for (int i = 0; i < size; i++) {
                if (words[i].text == w) {
                    words[i].count++;
                    found = true;
                    break;
                }
            }
            if (!found) {
                words[size].text = w;
                words[size].count = 1;
                size++;
            }
        }
    }

    void display() {
        cout << "Total words: " << size << endl;
        cout << "Word Counts:" << endl;
        for (int i = 0; i < size; i++)
            cout << words[i].text << ": " << words[i].count << endl;
    }
};

int main() {
    string sentence;
    getline(cin, sentence);
    WordCounter wc(sentence);
    wc.display();
    return 0;
}
