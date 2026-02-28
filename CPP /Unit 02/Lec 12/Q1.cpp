Question ParagraphYou are tasked with developing a simple book cataloging program. 
The program allows the user to enter details of multiple books, such as title, author,
and publication year. The program then displays the entered book information.Develop a book
cataloging program that allows the user to enter the details of multiple books and displays 
the entered book information. Create a class called Book that stores all the attributes and
also uses an array of objects to solve the problem�.
Input format:
The first line of input consists of an integer n, representing the total number
of books.For each book, the input consists of the following inputs in separate lines:Title of the book (a string)Author 
of the book (a string)Publication year of the book (an integer)
Output format:
The first line of output prints "Book Information:"For each book,
the following four lines are printed:"Book i:" where i represents the book number (starting from 1)"Title: ""Author: ""Publication Year: "Sample Test CaseInput 1:2
India
Gandhi
1947
Tiger
Haritha
2005Output 1:Book Information:
Book 1:
Title: India
Author: Gandhi
Publication Year: 1947
Book 2:
Title: Tiger
Author: Haritha
Publication Year: 2005Input 2:2
Harry Potter and the Chamber of Secrets
J.K. Rowling
1998
Harry Potter and the Prisoner of Azkaban
J.K. Rowling
1999Output 2:Book Information:
Book 1:
Title: Harry Potter and the Chamber of Secrets
Author: J.K. Rowling
Publication Year: 1998
Book 2:
Title: Harry Potter and the Prisoner of Azkaban
Author: J.K. Rowling
Publication Year: 1999


#include <iostream>
#include <vector>
using namespace std;

class Book {
public:
    string title;
    string author;
    int year;
};

int main() {
    int n;
    cin >> n;
    vector<Book> books(n);
    for(int i = 0; i < n; ++i) {
        cin.ignore();
        getline(cin, books[i].title);
        getline(cin, books[i].author);
        cin >> books[i].year;
    }
    cout << "Book Information:
";
    for(int i = 0; i < n; ++i) {
        cout << "Book " << i + 1 << ":
";
        cout << "Title: " << books[i].title << "
";
        cout << "Author: " << books[i].author << "
";
        cout << "Publication Year: " << books[i].year << "
";
    }
    return 0;
}









