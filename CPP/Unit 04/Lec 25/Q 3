Problem Statement

Tom is developing a program that performs time conversion. 
He needs to write a program that converts the given hours and minutes into total minutes.
To achieve this, utilize class type to basic type conversion. The program should take the input
values, convert them using a class, and display the total number of minutes after conversion.


---

Input Format

The input consists of two space-separated integers, hours and minutes respectively.


---

Output Format

The output prints an integer representing the total number of minutes after conversion 
in the format:

<total mins> mins


---

Code Constraints

0 ≤ hours ≤ 23

0 ≤ minutes ≤ 59



---

Sample Test Cases

Input 1

1 2

Output 1

62 mins


---

Input 2

2 15

Output 2

135 mins


Code 




#include <iostream>
using namespace std;

class Time {
    int hours;
    int minutes;
public:
    Time(int h, int m) {
        hours = h;
        minutes = m;
    }
    operator int() {
        return hours * 60 + minutes;
    }
};

int main() {
    int h, m;
    cin >> h >> m;
    Time t(h, m);
    int total = t;
    cout << total << " mins";
    return 0;
}
