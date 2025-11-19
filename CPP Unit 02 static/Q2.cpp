Question ParagraphHrida is responsible for managing the utility bill payments for her household. She needs a system to calculate the adjusted balance of her utility bill every month. Using the UtilityBill class, where a pointer to a UtilityBill object is used, Hrida inputs the current balance, monthly charge, and the payment she has made.If her payment is less than the monthly charge, a late fee of 5% of the monthly charge is applied. The system should then calculate the new adjusted balance, include the late fee if applicable, and display the results.Formula used:
Adjusted Balance = Current Balance + Monthly Charge - Payment Received + Late FeeInput format:The first line consists of a double value b, representing the current balance of the utility bill.The second line consists of a double value m, representing the monthly charge for the utility service.The third line consists of a double value p, representing the payment amount received.Output format:If the payment is less than the monthly charge, print:
Late fee: Rs.X
Adjusted balance: Rs.Y
Where X is the late fee and Y is the adjusted balance, both rounded to two decimal places.If the payment is equal to or greater than the monthly charge:
Adjusted balance: Rs.Y
(Y rounded to two decimal places)Sample Test CasesInput 11050.75
650.50
450.25Output 1Late fee: Rs.32.52
Adjusted balance: Rs.1283.53Input 21350.55
550.25
550.25Output 2Adjusted balance: Rs.1350.55Input 3150.75
20.60
50.55Output 3Adjusted balance: Rs.120.80



  #include <iostream>
#include <iomanip>
using namespace std;

class UtilityBill {
public:
    double current_balance;
    double monthly_charge;
    double payment_received;

    void calculate() {
        double late_fee = 0.0;
        if (payment_received < monthly_charge) {
            late_fee = 0.05 * monthly_charge;
            cout << "Late fee: Rs." << fixed << setprecision(2) << late_fee << endl;
        }
        current_balance = current_balance + monthly_charge - payment_received + late_fee;
        cout << "Adjusted balance: Rs." << fixed << setprecision(2) << current_balance;
    }
};

int main() {
    UtilityBill bill;
    UtilityBill* billPtr = &bill;

    cin >> billPtr->current_balance;
    cin >> billPtr->monthly_charge;
    cin >> billPtr->payment_received;

    billPtr->calculate();

    return 0;
}
