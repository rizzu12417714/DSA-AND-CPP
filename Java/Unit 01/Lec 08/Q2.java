Single File Programming Question
Problem Statement



Sarah, a student studying coordinate geometry, needs a program to calculate the slope, distance, and midpoint of line segments. She wants to understand how to work with Cartesian coordinates. Write a program to allow her to choose an operation and calculate the desired property based on two points.



Formulas:

slope = (y2 - y1) / (x2 - x1)

distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1))

midpointX = (x1 + x2) / 2

midpointY = (y1 + y2) / 2

Input format :
The first line of input contains an integer representing choices (1 for slope, 2 for distance, 3 for midpoint).

The next line contains four space-separated double values x1 y1 x2 y2 representing the coordinates.

Output format :
If choice = 1 (Slope): the output prints "Slope: <<slope>>" where slope is the calculated slope of the line (with one decimal point).

If choice = 2 (Distance): the output prints "Distance: <<distance>>" where distance is the distance between the two points, rounded to two decimal places.

If choice = 3 (Midpoint): the output prints "Midpoint: (<<midX>>, <<midY>>)" where midX and midY are the x and y coordinates of the midpoint (with one decimal point).

If choice is invalid (not 1, 2, or 3): the output prints "Invalid choice. Please select a valid option."



Refer to the sample output for format specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ choice ≤ 3

1 ≤ x1, y1, x2, y2 ≤ 50

Sample test cases :
Input 1 :
1
1.0 2.0 3.0 6.0
Output 1 :
Slope: 2.0
Input 2 :
2
1.0 2.0 4.0 6.0
Output 2 :
Distance: 5.00
Input 3 :
3
1.0 2.0 4.0 6.0
Output 3 :
Midpoint: (2.5, 4.0)
Input 4 :
6
1.0 9.0 8.0 6.0
Output 4 :
Invalid choice. Please select a valid option.







  import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int choice = sc.nextInt();
        double x1 = sc.nextDouble();
        double y1 = sc.nextDouble();
        double x2 = sc.nextDouble();
        double y2 = sc.nextDouble();

        if (choice == 1) {
            double slope = (y2 - y1) / (x2 - x1);
            System.out.printf("Slope: %.1f", slope);
        }
        else if (choice == 2) {
            double distance = Math.sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
            System.out.printf("Distance: %.2f", distance);
        }
        else if (choice == 3) {
            double midX = (x1 + x2) / 2;
            double midY = (y1 + y2) / 2;
            System.out.printf("Midpoint: (%.1f, %.1f)", midX, midY);
        }
        else {
            System.out.print("Invalid choice. Please select a valid option.");
        }

        sc.close();
    }
}


