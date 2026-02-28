Single File Programming Question
Problem Statement



Create a program for Raj's Employee Information System that takes input for an employee's name, ID, and 
  monthly salary. Utilize the Employee class with a constructor and this keyword for attribute assignments. 



Implement methods for calculating and displaying annual salary. Collect Raj's input and display the employee details.

Input format :
The first line of input consists of a string, which represents the employee's name (a string containing characters and spaces).

The second line consists of an integer, representing the employee's ID.

The third line consists of the double value, which represents the monthly salary.

Output format :
The first line of output displays "Employee Name: " followed by the employee's name.

The second line displays "Employee ID: " followed by the employee's ID.

The third line displays "Monthly Salary: Rs. " followed by the monthly salary as a double, rounded to two decimal places.

The last line displays "Annual Salary: Rs. " followed by the calculated annual salary as a double, rounded to two decimal places.



Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ Employee's ID ≤ 10000

5.00 ≤ Salary ≤ 100000.00

Sample test cases :
Input 1 :
John Doe
101
5000.00
Output 1 :
Employee Name: John Doe
Employee ID: 101
Monthly Salary: Rs. 5000.00
Annual Salary: Rs. 60000.00
Input 2 :
Alice Smith
202
27500.58
Output 2 :
Employee Name: Alice Smith
Employee ID: 202
Monthly Salary: Rs. 27500.58
Annual Salary: Rs. 330006.96
Input 3 :
Bob Johnson
1000
100000.00
Output 3 :
Employee Name: Bob Johnson
Employee ID: 1000
Monthly Salary: Rs. 100000.00
Annual Salary: Rs. 1200000.00




 import java.util.Scanner;

class Employee {
    String name;
    int id;
    double monthlySalary;

    // Constructor using this keyword
    Employee(String name, int id, double monthlySalary) {
        this.name = name;
        this.id = id;
        this.monthlySalary = monthlySalary;
    }

    // Method to calculate annual salary
    double calculateAnnualSalary() {
        return monthlySalary * 12;
    }

    // Method to display employee details
    void displayEmployeeDetails() {
        System.out.println("Employee Name: " + name);
        System.out.println("Employee ID: " + id);
        System.out.printf("Monthly Salary: Rs. %.2f\n", monthlySalary);
        System.out.printf("Annual Salary: Rs. %.2f\n", calculateAnnualSalary());
    }
}

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String name = scanner.nextLine();
        int id = scanner.nextInt();
        double salary = scanner.nextDouble();

        Employee employee = new Employee(name, id, salary);
        employee.displayEmployeeDetails();

        scanner.close();
    }
} 
