Single File Programming Question
Problem Statement



Sophie is a meteorologist, and she needs a program to convert temperatures from Fahrenheit to Celsius. However, she also wants the program to warn her when the entered temperature is outside the human-survivable temperature range. The program should take a temperature in Fahrenheit as input, validate whether it's within the safe range, and convert it to Celsius if it is.



Can you help Sophie develop this simple program?



Formula: celsius = (fahrenheit - 32) * 5/9

Input format :
The input consists of a double value, representing the temperature in Fahrenheit.

Output format :
If the input temperature in Fahrenheit is within the safe human-survivable range (-100°F ≤ temperature ≤ 150°F), print "Temperature in Celsius: <<celsius>> C" where celsius is the converted temperature rounded to two decimal places.

If the input temperature is outside the safe range, print "Temperature outside the human-survivable range"



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

-100000°F ≤ temperature ≤ 100000°F

Sample test cases :
Input 1 :
123.5
Output 1 :
Temperature in Celsius: 50.83 C
Input 2 :
-65.1
Output 2 :
Temperature in Celsius: -53.94 C
Input 3 :
178.4
Output 3 :
Temperature outside the human-survivable range
Input 4 :
-101.0
Output 4 :
Temperature outside the human-survivable range



import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double fahrenheit = sc.nextDouble();

        if (fahrenheit >= -100 && fahrenheit <= 150) {
            double celsius = (fahrenheit - 32) * 5 / 9;
            System.out.printf("Temperature in Celsius: %.2f C", celsius);
        } 
        else {
            System.out.print("Temperature outside the human-survivable range");
        }

        sc.close();
    }
}



  

