Single File Programming Question
Problem Statement



Thor is testing the power of his hammer strikes in the training arena. He needs to calculate the kinetic energy of his hammer using the formula: Energy = Mass × Velocity². 



To make the calculator work with different numeric types (integers, decimals, etc.), he decides to use a function template called calculateEnergy that accepts any numeric type. 



Help him to implement the task using function templates.

Input format :
The first line of input consists of a double mass representing the mass of the hammer in kilograms.

The second line of input consists of a double velocity representing the velocity of the hammer in meters per second.

Output format :
The output prints "Hammer energy: " followed by the energy value with two decimal places.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

0.0 < mass ≤ 1000.0

0.0 < velocity ≤ 1000.0

Energy output is displayed with exactly 2 decimal places

Sample test cases :
Input 1 :
5.0
4.0
Output 1 :
Hammer energy: 80.00
Input 2 :
0.0
10.0
Output 2 :
Hammer energy: 0.00



#include <iostream>
#include <iomanip>
using namespace std;

template <class T>
T calculateEnergy(T mass, T velocity) {
    return mass * velocity * velocity;
}

int main() {
    double mass, velocity;
    cin >> mass;
    cin >> velocity;

    double energy = calculateEnergy(mass, velocity);

    cout << fixed << setprecision(2);
    cout << "Hammer energy: " << energy;

    return 0;
}
