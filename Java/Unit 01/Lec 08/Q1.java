Single File Programming Question
Problem Statement



Imagine you are building a discount calculator for a retail store. The program takes the original price and a discount type ('F' for flat discount or 'P' for percentage discount) as input. It then calculates and displays the discount amount and the final price.



Formulas Used:

For flat discount, the calculation is final price = original price - flat discount. 

For percentage discount, it is final price = original price - (original price * discount percentage / 100).

Input format :
The first line of input consists of a double value representing the original price.

The second line of input consists of a character representing the discount type ('F' for flat discount or 'P' for percentage discount).

The third line of input consists of a double value representing the discount amount (flat discount if the type is 'F', or discount percentage if the type is 'P').

Output format :
If the discount type is 'F':

The first line of output prints "Discount Amount: Rs." followed by the discount amount rounded to two decimal places.
The second line of output prints "Final Price: Rs." followed by the final price rounded to two decimal places.
If the discount type is 'P':

The first line of output prints "Discount Percentage: " followed by the discount percentage rounded to two decimal places.
The second line of output prints "Final Price: Rs." followed by the final price rounded to two decimal places.
If the discount type is invalid:

The output prints "Invalid discount type".


Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1.0 ≤ price ≤ 1000.0

0.0 ≤ flat discount ≤ original price

0.0 ≤ discount percentage ≤ 200.0

Sample test cases :
Input 1 :
120.7
F
30.0
Output 1 :
Discount Amount: Rs.30.00
Final Price: Rs.90.70
Input 2 :
75.2
P
20.5
Output 2 :
Discount Percentage: 20.50
Final Price: Rs.59.78
Input 3 :
50.0
H
100.0
Output 3 :
Invalid discount type






import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double price = sc.nextDouble();
        char type = sc.next().charAt(0);
        double value = sc.nextDouble();

        if (type == 'F') {
            double finalPrice = price - value;
            System.out.printf("Discount Amount: Rs.%.2f\n", value);
            System.out.printf("Final Price: Rs.%.2f\n", finalPrice);
        } 
        else if (type == 'P') {
            double discount = price * value / 100;
            double finalPrice = price - discount;
            System.out.printf("Discount Percentage: %.2f\n", value);
            System.out.printf("Final Price: Rs.%.2f\n", finalPrice);
        } 
        else {
            System.out.print("Invalid discount type");
        }

        sc.close();
    }
}






  
