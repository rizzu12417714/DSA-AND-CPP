Single File Programming Question
Problem Statement



A data processing system must handle both numeric and character sequences.

Given an array of N elements, reverse only the elements at odd positions (1-based indexing) while keeping elements at even positions unchanged.



Position rule:

Odd positions: 1, 3, 5, 7, ...

Even positions: 2, 4, 6, 8, ...



Only the elements at odd positions must be reversed as a group.

The program must work for both:

Integer arrays

Character arrays



Use a generic class to implement the solution.

Input format :
The first line contains an integer N.
The second line contains N space-separated elements.
Output format :
Print N space-separated elements after reversing only the elements at odd positions.

There must be exactly one space between elements.

No trailing spaces are allowed.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ N ≤ 100

Each element is either:



1 ≤ arr[i] ≤ 1000

OR

a ≤ arr[i] ≤ z

Sample test cases :
Input 1 :
4
1 2 3 4
Output 1 :
3 2 1 4
Input 2 :
5
a b c d e
Output 2 :
e b c d a



import java.util.*;

class ReverseOdd<T> {
    T[] arr;
    int n;

    // Constructor
    ReverseOdd(T[] arr, int n) {
        this.arr = arr;
        this.n = n;
    }

    // Reverse only odd positions (1-based indexing)
    void reverseOddPositions() {
        ArrayList<T> list = new ArrayList<>();

        // Step 1: collect elements at odd positions (index 0,2,4...)
        for (int i = 0; i < n; i += 2) {
            list.add(arr[i]);
        }

        // Step 2: reverse them
        Collections.reverse(list);

        // Step 3: put them back
        int j = 0;
        for (int i = 0; i < n; i += 2) {
            arr[i] = list.get(j++);
        }
    }

    // Display result
    void display() {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i]);
            if (i != n - 1) System.out.print(" ");
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        sc.nextLine();

        String[] input = sc.nextLine().split(" ");

        // Check if input is integer or character
        if (Character.isDigit(input[0].charAt(0))) {

            Integer[] arr = new Integer[n];
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(input[i]);
            }

            ReverseOdd<Integer> obj = new ReverseOdd<>(arr, n);
            obj.reverseOddPositions();
            obj.display();

        } else {

            Character[] arr = new Character[n];
            for (int i = 0; i < n; i++) {
                arr[i] = input[i].charAt(0);
            }

            ReverseOdd<Character> obj = new ReverseOdd<>(arr, n);
            obj.reverseOddPositions();
            obj.display();
        }
    }
}
