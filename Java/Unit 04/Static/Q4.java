Single File Programming Question
Problem Statement



Tim is writing a program that reads an integer N.

If N is negative, the program must throw a custom exception named NegativeNumberException.
If N is non-negative, the program must double the value and print the result.


Use a try-catch block to handle the exception.

Input format :
The input consists of an integer N.

Output format :
If N is non-negative:

Value is Doubled: <result>



If N is negative:

Exception occurred: <N> is negative



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

-104 ≤ N ≤ 104

Sample test cases :
Input 1 :
7
Output 1 :
Value is Doubled: 14
Input 2 :
-23
Output 2 :
Exception occurred: -23 is negative



import java.util.Scanner;

// Logic class
class NumberProcessorLogic {

    // Custom Exception
    static class NegativeNumberException extends Exception {
        public NegativeNumberException(String message) {
            super(message);
        }
    }

    // Method to process input
    public static int processInput(int num) throws NegativeNumberException {

        if (num < 0) {
            throw new NegativeNumberException(num + " is negative");
        }

        return num * 2;
    }
}

// Main class
class NumberProcessor {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        try {
            int num = scanner.nextInt();

            int result = NumberProcessorLogic.processInput(num);

            System.out.print("Value is Doubled: " + result);

        } catch (NumberProcessorLogic.NegativeNumberException ex) {

            System.out.print("Exception occurred: " + ex.getMessage());

        } finally {
            scanner.close();
        }
    }
}
