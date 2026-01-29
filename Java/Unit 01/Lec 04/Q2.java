Single File Programming Question
Problem Statement



Arun has been assigned the task of writing a program that accepts user input for an Integer and a Character. The program should then use wrapper classes to convert these inputs into their corresponding primitive types (int, and char) and display the results.



Your task is to help Arun complete his assignment.

Input format :
The first line of input consists of an integer value.

The second line consists of a character.

Output format :
The first line of output prints "Integer Value: " followed by the converted primitive integer value.

The second line of output prints "Character Value: " followed by the converted primitive character value.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ integer ≤ 100000

The character will be either uppercase or lowercase.

Sample test cases :
Input 1 :
23
A
Output 1 :
Integer Value: 23
Character Value: A
Input 2 :
23
g
Output 2 :
Integer Value: 23
Character Value: g
Input 3 :
6789
P
Output 3 :
Integer Value: 6789
Character Value: P



Code



import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Integer intObj = sc.nextInt();
        Character charObj = sc.next().charAt(0);

        int intVal = intObj.intValue();
        char charVal = charObj.charValue();

        System.out.println("Integer Value: " + intVal);
        System.out.println("Character Value: " + charVal);
    }
}
