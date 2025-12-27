Paragraph
Arjun works in an insurance company where vehicle insurance premiums depend on the type of vehicle and its age. To design a flexible system, an abstract base class Vehicle is created with a pure virtual function getPremium(). Two derived classes, Car and Bike, override this function to calculate premiums based on predefined rules. Cars have a base premium of ₹1000, and if the car is older than 3 years, ₹100 is added for each additional year. Bikes have a base premium of ₹500, and if the bike is older than 2 years, ₹50 is added for each additional year. The program takes user input for vehicle type and age, applies runtime polymorphism, and displays the calculated premium.
Input Format
The first line contains an integer representing the vehicle type
1 → Car
2 → Bike
The second line contains an integer representing the age of the vehicle in years
Output Format
The output prints
Copy code

Premium: <calculated premium>
Sample Test Cases
Sample Input 1
Copy code

1
1
Sample Output 1
Copy code

Premium: 1000
Sample Input 2
Copy code

2
1
Sample Output 2
Copy code

Premium: 500
Sample Input 3
Copy code

1
5
Sample Output 3
Copy code

Premium: 1200
Sample Input 4
Copy code

2
4
Sample Output 4
Copy code

Premium: 600
Full C++ Code (Without Comments, Using virtual)
Copy code
Cpp
#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual int getPremium(int age) = 0;
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    int getPremium(int age) {
        int premium = 1000;
        if (age > 3)
            premium += (age - 3) * 100;
        return premium;
    }
};

class Bike : public Vehicle {
public:
    int getPremium(int age) {
        int premium = 500;
        if (age > 2)
            premium += (age - 2) * 50;
        return premium;
    }
};

int main() {
    int type, age;
    cin >> type;
    cin >> age;

    Vehicle* v;

    if (type == 1)
        v = new Car();
    else
        v = new Bike();

    cout << "Premium: " << v->getPremium(age);

    delete v;
    return 0;
}
