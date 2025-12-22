Problem Description (Paragraph)
Shivani ek food ordering system par kaam kar rahi hai jisme do tarah ke menus
hote hain: Vegetarian aur Non-Vegetarian. System ko dono menus se order ki gayi 
items ke quantity aur price ke base par total cost calculate karni hoti hai.
FoodOrder class, VegetarianMenu aur NonVegetarianMenu dono se inherit karti hai.
Dono parent classes me ek hi naam ka function calculateCost() hone ki wajah
se ambiguity ka issue hota hai. Is ambiguity ko resolve karne ke liye explicit 
scope resolution operator ka use karke dono parent classes ke functions ko alag-alag 
call kiya jata hai aur total cost calculate ki jati hai. Agar total cost discount threshold se zyada ho, to discount apply kiya jata hai.
Code Constraints
1 ≤ vegQuantity, nonVegQuantity ≤ 1000
0 ≤ vegPrice, nonVegPrice ≤ 1000
0 ≤ discountThreshold ≤ 10000
0 ≤ discountRate ≤ 1.0
Sample Test Cases
Sample Test Case 1
Input
Copy code

2
50.0
3
80.0
200.0
0.1
Output
Copy code

Total cost after discount: 306.00
Sample Test Case 2
Input
Copy code

1
40.0
2
60.0
100.0
0.05
Output
Copy code

Total cost after discount: 152.00
C++ Code (Multiple Inheritance + Ambiguity Resolution)
Copy code
Cpp
#include <iostream>
#include <iomanip>
using namespace std;

class VegetarianMenu {
public:
    double calculateCost(int quantity, double price) {
        return quantity * price;
    }
};

class NonVegetarianMenu {
public:
    double calculateCost(int quantity, double price) {
        return quantity * price;
    }
};

class FoodOrder : public VegetarianMenu, public NonVegetarianMenu {
public:
    double calculateTotalCost(int vegQty, double vegPrice,
                              int nonVegQty, double nonVegPrice,
                              double discountThreshold, double discountRate) {

        double vegCost = VegetarianMenu::calculateCost(vegQty, vegPrice);
        double nonVegCost = NonVegetarianMenu::calculateCost(nonVegQty, nonVegPrice);

        double totalCost = vegCost + nonVegCost;

        if (totalCost > discountThreshold) {
            totalCost = totalCost - (totalCost * discountRate);
        }

        return totalCost;
    }
};

int main() {
    int vegQuantity, nonVegQuantity;
    double vegPrice, nonVegPrice, discountThreshold, discountRate;

    cin >> vegQuantity;
    cin >> vegPrice;
    cin >> nonVegQuantity;
    cin >> nonVegPrice;
    cin >> discountThreshold;
    cin >> discountRate;

    FoodOrder order;
    double totalCost = order.calculateTotalCost(
        vegQuantity, vegPrice,
        nonVegQuantity, nonVegPrice,
        discountThreshold, discountRate
    );

    cout << fixed << setprecision(2);
    cout << "Total cost after discount: " << totalCost;

    return 0;
}
