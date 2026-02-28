Question Paragraph
Arjun is designing a water bill calculation system. 
  The system takes the number of units consumed and calculates
the bill based on the following rates:First 10 units: 5 units per unitNext 10 units (from 11 to 20): 8 units per unitBeyond 20 units: 10 units per unitHe is using a 
class WaterBill where the number of units is stored using a pointer. The class also calculates the total bill based on these rates. 
  Help Arjun to implement the task by using a pointer for the units member variable in the class.Input format:The input consists of an integer units, representing the number of water units consumed.Output format:The output prints "Total Bill: " followed by the calculated bill (rounded to two decimal places).Code constraints:1 ≤ units < 1000
  Sample Test Cases
Input 15Output 1Total Bill: 25Input 219Output 2Total Bill: 122



  #include <iostream>
#include <iomanip>
using namespace std;

class WaterBill {
public:
    int* units; // pointer to store number of units

    WaterBill() {
        units = new int; // dynamically allocate memory
    }

    double calculateBill() {
        int u = *units;
        double total = 0;

        if (u <= 10)
            total = u * 5;
        else if (u <= 20)
            total = (10 * 5) + ((u - 10) * 8);
        else
            total = (10 * 5) + (10 * 8) + ((u - 20) * 10);

        return total;
    }
};

int main() {
    WaterBill bill;
    cin >> *bill.units;  // input through pointer

    cout << fixed << setprecision(0);
    cout << "Total Bill: " << bill.calculateBill();

    return 0;
}
