Problem Description (Paragraph)
Gopi is shopping at a local market and wants to calculate the total price of his
purchase. He is given the price of a product, the quantity purchased, and a discount scheme based on a threshold value. If the total price exceeds the discount threshold, a discount is applied. This task is implemented using unary operator overloading, where the ++ operator calculates the final total price after considering quantity and discount conditions.
Formula Used
Total Price = price × quantity
If Total Price > discountThreshold
Discounted Price = Total Price − (Total Price × discountRate)
Input Format
The input consists of four space-separated values:
A double value representing the price of a single item
An integer representing the quantity purchased
A double value representing the discount threshold
A double value representing the discount rate (in decimal form)
Output Format
The output prints
Total price is X
where X is the final total price rounded off to two decimal places.
Code Constraints
1 ≤ price ≤ 1000
1 ≤ quantity ≤ 100
0 ≤ discountThreshold ≤ 10000
0 ≤ discountRate ≤ 1

Sample Test Case 1
Input
Copy code

10.0 5 50.0 0.1
Output
Copy code

Total price is 50.00
Sample Test Case 2
Input
Copy code

20.0 3 60.0 0.2
Output
Copy code

Total price is 60.00


#include <iostream>
#include <iomanip>
using namespace std;

class Market {
private:
    double price;
    int quantity;
    double discountThreshold;
    double discountRate;
    
public:
    Market(double p, int q, double dT, double dR) 
        : price(p), quantity(q), discountThreshold(dT), discountRate(dR) {}

    Market operator++() {
        double totalPrice = price * quantity;
        if (totalPrice > discountThreshold) {
            totalPrice -= totalPrice * discountRate;
        }
        cout << "Total price is " << fixed << setprecision(2) << totalPrice << endl;
        return *this;
    }
};

int main() {
    double price, discountThreshold, discountRate;
    int quantity;
    
    cin >> price >> quantity >> discountThreshold >> discountRate;
    
    Market obj(price, quantity, discountThreshold, discountRate);
    ++obj;
    
    return 0;
}
