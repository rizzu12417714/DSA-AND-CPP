Problem Description (Paragraph)
Arjun is growing a plant in his garden and wants to calculate the total height of 
the plant after a certain number of days by considering the initial height 
and the daily growth rate. A base class Base is used to store the basic growth calculation logic. A derived class PlantGrowth inherits from the base class, and a final class Final overrides the calculate() function to compute and display the total height of the plant after the specified number of days.
Formula Used
Total height = initialHeight + (growthRate × days)
Input Format
The input consists of three space-separated values:
A double value representing the initial height of the plant in centimeters
A double value representing the daily growth rate in centimeters
An integer value representing the number of days
Output Format
The output prints
Total height is X cm
where X is the calculated total height rounded off to two decimal places.
Code Constraints
1 ≤ initialHeight ≤ 1000
1 ≤ growthRate ≤ 100
1 ≤ days ≤ 365

Sample Test Case 1
Input
Copy code

10.0 2.5 5
Output
Copy code

Total height is 22.50 cm
Sample Test Case 2
Input
Copy code

15.0 1.2 10
Output
Copy code

Total height is 27.00 cm


Code

#include <iostream>
#include <iomanip>
using namespace std;

class Base {
public:
    virtual void calculate(double initialHeight, double growthRate, int days) {
        double total = initialHeight + (growthRate * days);
        cout << fixed << setprecision(2);
        cout << "Total height is " << total << " cm";
    }
};

class PlantGrowth : virtual public Base {
};

class Final : public PlantGrowth {
public:
    void calculate(double initialHeight, double growthRate, int days) override {
        Base::calculate(initialHeight, growthRate, days);
    }
};

int main() {
    double initialHeight, growthRate;
    int days;

    cin >> initialHeight >> growthRate >> days;

    Final obj;
    obj.calculate(initialHeight, growthRate, days);

    return 0;
}
