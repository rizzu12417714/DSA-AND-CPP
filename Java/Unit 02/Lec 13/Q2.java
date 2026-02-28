Single File Programming Question
Problem Statement



Sharon is eager to calculate discounts and savings while shopping. 



She wants to write a program that take inputs for the base price and the discount percentage and 
  display the calculated discounted price and amount saved. Create a class with an instance initializer block to 
  input and initialize base price and discount percentage values, and implement methods to perform the calculations.



Develop a program to assist Sharon in calculating the discounted price and the amount saved. 

Input format :
The first line of input consists of a double value b, which represents the base price.

The second line consists of a double value d, representing the discount percentage.

Output format :
The first line of output prints "Discounted Price: Rs. <discounted_price>" where <discounted_price>
  is the base price after applying the discount, rounded to two decimal places.

The second line of output prints "Amount Saved: Rs. <amount_saved>" where <amount_saved> is
  the amount reduced due to the discount, rounded to two decimal places.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1.00 ≤ b ≤ 1000000.00

1.0 ≤ d ≤ 20000.0

Sample test cases :
Input 1 :
1000.00
3.0
Output 1 :
Discounted Price: Rs. 970.00
Amount Saved: Rs. 30.00
Input 2 :
25000.54
20.0
Output 2 :
Discounted Price: Rs. 20000.43
Amount Saved: Rs. 5000.11
Input 3 :
100000.00
30.2
Output 3 :
Discounted Price: Rs. 69800.00
Amount Saved: Rs. 30200.00




  import java.util.Scanner;

class DiscountCalculator {

    double basePrice;
    double discountPercentage;

    // Instance Initializer Block
    {
        Scanner sc = new Scanner(System.in);
        basePrice = sc.nextDouble();
        discountPercentage = sc.nextDouble();
    }

    // Method to calculate amount saved
    double calculateAmountSaved() {
        return (basePrice * discountPercentage) / 100;
    }

    // Method to calculate discounted price
    double calculateDiscountedPrice() {
        return basePrice - calculateAmountSaved();
    }
}

public class Main {
    public static void main(String[] args) {

        DiscountCalculator discountCalculator = new DiscountCalculator();

        double discountedPrice = discountCalculator.calculateDiscountedPrice();
        double amountSaved = discountCalculator.calculateAmountSaved();

        System.out.printf("Discounted Price: Rs. %.2f%n", discountedPrice);
        System.out.printf("Amount Saved: Rs. %.2f%n", amountSaved);
    }
}
