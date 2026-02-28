Single File Programming Question
Problem statement



Mark is a car enthusiast who loves to collect and analyze sports cars. To help him keep track of the specifications and performance of his collection, he decides to create a program. He defines a base class Car with a pure virtual function findSpeed(), which must be implemented by derived classes.



In this case, he creates the SportsCar class, which takes the maximum speed as an argument and implements the findSpeed() function. Mark can input the model, year, and maximum speed of his sports car, and the program will output the car's maximum speed in both kilometers per hour and miles per hour, as well as the age of the car.



Speed in mph = speed in km/h × 0.621371
Car age = current year − year of the car, where current year = 2024
Input format :
The first line contains the car model as a string.

The second line contains the year of the car as an integer.

The third line contains the maximum speed in km/h of the car as an integer.

Output format :
The output consists of the following:

Max speed in km/h: <maxSpeed> as an integer.

Max speed in mph: <convertedSpeed> as a double value, rounded off 2 decimal points.

Age of the car: <carAge> years as an integer.



Refer to the sample output for format specifications.

Code constraints :
The strings for the model of the car contain only alphanumeric characters and spaces.

1900 ≤ year ≤ 2024

1 ≤ speed ≤ 1000

Sample test cases :
Input 1 :
i20
2020
250
Output 1 :
Max speed in km/h: 250
Max speed in mph: 155.34
Age of the car: 4 years
Input 2 :
Lamborghini
1998
300
Output 2 :
Max speed in km/h: 300
Max speed in mph: 186.41
Age of the car: 26 years



#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Car {
public:
    virtual void findSpeed() = 0;
    virtual ~Car() {}
};

class SportsCar : public Car {
    string model;
    int year;
    int speed;
public:
    SportsCar(string m, int y, int s) {
        model = m;
        year = y;
        speed = s;
    }

    void findSpeed() {
        double mph = speed * 0.621371;
        int age = 2024 - year;

        cout << "Max speed in km/h: " << speed << endl;
        cout << "Max speed in mph: " << fixed << setprecision(2) << mph << endl;
        cout << "Age of the car: " << age << " years";
    }
};

int main() {
    string model;
    int year, speed;

    getline(cin, model);
    cin >> year;
    cin >> speed;

    Car* car = new SportsCar(model, year, speed);
    car->findSpeed();

    delete car;
    return 0;
}
