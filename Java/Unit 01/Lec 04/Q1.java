Problem Description (Paragraph)
An online store wants to simplify its checkout flow. After calculating the total expenditure, the system should generate a payment request asking the user to pay through GPay with the exact amount. Once shown, it should also display a thank-you message. Write a Java program that reads the total expenditure and prints the payment request followed by a thank-you note in the exact required format.
Input Format (Paragraph)
Input consists of a single double value representing the total expenditure amount.
Output Format (Paragraph)
The first line prints: Please Gpay Rs. followed by the entered double value. The second line prints: Thanks, Visit us again!
Code Constraints (Paragraph)
The expenditure value will be in the range 100.00 ≤ expenditure ≤ 5000.00.
Sample Test Case 1
Input:
350.25
Output:
Please Gpay Rs.350.25
Thanks, Visit us again!
Sample Test Case 2
Input:
1200.59
Output:
Please Gpay Rs.1200.59
Thanks, Visit us again!


Code



import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double amount = sc.nextDouble();
        System.out.println("Please Gpay Rs." + amount);
        System.out.println("Thanks, Visit us again!");
    }
}
