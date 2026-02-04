Single File Programming Question
Problem Statement



Sandeep is tasked with creating a credit score calculator program that assesses an individual's creditworthiness based on different criteria. The program should provide credit scores in three categories: Credit Score, Debt Score, and Income Score.



Credit Score Calculation

If the choice is 1, input the number of late payments.

If the late payments are 0, the credit score is 800.
If the late payments are 1, the credit score is 750.
If the late payments are 2, the credit score is 700.
If the late payments are 3, the credit score is 650.
If the late payments are 4, the credit score is 600.
If the late payments are 5, the credit score is 550.


Debt Score Calculation

If the choice is 2, input the debt-to-income ratio.

If the debt-to-income ratio is 30 or less, the debt score is "Good."
If the debt-to-income ratio is between 30 (exclusive) and 50 (inclusive), the debt score is "Average."
If the debt-to-income ratio is above 50, the debt score is "Poor."


Income Score Calculation

If the choice is 3, input the annual income.

If the annual income is 50000 or more, the income score is "Good."
If the annual income is between 30000 (inclusive) and 50000 (exclusive), the income score is "Average."
If the annual income is less than 30000, the income score is "Poor."


Help Sandeep to complete the task using 'switch-case' statements.

Input format :
The first line of input consists of an integer, representing the choice.

Depending on the choice, the second line of input consists of the number of late payments(integer) or debt-to-income ratio(double) or annual income(double).

Output format :
If choice = 1, the output prints "Credit Score: <score>" where <score> is an integer.

If choice = 2, the output prints "Debt Score: <Good/Average/Poor>"

If choice = 3, the output prints "Income Score: <Good/Average/Poor>"



Refer to the sample outputs for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ choice ≤ 3

0 ≤ late payments ≤ 5

0 ≤ debt-to-income ratio ≤ 100

0 ≤ annual income ≤ 1,000,000

Sample test cases :
Input 1 :
1
3
Output 1 :
Credit Score: 650
Input 2 :
2
44.5
Output 2 :
Debt Score: Average
Input 3 :
3
13057.0
Output 3 :
Income Score: Poor


import java.util.Scanner;

class CreditScoreCalculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int choice = sc.nextInt();

        switch (choice) {
            case 1:
                int latePayments = sc.nextInt();
                int creditScore = 0;

                switch (latePayments) {
                    case 0: creditScore = 800; break;
                    case 1: creditScore = 750; break;
                    case 2: creditScore = 700; break;
                    case 3: creditScore = 650; break;
                    case 4: creditScore = 600; break;
                    case 5: creditScore = 550; break;
                }

                System.out.println("Credit Score: " + creditScore);
                break;

            case 2:
                double ratio = sc.nextDouble();
                String debtScore;

                if (ratio <= 30) {
                    debtScore = "Good";
                } else if (ratio <= 50) {
                    debtScore = "Average";
                } else {
                    debtScore = "Poor";
                }

                System.out.println("Debt Score: " + debtScore);
                break;

            case 3:
                double income = sc.nextDouble();
                String incomeScore;

                if (income >= 50000) {
                    incomeScore = "Good";
                } else if (income >= 30000) {
                    incomeScore = "Average";
                } else {
                    incomeScore = "Poor";
                }

                System.out.println("Income Score: " + incomeScore);
                break;
        }

        sc.close();
    }
}





  
