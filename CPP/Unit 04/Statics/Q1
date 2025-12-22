Problem Description (Paragraph)
Arvind wants to calculate electrical power along with useful and wasted power using object-oriented programming. A base class P is used to store voltage and current and compute the total electrical power. A derived class PE extends class P by adding efficiency and calculating useful output power and wasted power based on the given efficiency value.
Input Format
The input consists of three space-separated double values:
Voltage
Current
Efficiency
Output Format
First line prints: Power: followed by total power rounded to one decimal place and ending with W
Second line prints: Useful Output Power: followed by useful power rounded to one decimal place and ending with W
Third line prints: Wasted Power: followed by wasted power rounded to one decimal place and ending with W
Code Constraints
1.0 ≤ voltage ≤ 500.0
1.0 ≤ current ≤ 50.0
0.01 ≤ efficiency ≤ 0.99

Sample Test Case 1
Input
Copy code

120.7 5.0 0.85
Output
Copy code

Power: 603.5W
Useful Output Power: 513.0W
Wasted Power: 90.5W
Sample Test Case 2
Input
Copy code

347.8 23.6 0.47
Output
Copy code

Power: 8208.1W
Useful Output Power: 3857.8W
Wasted Power: 4350.3W



Code

#include <iostream>
#include <iomanip>
using namespace std;

class P {
protected:
    double v; 
    double i; 

public:
    P(double voltage, double current) {
        v = voltage;
        i = current;
    }

    double calcPower() {
        return v * i;
    }
};

class PE : public P {
private:
    double e; 

public:
    PE(double voltage, double current, double efficiency) : P(voltage, current){
        e = efficiency;
    }

    double calcUsefulPower() {
        return calcPower() * e;
    }

    double calcWastedPower() {
        return calcPower() * (1.0 - e);
    }
};

int main() {
    double voltage, current, efficiency;
    cin >> voltage;
    cin >> current;
    cin >> efficiency;

    PE device(voltage, current, efficiency);
    cout << fixed << setprecision(1);
    cout << "Power: " << device.calcPower() << "W" << endl;
    cout << "Useful Output Power: " << device.calcUsefulPower() << "W" << endl;
    cout << "Wasted Power: " << device.calcWastedPower() << "W" ;

    return 0;
}
