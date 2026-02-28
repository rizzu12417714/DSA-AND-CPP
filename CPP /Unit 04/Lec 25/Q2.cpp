Problem Statement

Mary is tasked with creating a DistConv class for a travel agency. 
This class should handle seamless conversions between kilometers and miles. 
She needs to implement two constructors: one that converts user input in miles to kilometers and meters, 
and another that accepts kilometers and meters directly. Additionally, overload the type
conversion operator to convert instances of the DistConv class to a double value 
representing miles.

In the main function, create two DistConv instances. First, get user input in miles, 
convert it to kilometers and meters, and display the result. Then, read 
user input for kilometers and meters to initialize the second instance. Lastly, 
convert the values in the second instance to miles with two decimal places of
precision and print the result.


---

Note

1 Mile = 1.609344 kilometers


---

Input Format

The first line consists of an integer representing the distance in miles for the first conversion.

The second line consists of an integer representing kilometers and a double representing meters for the second conversion.



---

Output Format

The first line displays the converted kilometers and meters from the miles input in the format:

X kilometers and Y.YY meters

The second line displays the converted miles from the kilometers and meters input, 
rounded to two decimal places, in the format:

Z.ZZ miles



---

Code Constraints

1 ≤ miles ≤ 100

1 ≤ kilometers ≤ 100

1.0 ≤ meters < 1000.0



---

Sample Test Case

Input 1

6
5 34.6

Output 1

9 kilometers and 656.06 meters
3.13 miles



Code 



#include <iostream>
#include <iomanip>
using namespace std;

class DistConv {
    int km;
    double m;
public:
    DistConv(int miles) {
        double totalKm = miles * 1.609344;
        km = (int)totalKm;
        m = (totalKm - km) * 1000;
    }

    DistConv(int k, double meters) {
        km = k;
        m = meters;
    }

    operator double() {
        double totalKm = km + m / 1000;
        return totalKm / 1.609344;
    }

    void displayKmM() {
        cout << km << " kilometers and " << fixed << setprecision(2) << m << " meters" << endl;
    }
};

int main() {
    int miles;
    cin >> miles;
    DistConv d1(miles);
    d1.displayKmM();

    int k;
    double meters;
    cin >> k >> meters;
    DistConv d2(k, meters);

    double milesValue = d2;
    cout << fixed << setprecision(2) << milesValue << " miles";
    return 0;
}
