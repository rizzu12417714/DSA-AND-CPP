Single File Programming Question
Problem Statement



Romit wants to implement a program to find the smallest element in an array of integers using an interface with a default method. 



Help him design an interface named ArrayProcessor that includes a default method findSmallestElement(), which takes an array of integers as input and returns the smallest element. 



The Main class should implement this interface and use the default method to determine the smallest element in the array.

Input format :
The first line of input consists of an integer N, representing the number of elements in the array.

The second line of input consists of N space-separated integers, representing the array elements.

Output format :
The output prints an integer representing the smallest element in the array.



Refer to the sample output for the formatting specifications.

Code constraints :
The given test cases will fall under the following constraints:

2 ≤ N ≤ 10

1 ≤ array elements ≤ 100

Sample test cases :
Input 1 :
5
45 23 65 98 1
Output 1 :
1
Input 2 :
10
14 27 38 49 56 65 72 83 98 100
Output 2 :
14
Input 3 :
2
10 40
Output 3 :
10
Whitelist
Set 1:
default
interface


import java.util.Scanner;

// Interface ArrayProcessor with a default method
interface ArrayProcessor {
    // Default method to find the smallest element in an array
    default int findSmallestElement(int[] arr) {
        if (arr == null || arr.length == 0) {
            return 0; // Edge case handling
        }
        
        // Pehle element ko smallest maan kar shuru karte hain
        int smallest = arr[0];
        
        // Baaki elements se compare karte hain
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] < smallest) {
                smallest = arr[i];
            }
        }
        return smallest;
    }
}

// Footer snippet ke mutabiq Main class interface ko implement karegi
public class Main implements ArrayProcessor {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // N (number of elements) read karna
        if (!sc.hasNextInt()) return;
        int n = sc.nextInt();
        
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        // Main ka object banakar default method call karna
        Main obj = new Main();
        int result = obj.findSmallestElement(arr);

        // Result print karna
        System.out.println(result);
        
        sc.close();
    }
}
