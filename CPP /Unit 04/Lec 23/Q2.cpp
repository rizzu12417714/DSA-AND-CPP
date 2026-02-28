Question Paragraph

You are given a class named Arithmetic that represents complex numbers.
The class contains two private data members representing the real 
and imaginary parts of a complex number.

Your task is to:

Overload the binary addition (+) operator to add two complex numbers.

Overload the binary subtraction (-) operator to subtract two complex numbers.


The program reads two complex numbers, performs addition and subtraction 
using operator overloading, and displays the results rounded to two decimal places.


---

Input Format

First line: two space-separated float values representing the real and imaginary
parts of the first complex number

Second line: two space-separated float values representing the real and imaginary 
parts of the second complex number



---

Output Format

First line: result of addition of the two complex numbers

Second line: result of subtraction of the two complex numbers


Each output must be rounded to 2 decimal places and displayed in the format:

a.bc + d.efi
a.bc - d.efi


---

Constraints

−10⁵ < real, imaginary values < 10⁵



---

Sample Test Case 1

Input

4.5 7.8
1.2 3.1

Output

5.70 + 10.90i
3.30 + 4.70i


---

Sample Test Case 2

Input

-4.9 -8.5
5.3 -5.5

Output

0.40 - 14.00i
-10.20 - 3.00i




Code 


#include <iostream>
#include <iomanip>
using namespace std;

class Arithmetic {
    float real, imag;
public:
    Arithmetic(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    Arithmetic operator+(Arithmetic a) {
        return Arithmetic(real + a.real, imag + a.imag);
    }

    Arithmetic operator-(Arithmetic a) {
        return Arithmetic(real - a.real, imag - a.imag);
    }

    void display() {
        cout << fixed << setprecision(2) << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
    }
};

int main() {
    float r1, i1, r2, i2;
    cin >> r1 >> i1;
    cin >> r2 >> i2;

    Arithmetic c1(r1, i1), c2(r2, i2);

    Arithmetic add = c1 + c2;
    Arithmetic sub = c1 - c2;

    add.display();
    cout << endl;
    sub.display();

    return 0;
}
