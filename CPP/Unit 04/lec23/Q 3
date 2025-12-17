Question Paragraph

In a distant realm where time was more than just numbers, a skilled watchmaker 
named Edward created a special Time class capable of calculating the difference between 
two times using operator overloading.

The class overloads the binary subtraction (-) operator to compute the difference between
two given times. Each time consists of hours, minutes, and seconds.

The program reads two times, displays them in a fixed format, and then prints the calculated time 
difference using the overloaded operator.


---

Input Format

First line: Time 1 as three integers → hours minutes seconds

Second line: Time 2 as three integers → hours minutes seconds



---

Output Format

First line: display Time 1

Second line: display Time 2

Third line: display the time difference


All outputs must follow this exact format:

Time 1: Xh Ym Zs
Time 2: Xh Ym Zs
Time difference: Xh Ym Zs


---

Constraints

Hours ∈ [0, 23]

Minutes ∈ [0, 59]

Seconds ∈ [0, 59]

All values are non-negative integers



---

Sample Test Case 1

Input

5 33 10
2 22 25

Output

Time 1: 5h 33m 10s
Time 2: 2h 22m 25s
Time difference: 3h 10m 45s


---

Sample Test Case 2

Input

20 20 10
13 20 50

Output

Time 1: 20h 20m 10s
Time 2: 13h 20m 50s
Time difference: 6h 59m 20s





code 

#include <iostream>
using namespace std;

class Time {
    int h, m, s;
public:
    Time(int hh = 0, int mm = 0, int ss = 0) {
        h = hh;
        m = mm;
        s = ss;
    }

    Time operator-(Time t) {
        int sec1 = h * 3600 + m * 60 + s;
        int sec2 = t.h * 3600 + t.m * 60 + t.s;
        int diff = sec1 - sec2;

        if (diff < 0)
            diff = -diff;

        int hh = diff / 3600;
        diff %= 3600;
        int mm = diff / 60;
        int ss = diff % 60;

        return Time(hh, mm, ss);
    }

    void display(int id) {
        if (id == 1)
            cout << "Time 1: ";
        else
            cout << "Time 2: ";
        cout << h << "h " << m << "m " << s << "s" << endl;
    }

    void displayDiff() {
        cout << "Time difference: " << h << "h " << m << "m " << s << "s";
    }
};

int main() {
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;

    Time t1(h1, m1, s1);
    Time t2(h2, m2, s2);

    Time diff = t1 - t2;

    t1.display(1);
    t2.display(2);
    diff.displayDiff();

    return 0;
}
