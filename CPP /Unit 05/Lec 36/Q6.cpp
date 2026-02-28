Single File Programming Question
Problem Statement



Alex, an avid reader, has just finished a captivating book and wants to keep a record of its essential details, including the title, author, and year of publication.



To achieve this, he decides to develop a program utilizing a Book class that employs a dynamic constructor for memory allocation of the book's attributes.



This program will enable him to easily update the year of publication when necessary. The class features several functions: a constructor to initialize the book's details, a setYear(int newYear) method to modify the publication year, a getYear() method to retrieve it, and a displayDetails() method to showcase the book's information effectively.

Input format :
The first line contains the title of the book as a string.

The second line contains the author's name as a string.

The third line contains the year of publication as an integer.

The fourth line contains the updated year of publication as an integer.

Output format :
The output displays the book details in the following format:



The title of the book.
The author's name.
The original year of publication.
The updated year of publication.


Refer to the sample output for the formatting specifications.

Code constraints :
The title and author's name should be at most 100 characters each.

0000 ≤ The year of publication ≤ 2999

Sample test cases :
Input 1 :
Harry Potter and the Chamber of Secrets
J K Rowling
1997
1998
Output 1 :
Title: Harry Potter and the Chamber of Secrets
Author: J K Rowling
Year of Publication: 1997
Updated Year of Publication: 1998

#include <iostream>
#include <string>
using namespace std;

class Book {
    string *title;
    string *author;
    int *year;
    int *originalYear;

public:
    Book(string t, string a, int y) {
        title = new string(t);
        author = new string(a);
        year = new int(y);
        originalYear = new int(y);
    }

    void setYear(int newYear) {
        *year = newYear;
    }

    void displayDetails() {
        cout << "Title: " << *title << endl;
        cout << "Author: " << *author << endl;
        cout << "Year of Publication: " << *originalYear << endl;
        cout << "Updated Year of Publication: " << *year;
    }

    ~Book() {
        delete title;
        delete author;
        delete year;
        delete originalYear;
    }
};

int main() {
    string title, author;
    int year, updatedYear;

    getline(cin, title);
    getline(cin, author);
    cin >> year;
    cin >> updatedYear;

    Book book(title, author, year);
    book.setYear(updatedYear);
    book.displayDetails();

    return 0;
}
