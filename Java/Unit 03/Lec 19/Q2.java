Single File Programming Question
Problem Statement:



Alice is developing a new sorting algorithm and needs assistance in testing it. The algorithm processes an array of integers and separates them into two distinct arrays: one containing odd numbers and the other containing even numbers. Both subsets must preserve the original order of appearance from the input array.



To achieve this, she decides to use an abstract class that defines a method for sorting numbers into odd and even categories.

Input format :
The first line consists of an integer, n, representing the number of elements in the array.

The next n lines contain the elements of the array.

Output format :
The first line of output prints the odd numbers from the array in their original order, displayed as a comma-separated list enclosed in square brackets, prefixed with: "Sorted Odd Numbers: "

The second line of output prints the even numbers from the array in their original order, displayed as a comma-separated list enclosed in square brackets, prefixed with: "Sorted Even Numbers: "



Refer to the sample output for the formatting specifications.

Code constraints :
The given testcases fall under the following constraints:

0 ≤ n ≤ 100

-106 ≤ element ≤106

Sample test cases :
Input 1 :
6
9
2
4
7
12
15
Output 1 :
Sorted Odd Numbers: [9, 7, 15]
Sorted Even Numbers: [2, 4, 12]
Input 2 :
3
11
20
30
Output 2 :
Sorted Odd Numbers: [11]
Sorted Even Numbers: [20, 30]
Whitelist
Set 1:
abstract



import java.util.*;

// Abstract class
abstract class NumberSorter {

    // abstract method
    abstract int[][] sortOddEven(int[] arr);
}

// Subclass implementing the abstract class
class Sorter extends NumberSorter {

    int[][] sortOddEven(int[] arr) {

        List<Integer> odd = new ArrayList<>();
        List<Integer> even = new ArrayList<>();

        for (int num : arr) {
            if (num % 2 != 0) {
                odd.add(num);
            } else {
                even.add(num);
            }
        }

        int[] oddArr = new int[odd.size()];
        int[] evenArr = new int[even.size()];

        for (int i = 0; i < odd.size(); i++) {
            oddArr[i] = odd.get(i);
        }

        for (int i = 0; i < even.size(); i++) {
            evenArr[i] = even.get(i);
        }

        return new int[][]{oddArr, evenArr};
    }
}

// Main class
public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        NumberSorter sorter = new Sorter();
        int[][] result = sorter.sortOddEven(arr);

        int[] oddNumbers = result[0];
        int[] evenNumbers = result[1];

        System.out.print("Sorted Odd Numbers: [");
        for (int i = 0; i < oddNumbers.length; i++) {
            System.out.print(oddNumbers[i]);
            if (i < oddNumbers.length - 1) {
                System.out.print(", ");
            }
        }
        System.out.println("]");

        System.out.print("Sorted Even Numbers: [");
        for (int i = 0; i < evenNumbers.length; i++) {
            System.out.print(evenNumbers[i]);
            if (i < evenNumbers.length - 1) {
                System.out.print(", ");
            }
        }
        System.out.println("]");

        scanner.close();
    }
}
