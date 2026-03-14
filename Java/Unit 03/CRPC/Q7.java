Single File Programming Question
Problem Statement



In ABC Company, Developers are tasked with developing a robust financial calculator system. The system consists of an abstract class FinancialCalculator with three key methods: calculateCompoundInterest, calculateFutureValue, and calculateMonthlyLoanPayment. The system includes two subclasses, InvestmentCalculator and LoanCalculator. 



Users are prompted to input the principal amount, annual interest rate, and duration. Based on their choice between 1. Investment or a 2. loan, the system performs the relevant financial calculations and displays the results. 



Note:

Compound Intrest = P(1+Rate/100)n - P

Future Value = P(1+Rate/100)n

Loan/Month = (Loan Amount * Monthly Interest)/(1-(1+Monthly Interest)n

Input format :
The first line of input consists of a double value, representing the principal amount.

The second line of input consists of a double value, representing the interest rate.

The third line of input consists of an integer, representing the duration in years.

The fourth line of input consists of an integer(1 or 2), representing the Investment Calculator / Loan Calculator.

Output format :
If the choice is 1 (Investment Calculator):

The first line of output prints the compound interest, rounded off to two decimal places, in the format "Compound Interest: <value>"
The second line of output prints the future value, rounded off to two decimal places, in the format "Future Value: <value>"
If the choice is 2 (Loan Calculator):

The output prints the monthly loan payment, rounded off to two decimal places, in the format "Monthly Loan Payment: <value>"
If the choice is not 1 or 2:

The output prints "Invalid choice"


Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1.0 ≤ Principal Amount ≤ 100000000.0

1.0 ≤ Rate of Interest ≤ 99.0

1 ≤ Duration ≤ 50﻿

Sample test cases :
Input 1 :
10000.0
5.0
3
1
Output 1 :
Compound Interest: 1576.25
Future Value: 11576.25
Input 2 :
25000.9
9.7
1
2
Output 2 :
Monthly Loan Payment: 2194.49
Input 3 :
5000.0
8.7
5
3
Output 3 :
Invalid choice
Whitelist
Set 1:
abstract

import java.util.Scanner;

// Abstract class
abstract class FinancialCalculator {

    abstract double calculateCompoundInterest(double principal, double rate, int duration);

    abstract double calculateFutureValue(double principal, double rate, int duration);

    abstract double calculateMonthlyLoanPayment(double principal, double rate, int duration);
}

// Investment calculator class
class InvestmentCalculator extends FinancialCalculator {

    @Override
    double calculateCompoundInterest(double principal, double rate, int duration) {
        double futureValue = principal * Math.pow(1 + rate / 100, duration);
        return futureValue - principal;
    }

    @Override
    double calculateFutureValue(double principal, double rate, int duration) {
        return principal * Math.pow(1 + rate / 100, duration);
    }

    @Override
    double calculateMonthlyLoanPayment(double principal, double rate, int duration) {
        return 0; // not used for investment
    }
}

// Loan calculator class
class LoanCalculator extends FinancialCalculator {

    @Override
    double calculateCompoundInterest(double principal, double rate, int duration) {
        return 0; // not used for loan
    }

    @Override
    double calculateFutureValue(double principal, double rate, int duration) {
        return 0; // not used for loan
    }

    @Override
    double calculateMonthlyLoanPayment(double principal, double rate, int duration) {

        double monthlyRate = rate / 100 / 12;
        int months = duration * 12;

        double emi = (principal * monthlyRate) /
                (1 - Math.pow(1 + monthlyRate, -months));

        return emi;
    }
}

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        double principal = sc.nextDouble();
        double rate = sc.nextDouble();
        int duration = sc.nextInt();
        int choice = sc.nextInt();

        if (choice == 1) {

            InvestmentCalculator ic = new InvestmentCalculator();

            double ci = ic.calculateCompoundInterest(principal, rate, duration);
            double fv = ic.calculateFutureValue(principal, rate, duration);

            System.out.printf("Compound Interest: %.2f\n", ci);
            System.out.printf("Future Value: %.2f\n", fv);

        } 
        else if (choice == 2) {

            LoanCalculator lc = new LoanCalculator();

            double loan = lc.calculateMonthlyLoanPayment(principal, rate, duration);

            System.out.printf("Monthly Loan Payment: %.2f\n", loan);

        } 
        else {
            System.out.println("Invalid choice");
        }

        sc.close();
    }
}
