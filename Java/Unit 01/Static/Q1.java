Single File Programming Question
Problem Statement



Carlos is managing TechNova Electronics' inventory system. She is given a task to create a program that reads the device name, model number, and status and displays the formatted device information.



Since she is new to programming, can you assist Carlos in this task?

Input format :
The first line of input consists of a string, representing the device name.

The second line consists of a string, representing the status.

The third line consists of an integer, representing the model number.

Output format :
The first line of output prints "Device Name: " followed by a string representing the device name.

The second line prints "Status: " followed by a string representing the status.

The third line prints "Model Number: " followed by an integer representing the model number.



Refer to the sample output for formatting specifications.

Code constraints :
The given testcases fall under the following constraints:

The device name is a non-empty string containing only letters, digits, and spaces.

The status is a non-empty string and can include letters and spaces (e.g., "Available", "Out of Stock", "In Repair").

1 ≤ model number ≤ 1,000,000

Sample test cases :
Input 1 :
iPhone
Available
12
Output 1 :
Device Name: iPhone
Status: Available
Model Number: 12
Input 2 :
Galaxy
Out of Stock
10
Output 2 :
Device Name: Galaxy
Status: Out of Stock
Model Number: 10




import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String deviceName = sc.nextLine();
        String status = sc.nextLine();
        int modelNumber = sc.nextInt();

        System.out.println("Device Name: " + deviceName);
        System.out.println("Status: " + status);
        System.out.println("Model Number: " + modelNumber);

        sc.close();
    }
}


