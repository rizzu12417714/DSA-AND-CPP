Single File Programming Question
Problem Statement



Robin is a tech-savvy teenager who is diving into programming. 



He is working on a project to find special elements in an array called 'leaders.' 
  Leaders are those exceptional elements that are greater than the sum of all the elements to their right. 



Assist Robin in writing this program.



Example



Input:

6

16 28 74 19 25 11

Output:

74 25 11 

Explanation:

The element 16 is not greater than the sum of elements to its right (28 + 74 + 19 + 25 + 11 = 157)

The element 28 is not greater than the sum of elements to its right (74 + 19 + 25 + 11 = 129)

The element 74 is greater than the sum of elements to its right (19 + 25 + 11 = 55)

The element 19 is not greater than the sum of elements to its right (25 + 11 = 36)

The element 25 is greater than the sum of elements to its right (11)

The last element 11 is always a leader since there are no elements to its right.

So, the output is {74, 25, 11}.

Input format :
The first line of input consists of an integer N, representing the number of elements in the array.

The second line consists of N space-separated integers, representing the elements of the array.

Output format :
The output prints (space-separated) the special elements in the given array, that are greater than the sum of all the elements to their right.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ N ≤ 10

1 ≤ array elements ≤ 100

Sample test cases :
Input 1 :
5
3 4 2 5 1
Output 1 :
5 1 
Input 2 :
6
16 28 74 19 25 11
Output 2 :
74 25 11 





import java.util.Scanner;

public class Main {
    // You are using Java
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int[] arr = new int[N];

        for (int i = 0; i < N; i++) {
            arr[i] = sc.nextInt();
        }

        int rightSum = 0;
        int[] leaders = new int[N];
        int count = 0;

        // Traverse from right to left
        for (int i = N - 1; i >= 0; i--) {
            if (arr[i] > rightSum) {
                leaders[count++] = arr[i];
            }
            rightSum += arr[i];
        }

        // Print leaders in correct order
        for (int i = count - 1; i >= 0; i--) {
            System.out.print(leaders[i] + " ");
        }

        sc.close();
    }
}
  
