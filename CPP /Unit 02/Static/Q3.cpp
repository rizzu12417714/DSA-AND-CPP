Question ParagraphSita is a real estate enthusiast who needs a program to analyze her real estate investments. She wants to calculate the Return on Investment (ROI) for each of her properties using an array of objects.Your task is to design a program that takes input for multiple properties, including their purchase price and rental income, and calculates and displays the ROI for each property.Formula:
Return investment = (rental income / purchase price) * 100.00Input format:The first line of the input is an integer n, representing the number of properties.The next n lines of input consist of three space-separated values for each property:An integer, propertyID P, representing the unique identifier of the property.A double value, purchasePrice PR, representing the price at which Sita purchased the property.A double value, rentalIncome R, representing the monthly rental income generated from the property.Output format:For each property, output the propertyID followed by the ROI, formatted to two decimal places, followed by a percentage sign.Sample Test CasesInput 12
101 50000.00 1200.00
102 100000.00 2500.00Output 1101 2.40%
102 2.50%Input 23
345 75700.00 1800.00
367 120000.00 3200.00
109 90000.00 2000.00
Output 2345 2.38%
367 2.67%
109 2.22%

 #include <iostream>
#include <iomanip>
using namespace std;

class Property {
public:
    int propertyID;
    double purchasePrice;
    double rentalIncome;

    double calculateROI() {
        return (rentalIncome / purchasePrice) * 100.0;
    }
};

int main() {
    int numProperties;
    cin >> numProperties;

    Property properties[10]; // Max 6 as per constraints, 10 is safe

    for (int i = 0; i < numProperties; i++) {
        cin >> properties[i].propertyID >> properties[i].purchasePrice >> properties[i].rentalIncome;
    }

    for (int i = 0; i < numProperties; i++) {
        double roi = properties[i].calculateROI();
        cout << properties[i].propertyID << " " << fixed << setprecision(2) << roi << "%" << endl;
    }

    return 0;
} 
