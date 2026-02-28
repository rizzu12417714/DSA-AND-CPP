Single File Programming Question
Problem Statement



Meteorologist Seetha is a weather expert who uses method overloading for data manipulation that 
  to determine weather changes. She has a specific utility class, StringOps, that she uses to perform 
  various string operations representing the weather condition , Seetha can either reverse a single 
  string or concatenate two strings using this class and methods.If there are more than two strings , It should returns an "Invalid input".

Input format :
The input contains one or two space-separated strings.

If there is one string, it represents the weather condition of the region.

If there are two strings, the first represents the weather condition of the region, and the second represents the changed weather condition of the region.

Output format :
If the input contains only one string, the output displays a string representing the reversed version of that string.

If the input contains exactly two strings, the output displays a string representing the concatenation of both strings without spaces.

If the input contains more than two strings, the output displays the string "Invalid input".



﻿Refer to the sample output for the formatting specifications.

Code constraints :
The given testcases fall under the following constraints:

0 ≤ Length of each string ≤ 100

Sample test cases :
Input 1 :
sunny
Output 1 :
ynnus
Input 2 :
rainy day
Output 2 :
rainyday
Input 3 :
It is too hot day
Output 3 :
Invalid input




  import java.util.Scanner;

public class Main {

    // Create StringOps as a static inner class
    static class StringOps {

        // Reverse single string
        String process(String str) {
            StringBuilder sb = new StringBuilder(str);
            return sb.reverse().toString();
        }

        // Concatenate two strings
        String process(String str1, String str2) {
            return str1 + str2;
        }
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine().trim();

        if (input.isEmpty()) {
            System.out.println("Invalid input");
            return;
        }

        String[] words = input.split(" ");
        StringOps obj = new StringOps();

        if (words.length == 1) {
            System.out.println(obj.process(words[0]));
        } 
        else if (words.length == 2) {
            System.out.println(obj.process(words[0], words[1]));
        } 
        else {
            System.out.println("Invalid input");
        }

        sc.close();
    }
}
