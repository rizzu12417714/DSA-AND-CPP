Paragraph
Ragavi works in a city library where different items have different fine rules for late returns. To implement this system efficiently, a base class Library is created with a pure virtual function getFine(). Two derived classes, Book and Magazine, override this function to calculate the fine based on the number of days an item has been held. Books have a grace period of 5 days and incur a fine of ₹2 per day after that, while magazines have a grace period of 2 days and incur a fine of ₹1 per day after that. Using runtime polymorphism, the program calculates and displays the fine based on the item type and number of days.
Input Format
The first line contains an integer representing the item type
1 → Book
2 → Magazine
The second line contains an integer representing the number of days the item has been held
Output Format
The output prints
Copy code

Fine: <calculated fine>
Sample Test Cases
Sample Input 1
Copy code

1
3
Sample Output 1
Copy code

Fine: 0
Sample Input 2
Copy code

1
6
Sample Output 2
Copy code

Fine: 2
Sample Input 3
Copy code

2
4
Sample Output 3
Copy code

Fine: 2
Full C++ Code (Without Comments, Using virtual)
Copy code
Cpp
#include <iostream>
using namespace std;

class Library {
public:
    virtual int getFine(int days) = 0;
    virtual ~Library() {}
};

class Book : public Library {
public:
    int getFine(int days) {
        if (days <= 5)
            return 0;
        return (days - 5) * 2;
    }
};

class Magazine : public Library {
public:
    int getFine(int days) {
        if (days <= 2)
            return 0;
        return (days - 2) * 1;
    }
};

int main() {
    int type, days;
    cin >> type;
    cin >> days;

    Library* item;

    if (type == 1)
        item = new Book();
    else
        item = new Magazine();

    cout << "Fine: " << item->getFine(days);

    delete item;
    return 0;
}
