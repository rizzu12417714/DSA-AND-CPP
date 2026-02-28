Question Paragraph

Meetha is developing a program to analyze a numerical dataset and calculate
its standard deviation. She designs a Statistics class that can 
handle both basic data types and class-based processing.

The program allows the user to input the dataset size and values,
computes the mean, applies the standard deviation formula, and displays the result 
rounded to two decimal places.

The calculation follows the standard statistical formula to ensure accurate analysis.


---

Formula Used

\sigma = \sqrt{\frac{\sum_{i=1}^{n}(x_i - \bar{x})^2}{n}}

Where:

 is each value in the dataset

 is the mean

 is the number of elements



---

Input Format

1. First line: integer n — size of the dataset


2. Second line: n integers — dataset values




---

Output Format

A double value representing the standard deviation

Rounded to two decimal places



---

Constraints

1 ≤ n ≤ 20

−1000 ≤ values ≤ 1000



---

Sample Test Case 1

Input

5
10 20 30 40 50

Output

14.14


---

Sample Test Case 2

Input

4
-5 0 5 10

Output

5.59


---

Sample Test Case 3

Input

7
2 4 6 8 10 12 14

Output

4.00




Code




#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Statistics {
    int n;
    double data[20];
public:
    void read() {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> data[i];
    }

    double mean() {
        double sum = 0;
        for (int i = 0; i < n; i++)
            sum += data[i];
        return sum / n;
    }

    double standardDeviation() {
        double m = mean();
        double sum = 0;
        for (int i = 0; i < n; i++)
            sum += (data[i] - m) * (data[i] - m);
        return sqrt(sum / n);
    }
};

int main() {
    Statistics s;
    s.read();
    cout << fixed << setprecision(2) << s.standardDeviation();
    return 0;
}
