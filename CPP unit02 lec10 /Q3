QUESTION PARAGRAPH (FULL & CLEAN)

You are tasked with creating a program to manage birthday dates.
You need to implement a class called Date, which represents a date with day, month, and year components.

Additionally, you must use a pointer to an object to perform date operations.


---

✅ INPUT FORMAT

The first line contains an integer representing the day.

The second line contains an integer representing the month.

The third line contains an integer representing the year.



---

✅ OUTPUT FORMAT

The program should display the collected birthday data in the format:

The date is day/month/year

(No extra spaces, no extra lines.)


---

✅ CODE CONSTRAINTS

1 ≤ Day ≤ 31

1 ≤ Month ≤ 12

1500 ≤ Year ≤ 2040



---

✅ SAMPLE TEST CASES

Input 1

13
10
2000

Output 1

The date is 13/10/2000


---

Input 2

21
5
1998

Output 2

The date is 21/5/1998


---

Input 3

8
6
2000

Output 3

The date is 8/6/2000

#include <iostream>
using namespace std;

class Date {
    int day, month, year;

public:
    void setData(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void printData() {
        cout << "The date is " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date D1, *dptr;
    dptr = &D1;

    int d, m, y;
    cin >> d >> m >> y;

    dptr->setData(d, m, y);
    D1.printData();

    return 0;
}





