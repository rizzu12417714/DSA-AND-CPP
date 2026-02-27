Problem Statement:



Imagine you're developing a Java class called GeometricSequence that offers constructors to 
  calculate either the Nth term or the sum of the first N terms in a geometric sequence. 
  The class provides two constructors:



GeometricSequence(int a, int r, int N): This constructor takes the first term (a), 
common ratio (r), and the number of terms (N), calculating the Nth term by default.



GeometricSequence(int a, int r, int N, String operation): This constructor allows you to
  specify an operation type ("term" or "sum") in addition to the parameters.

Input format :
The first line of the input is an integer representing the first term (a) of the geometric sequence.

The second line contains an integer indicating the common ratio (r) of the sequence.

The third line contains an integer specifying the number of terms (N) in the sequence.

An optional fourth line allows you to specify the operation type as a string, either "term" or "sum."

Output format :
If the operation is "term", the output prints "Result: <Nth_term_value>" 
  where <Nth_term_value> represents the Nth term of the geometric sequence.

If the operation is "sum", the output prints "Result: <sum_of_first_N_terms>" where <sum_of_first_N_terms> 
  represents the sum of the first N terms of the geometric sequence.

If the specified operation is neither "term" nor "sum", print "Invalid operation specified."

(results are double value)



Refer to the sample output for formatting specifications.

Code constraints :
The given testcases fall under the following constraints:

1 ≤ a ≤ 100

-100 ≤ r ≤ 100

0 ≤ N ≤ 100

Sample test cases :
Input 1 :
2
3
5
sum
Output 1 :
Result: 242.0
Input 2 :
3
-2
4
term
Output 2 :
Result: -24.0
Input 3 :
3
-2
4
sum
Output 3 :
Result: -15.0
Input 4 :
3
4
1
add
Output 4 :
Invalid operation specified.




import java.util.Scanner;

class GeometricSequence {
    int a, r, N;
    String operation;

    // Constructor for default (Nth term)
    GeometricSequence(int a, int r, int N) {
        this.a = a;
        this.r = r;
        this.N = N;
        this.operation = "term";
    }

    // Constructor with operation
    GeometricSequence(int a, int r, int N, String operation) {
        this.a = a;
        this.r = r;
        this.N = N;
        this.operation = operation;
    }

    double calculate() {
        if (operation.equalsIgnoreCase("term")) {
            return a * Math.pow(r, N - 1);
        } 
        else if (operation.equalsIgnoreCase("sum")) {
            if (r == 1) {
                return a * N;
            } else {
                return a * (1 - Math.pow(r, N)) / (1 - r);
            }
        } 
        else {
            return Double.NaN;  // Invalid operation
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int a = scanner.nextInt();
        int r = scanner.nextInt();
        int N = scanner.nextInt();
        scanner.nextLine();

        GeometricSequence sequence;

        if (scanner.hasNextLine()) {
            String operation = scanner.nextLine().trim();
            if (!operation.isEmpty()) {
                sequence = new GeometricSequence(a, r, N, operation);
                double result = sequence.calculate();

                if (Double.isNaN(result)) {
                    System.out.println("Invalid operation specified.");
                } else {
                    System.out.println("Result: " + result);
                }
            } else {
                sequence = new GeometricSequence(a, r, N);
                double result = sequence.calculate();
                System.out.println("Result: " + result);
            }
        } else {
            sequence = new GeometricSequence(a, r, N);
            double result = sequence.calculate();
            System.out.println("Result: " + result);
        }

        scanner.close();
    }
}
