Single File Programming Question
Problem Statement



Rohit is tasked with creating a program that solves a quadratic equation of the form ax2 + bx + c.
  The program should accept user input for the coefficients a, b and c, and throw an exception if the discriminant is negative.



Implement a method solveQuadraticEquation that takes the coefficients as parameters and calculates the roots of the quadratic equation.
Throw an IllegalArgumentException with the message "Error: Discriminant is negative. The equation has no real roots." if the discriminant is negative.
In the main method, catch and handle any IllegalArgumentException thrown by the solveQuadraticEquation method.


Formula:

discriminant = b * b - 4 * a * c

root1 = (-b + Math.sqrt(discriminant)) / (2 * a)

root2 = (-b - Math.sqrt(discriminant)) / (2 * a)

Input format :
The input consists of three space-separated double values, representing the coefficients of a, b, and c respectively.

Output format :
Print "Root 1: <value>" round of into one decimal place

Print "Root 2: <value>" round of into one decimal place



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

-50.0 ≤ a, b, c ≤ 50.0

Sample test cases :
Input 1 :
1.2 -3.2 2.1
Output 1 :
Root 1: 1.5
Root 2: 1.2
Input 2 :
1.5 2.6 3.9
Output 2 :
Error: Discriminant is negative. The equation has no

 real roots.
Input 3 :
7.1 6.4 -1.1
Output 3 :
Root 1: 0.1
Root 2: -1.0


import java.util.Scanner;

class Solution {

    public static void solveQuadraticEquation(double a, double b, double c) {

        double discriminant = b * b - 4 * a * c;

        // Check negative discriminant
        if (discriminant < 0) {
            throw new IllegalArgumentException(
                "Error: Discriminant is negative. The equation has no real roots."
            );
        }

        double root1 = (-b + Math.sqrt(discriminant)) / (2 * a);
        double root2 = (-b - Math.sqrt(discriminant)) / (2 * a);

        // Print with 1 decimal place
        System.out.println("Root 1: " + String.format("%.1f", root1));
        System.out.println("Root 2: " + String.format("%.1f", root2));
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        try {
            double a = scanner.nextDouble();
            double b = scanner.nextDouble();
            double c = scanner.nextDouble();

            solveQuadraticEquation(a, b, c);

        } catch (IllegalArgumentException e) {
            System.out.println(e.getMessage());
        } finally {
            scanner.close();
        }
    }
}
