Single File Programming Question
Problem Statement



Emily is an ice cream shop owner who wants to calculate the volume of different ice cream shapes to manage her inventory better. She decides to create a class hierarchy to represent various ice cream shapes, where the base class is Icecream.



This class has a pure virtual function named Quantity, which will be overridden in derived classes to compute the volume of the respective shapes. Emily uses late binding to ensure that the correct method is called at runtime based on the user’s choice of ice cream shape.



Note: 

Sphere Ice Cream Volume = (4/3) * pi * r³

Cone Ice Cream Volume = (1/3) * pi * r² * h

Use M_PI for pi and use late binding.

Input format :
The input consists of an integer choice indicating the type of ice cream shape:

for a spherical ice cream.
for a conical ice cream.
If the choice is 1, an integer r (radius) is provided.

If the choice is 2, two space-separated integers r (radius) and h (height) are provided.



Note: The input type should be an integer.

Output format :
The output should be the volume of the selected ice cream shape, rounded to two decimal points.

If the input choice is invalid, the output should be: Invalid choice



Refer to the sample output for the formatting specifications.

Code constraints :
0 ≤ r, h ≤ 1000

Sample test cases :
Input 1 :
1
4
Output 1 :
268.08
Input 2 :
2
4 5
Output 2 :
83.78
Input 3 :
4
Output 3 :
Invalid choice



#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Icecream {
public:
    virtual double Quantity() = 0;
    virtual ~Icecream() {}
};

class Sphere : public Icecream {
    int r;
public:
    Sphere(int r) {
        this->r = r;
    }

    double Quantity() {
        return (4.0 / 3.0) * M_PI * r * r * r;
    }
};

class Cone : public Icecream {
    int r, h;
public:
    Cone(int r, int h) {
        this->r = r;
        this->h = h;
    }

    double Quantity() {
        return (1.0 / 3.0) * M_PI * r * r * h;
    }
};

int main() {
    int choice;
    cin >> choice;

    Icecream* icecream = nullptr;

    if (choice == 1) {
        int r;
        cin >> r;
        icecream = new Sphere(r);
    }
    else if (choice == 2) {
        int r, h;
        cin >> r >> h;
        icecream = new Cone(r, h);
    }
    else {
        cout << "Invalid choice";
        return 0;
    }

    cout << fixed << setprecision(2) << icecream->Quantity();

    delete icecream;
    return 0;
}
