Single File Programming Question
Problem Statement



Bahim, an enthusiastic software developer, is eager to explore various programming languages and their execution environments. To facilitate his learning journey, he intends to develop a program capable of executing code snippets in different languages, such as C++, Java, and Python. Utilizing C++ templates and abstract classes, Bahim designs a flexible architecture.



His program architecture comprises a base class named ProgrammingLanguage, templated to handle different types of programs, equipped with a method executeProgram for code execution and a pure virtual function execute to be implemented by derived classes.



Bahim further extends this architecture with three derived classes: CPlusPlus for C++, Java for Java, and Python for Python. Each derived class implements the execute method to execute code snippets in a language-specific manner and outputs the result. In the main function, Bahim creates instances of these classes, prompting the user to input code snippets for each language.



The program then executes the snippets and displays the output in a language-specific format. This versatile program empowers Bahim to delve into the intricacies of different programming languages, enhancing his understanding and proficiency.

Input format :
The first line consists of a string representing the code snippet to be executed in C++.

The second line consists of a string representing the code snippet to be executed in Java.

The third line consists of a string representing the code snippet to be executed in Python.

Output format :
The first line displays "C++ program output:" followed by the output of executing the code snippet in C++.

The second line displays "Java program output:" followed by the output of executing the code snippet in Java.

The third line displays "Python program output:" followed by the output of executing the code snippet in Python.



Refer to the sample output for the formatting specifications.

Code constraints :
Each line of input contains at most 100 characters.

The programming languages supported are C++, Java, and Python.

Sample test cases :
Input 1 :
Hello, C++
Hello, Java
Hello, Python
Output 1 :
C++ program output: Hello, C++
Java program output: Hello, Java
Python program output: Hello, Python



#include <iostream>
#include <string>
using namespace std;

template <typename T>
class ProgrammingLanguage {
protected:
    T code;
public:
    ProgrammingLanguage(T c) : code(c) {}
    void executeProgram() {
        execute();
    }
    virtual void execute() = 0;
};

class CPlusPlus : public ProgrammingLanguage<string> {
public:
    CPlusPlus(string c) : ProgrammingLanguage(c) {}
    void execute() override {
        cout << "C++ program output: " << code << endl;
    }
};

class Java : public ProgrammingLanguage<string> {
public:
    Java(string c) : ProgrammingLanguage(c) {}
    void execute() override {
        cout << "Java program output: " << code << endl;
    }
};

class Python : public ProgrammingLanguage<string> {
public:
    Python(string c) : ProgrammingLanguage(c) {}
    void execute() override {
        cout << "Python program output: " << code << endl;
    }
};

int main() {
    string cppCode, javaCode, pythonCode;

    getline(cin, cppCode);
    getline(cin, javaCode);
    getline(cin, pythonCode);

    CPlusPlus cpp(cppCode);
    Java java(javaCode);
    Python python(pythonCode);

    cpp.executeProgram();
    java.executeProgram();
    python.executeProgram();

    return 0;
}
