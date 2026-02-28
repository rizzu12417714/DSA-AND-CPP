Problem Description (Paragraph)
Shivani ek store ka inventory manage kar rahi hai jo watches bechta hai. Har 
watch ka ek price, quantity aur discount rate hota hai. Jab koi watch 
inventory me add hoti hai, to constructor call hota hai aur jab watch remove hoti hai, 
to destructor call hota hai. Shivani ko discount apply karne ke baad watches ka total cost 
calculate karna hai aur saath hi constructor aur destructor ke execution order ko bhi dikhana hai. Is program me constructor object creation par message print karta hai aur destructor object destroy hone par message print karta hai.
Code Constraints
1.0 ≤ price ≤ 10000.0
1 ≤ quantity ≤ 1000
0.0 ≤ discountRate ≤ 1.0
Sample Test Cases
Sample Test Case 1
Input
Copy code

100.0
5
0.1
Output
Copy code

Constructor called: Watch added to inventory
Total cost after discount: 450.00
Destructor called: Watch removed from inventory
Sample Test Case 2
Input
Copy code

50.0
10
0.05
Output
Copy code

Constructor called: Watch added to inventory
Total cost after discount: 475.00
Destructor called: Watch removed from inventory
C++ Code (Constructor & Destructor Demonstration)
Copy code


#include <iostream>
#include <iomanip>
using namespace std;

class Watch {
private:
    double price;
    int quantity;
    double discountRate;

public:
    Watch(double p, int q, double d) : price(p), quantity(q), discountRate(d) {
        cout << "Constructor called: Watch added to inventory" << endl;
    }

    ~Watch() {
        cout << "Destructor called: Watch removed from inventory" << endl;
    }

    double calculateTotal() {
        double totalPrice = price * quantity;
        double discount = totalPrice * discountRate;
        return totalPrice - discount;
    }
};

int main() {
    double price, discountRate;
    int quantity;

    cin >> price >> quantity >> discountRate;

    Watch watch(price, quantity, discountRate);
    double totalCost = watch.calculateTotal();

    cout << fixed << setprecision(2) << "Total cost after discount: " << totalCost << endl;

    return 0;
}
