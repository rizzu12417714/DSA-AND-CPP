Single File Programming Question
Problem Statement



In an organization, there are employees with different roles and salaries. Your task is to create a program that helps calculate the net salary of employees, including tax deductions and benefits. You have a class hierarchy, including Employee, Engineer, and SoftwareEngineer classes, to represent different roles and their respective salary components.

Note:

Gross Salary Calculation:

Gross Salary = Base Salary + Bonus



Tax Calculation:

Tax = Gross Salary * 10% (Fixed tax rate for engineers)

Tax = Gross Salary * 15% (Fixed tax rate for software engineers)



Benefit Calculation:

Benefit = $100 (Fixed benefit for engineers)

Benefit = $150 (Fixed benefit for software engineers)



Net Salary Calculation:

Net Salary = Gross Salary - Tax + Benefit

Input format :
The first line of the input consists of a string name representing the employee's name.

The second line of the input consists of a double baseSalary representing the base salary of the employee.

The third line of the input consists of a double bonus representing the bonus for the employee.

The fourth line of the input consists of an integer employeeType (1 for Engineer, 2 for Software Engineer).

Output format :
If the employeeType is 1 (Engineer) or 2 (Software Engineer), the output prints a double value representing the net salary.

If the employeeType is any value other than 1 or 2, the output prints "Invalid".



Refer to the sample output for format specification

Code constraints :
The given testcases fall under the following constraints:

1 ≤ |name| ≤ 100

0.0 ≤ baseSalary ≤ 1,000,000.0

0.0 ≤ bonus ≤ 1,000,000.0

Sample test cases :
Input 1 :
John
50000.0
10000.0
1
Output 1 :
54100.0
Input 2 :
Alice
60000.0
12000.0
2
Output 2 :
61350.0
Input 3 :
Dave
60000.0
10000.0
3
Output 3 :
Invalid



import java.util.Scanner;

// Base class
class Employee {

    String name;
    double baseSalary;
    double bonus;

    Employee(String name, double baseSalary, double bonus) {
        this.name = name;
        this.baseSalary = baseSalary;
        this.bonus = bonus;
    }

    double calculateNetSalary() {
        return 0;
    }
}

// Engineer class
class Engineer extends Employee {

    Engineer(String name, double baseSalary, double bonus) {
        super(name, baseSalary, bonus);
    }

    @Override
    double calculateNetSalary() {

        double gross = baseSalary + bonus;
        double tax = gross * 0.10;
        double benefit = 100;

        return gross - tax + benefit;
    }
}

// Software Engineer class
class SoftwareEngineer extends Employee {

    SoftwareEngineer(String name, double baseSalary, double bonus) {
        super(name, baseSalary, bonus);
    }

    @Override
    double calculateNetSalary() {

        double gross = baseSalary + bonus;
        double tax = gross * 0.15;
        double benefit = 150;

        return gross - tax + benefit;
    }
}

// Main class
public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        String name = scanner.nextLine();
        double baseSalary = scanner.nextDouble();
        double bonus = scanner.nextDouble();
        int employeeType = scanner.nextInt();

        Employee employee;

        if (employeeType == 1) {
            employee = new Engineer(name, baseSalary, bonus);
        } 
        else if (employeeType == 2) {
            employee = new SoftwareEngineer(name, baseSalary, bonus);
        } 
        else {
            System.out.println("Invalid");
            return;
        }

        double netSalary = employee.calculateNetSalary();
        System.out.println(netSalary);
    }
}
