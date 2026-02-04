Single File Programming Question
Problem Statement



Maya is given a two-digit number and needs to find the sum of its digits. She wants to know if the sum is less than 10 or not. Your task is to write a program to calculate and print the sum of the digits and provide a message based on the result.

Input format :
The input consists of an integer n.

Output format :
The output prints the sum of the digits and a message indicating whether it's less than 10 or not.

"Digit Sum: <<sum>>

The sum of the digits is less/not less than 10."

If n is not a two-digit number, print "Not a valid two-digit number."



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 1000

Sample test cases :
Input 1 :
12
Output 1 :
Digit Sum: 3
The sum of the digits is less than 10.
Input 2 :
29
Output 2 :
Digit Sum: 11
The sum of the digits is not less than 10.
Input 3 :
55
Output 3 :
Digit Sum: 10
The sum of the digits is not less than 10.
Input 4 :
345
Output 4 :
Not a valid two-digit number.



import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        if (n >= 10 && n <= 99) {
            int digit1 = n / 10;
            int digit2 = n % 10;
            int sum = digit1 + digit2;

            System.out.println("Digit Sum: " + sum);

            if (sum < 10) {
                System.out.println("The sum of the digits is less than 10.");
            } else {
                System.out.println("The sum of the digits is not less than 10.");
            }
        } else {
            System.out.print("Not a valid two-digit number.");
        }

        sc.close();
    }
}





  
