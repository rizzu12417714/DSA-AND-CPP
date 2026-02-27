Single File Programming Question
Problem Statement



Roshni is tasked with developing a program for concatenating two arrays provided by the user. 
  To accomplish this, she wants to create a class named ArrayConcatenator. 
  The class includes a constructor to concatenate the elements of the input arrays. 
  She wants to print the elements of the resulting array.



Help Roshni to complete the program.

Input format :
The first line of input consists of an integer N, representing the number of elements of the first array.

The second line consists of N space-separated integers representing the first array elements.

The third line consists of an integer M, representing the number of elements of the second array.

The fourth line consists of M space-separated integers, representing the second array elements.

Output format :
The output prints the concatenated array of (M+N) integers, separated by spaces.



Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints

1 ≤ N, M ≤ 10

1 ≤ array elements ≤ 100

Sample test cases :
Input 1 :
5
7 8 5 6 9
3
1 4 3
Output 1 :
7 8 5 6 9 1 4 3 
Input 2 :
4
78 56 93 14
1
56
Output 2 :
78 56 93 14 5



import java.util.Scanner;

class ArrayConcatenator {
    int[] result;

    // Constructor to concatenate arrays
    ArrayConcatenator(int[] arr1, int[] arr2) {
        int n = arr1.length;
        int m = arr2.length;
        result = new int[n + m];

        for (int i = 0; i < n; i++) {
            result[i] = arr1[i];
        }

        for (int i = 0; i < m; i++) {
            result[n + i] = arr2[i];
        }
    }

    void printConcatenatedArray() {
        for (int i = 0; i < result.length; i++) {
            System.out.print(result[i] + " ");
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int[] arr1 = new int[N];
        for (int i = 0; i < N; i++) {
            arr1[i] = sc.nextInt();
        }

        int M = sc.nextInt();
        int[] arr2 = new int[M];
        for (int i = 0; i < M; i++) {
            arr2[i] = sc.nextInt();
        }

        ArrayConcatenator arrayConcatenator = new ArrayConcatenator(arr1, arr2);
        arrayConcatenator.printConcatenatedArray();

        sc.close();
    }
}

  
