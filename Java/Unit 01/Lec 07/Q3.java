Question No : 3 / 5
bookmarkIcon
Single File Programming Question
Problem Statement



Emma wants to check if a number is halfway between two others. Write a program for her that takes three integers and verifies if the second is the arithmetic mean of the first and third. Output a boolean result and a message indicating the status.



Use the relational operator to solve the program.

Input format :
The first line of input consists of an integer representing the first number.

The second line of input consists of an integer representing the second number.

The third line of input consists of an integer representing the third number.

Output format :
The first line of output displays a boolean value representing whether the second integer is halfway between the first and the next integer.

The second line displays one of the following:

If the result is true, print "The second integer is halfway between the first and third integers."
Otherwise, print "The second integer is not halfway between the first and third integers."


Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

0 ≤ input integers ≤ 1000

Sample test cases :
Input 1 :
1
7
10
Output 1 :
false
The second integer is not halfway between the first and third integers.
Input 2 :
1
5
10
Output 2 :
true
The second integer is halfway between the first and third integers.




import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int first = sc.nextInt();
        int second = sc.nextInt();
        int third = sc.nextInt();

        boolean result = (2 * second) == (first + third);

        System.out.println(result);

        if (result) {
            System.out.println("The second integer is halfway between the first and third integers.");
        } else {
            System.out.println("The second integer is not halfway between the first and third integers.");
        }
    }
}



  
