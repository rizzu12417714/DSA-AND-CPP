Problem Statement

Naveen is working on a calendar application. He wants to 
write a program that converts a given date from the MM/DD/YYYY format to the DD-MM-YYYY format using 
basic to class type conversion. To achieve this, he needs to implement a class named DateFormatConverter that handles 
the conversion process. The program should prompt the user to enter a date as three separate integers representing the month, day,
and year. After reading the input, the program should convert the date into the required format and display
the converted date in DD-MM-YYYY format.
Problem Summary (What is required)

Convert a date from MM DD YYYY to DD-MM-YYYY

Use basic to class type conversion

Implement a DateFormatConverter class

Input: 3 space-separated integers → month, date, year

Output must exactly match the given format



---

Input Format

month date year


---

Output Format (VERY IMPORTANT)

Date in DD-MM-YYYY format: DD-MM-YYYY


---

Sample

Input 1

11 25 2000

Output 1

Date in DD-MM-YYYY format: 25-11-2000
Input 1
1 31 1996
Output 2
Date in DD-MM-YYYY format:1 31 1996




Code


#include <iostream>
using namespace std;

class DateFormatConverter {
    int day, month, year;
public:
    DateFormatConverter(int m, int d, int y) {
        month = m;
        day = d;
        year = y;
    }

    void display() {
        cout << "Date in DD-MM-YYYY format: ";
        cout << day << "-" << month << "-" << year;
    }
};

int main() {
    int month, day, year;
    cin >> month >> day >> year;

    DateFormatConverter date(month, day, year);
    date.display();

    return 0;
}
