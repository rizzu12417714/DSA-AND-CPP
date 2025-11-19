Question ParagraphSam is working on a text-processing task where he needs to replace all occurrences of a specific word in a string with another word. Given a string, a target word to be replaced, and a replacement word, Sam wants to output the modified string with all instances of the target word replaced by the replacement word. Use string objects for processing.Input format:The first line of input consists of a string representing the sentence.The second line of input consists of a string representing the word to be replaced in the sentence.The third line of input consists of a string representing the replacement word�.Output format:If the word to be replaced is present in the sentence, the output prints the modified sentence after replacing it.If the word to be replaced is not present in the sentence, the output prints the original string as such.Sample Test CasesInput 1:Hello world!
Hello
HiOutput 1:Hi world!Input 2:Always the sun the moon
the
aOutput 2:Always a sun a moonInput 3:Harry potter
Potter
harryOutput 3:Harry potter



#include <iostream>
#include <string>
using namespace std;

void replaceWord(string sentence, string target, string replacement) {
    size_t pos = 0;
    bool found = false;
    while ((pos = sentence.find(target, pos)) != string::npos) {
        sentence.replace(pos, target.length(), replacement);
        pos += replacement.length();
        found = true;
    }
    cout << sentence << endl;
}

int main() {
    string sentence, target, replacement;
    getline(cin, sentence);
    getline(cin, target);
    getline(cin, replacement);
    replaceWord(sentence, target, replacement);
    return 0;
}
