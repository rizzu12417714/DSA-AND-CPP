Single File Programming Question
Problem Statement



Ella, a Netflix admin, is tasked with sending friendly renewal reminders to subscribers. She needs a program that prompts the user to input the subscriber's name and renewal date. Once the information is provided, the program should generate and display a personalized reminder message. 



This will help ensure subscribers are aware of their upcoming renewal dates and can manage their subscriptions effectively.

Input format :
The first line of input consists of a string representing the subscriber's name.

The second line of input consists of a string representing the renewal date in the format YYYY-MM-DD.

Output format :
The first line of output prints "Hi <name>,"

The second line of output prints "Just a reminder: Your next renewal is on <date>."

The third line of output prints "Don't forget to renew!"



Refer to the sample output for the exact text and format.

Code constraints :
The given testcases fall under the following constraints:

The subscriber name is a non-empty string without spaces.

The renewal date is a string in the format YYYY-MM-DD.

Sample test cases :
Input 1 :
Alice
2024-08-15
Output 1 :
Hi Alice,
Just a reminder: Your next renewal is on 2024-08-15.
Don't forget to renew!
Input 2 :
Shraddha
2024-09-21
Output 2 :
Hi Shraddha,
Just a reminder: Your next renewal is on 2024-09-21.
Don't forget to renew!

Code


import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        String date = sc.nextLine();

        System.out.println("Hi " + name + ",");
        System.out.println("Just a reminder: Your next renewal is on " + date + ".");
        System.out.println("Don't forget to renew!");
    }
}
