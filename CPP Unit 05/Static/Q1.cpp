Single File Programming Question
Problem Statement:


Sarah is organizing a charity event where she sells tickets at different prices. She wants to calculate the total amount collected from ticket sales. To encourage group bookings, she offers a 10% discount if 3 or more tickets are purchased together.



Help Sarah implement a program using new and delete operators to dynamically manage ticket prices and calculate the final amount after applying the discount when applicable.

Input format :
The first line of input consists of an integer tickets representing the number of tickets sold.

The second line consists of tickets integers separated by spaces representing the price of each ticket.

Output format :
The first line of output prints "Total: " followed by the total ticket price rounded off to two decimal places.

If the number of tickets is 3 or more, the second line prints "Discount: " followed by the discount amount rounded off to two decimal places, and the third line prints "Final: " followed by the final price after discount, rounded off to two decimal places.

Otherwise, the second line prints "No discount".



Refer to the sample output for the formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ tickets ≤ 100

100 ≤ each ticket price ≤ 1000

Sample test cases :
Input 1 :
3
100 200 300
Output 1 :
Total: 600.00
Discount: 60.00
Final: 540.00
Input 2 :
2
500 500
Output 2 :
Total: 1000.00
No discount

image
Whitelist
Set 1:
new
delete



#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int tickets;
    cin >> tickets;

    int *prices = new int[tickets];
    for (int i = 0; i < tickets; i++) {
        cin >> prices[i];
    }

    double total = 0.0;
    for (int i = 0; i < tickets; i++) {
        total += prices[i];
    }

    cout << fixed << setprecision(2);
    cout << "Total: " << total << endl;

    if (tickets >= 3) {
        double discount = total * 0.10;
        double finalAmount = total - discount;
        cout << "Discount: " << discount << endl;
        cout << "Final: " << finalAmount;
    } else {
        cout << "No discount";
    }

    delete[] prices;
    return 0;
}
