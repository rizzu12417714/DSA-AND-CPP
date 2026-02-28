Single File Programming Question
Problem Statement



Emily runs a bakery and tracks the monthly profits and losses of her business over a period of 
  time. She wants to calculate her maximum net profit by removing one continuous subarray (one or more consecutive months) 
  with the highest loss (i.e., the subarray with the smallest sum).



However:

If all months have only one loss, no subarray is removed.
Otherwise, she removes the continuous subarray with the most significant loss, and the rest of the months contribute to the net profit.


Your task is to help Emily determine the maximum possible net profit she can achieve after following these rules.



Example



Input:

6

1000 -200 300 -500 400 300

Output:

1800

Explanation:

The month in which the business performed poorly was with a loss of 500. So, after ignoring that month, the net profit is 1000-200+300+400+300 = 1800.

Input format :
The first line of input consists of an integer N, representing the number of monthly profit/loss records.

The second line consists of N space-separated integers, each representing the profit or loss for each month (Negative values represent losses).

Output format :
The output prints a single integer representing the net profit.



Refer to the sample output for formatting specifications.

Code constraints :
The given testcases fall under the following constraints:

1 ≤ N ≤ 10

-100000 ≤ array elements ≤ 100000

Sample test cases :
Input 1 :
4
500 -200 100 300
Output 1 :
900
Input 2 :
6
1000 -200 300 -500 400 300
Output 2 :
1800



  import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        int[] arr = new int[N];

        for (int i = 0; i < N; i++) {
            arr[i] = sc.nextInt();
        }

        int totalSum = 0;
        for (int i = 0; i < N; i++) {
            totalSum += arr[i];
        }

        // Find minimum subarray sum (Kadane’s algorithm for min sum)
        int minEndingHere = arr[0];
        int minSoFar = arr[0];

        for (int i = 1; i < N; i++) {
            minEndingHere = Math.min(arr[i], minEndingHere + arr[i]);
            minSoFar = Math.min(minSoFar, minEndingHere);
        }

        // If removing improves total, subtract minSoFar
        if (minSoFar < 0) {
            System.out.println(totalSum - minSoFar);
        } else {
            System.out.println(totalSum);
        }

        sc.close();
    }
}
