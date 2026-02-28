Single File Programming Question

Problem Statement

It is time to file tax returns. Every tax return form consists of multiple sections 
that store different information about the tax filer.
You are required to design an object-oriented program to represent the different sections 
of a tax form using the same class names as specified.

class partA stores the name of the income tax filer and the PAN number.

class partB consists of partA along with two important inputs: gross salary and
income from other sources.

class partC consists of partA along with the deductions applicable to the filer.

class taxComp combines partB and partC and calculates the final tax.


The tax is calculated as 30% of the taxable income, where taxable income is 
computed by deducting the deductions (partC) from the total income in partB.

The program should display the sequence of constructor calls, followed by the tax details, 
and finally the sequence of destructor calls.

Use virtual base classes to avoid ambiguity.


---

Input Format

The input consists of the following values, each on a new line:

1. Name of the filer (string)


2. PAN number of the filer (string)


3. Gross salary (double)


4. Income from other sources (double)


5. Deductions (double)




---

Output Format

The output should be displayed in the following order:

1. Sequence of constructors being called


2. Account holder details


3. Income details


4. Deductions


5. Taxable income (computed)


6. Tax payable (computed)


7. Sequence of destructors being called



Refer to the sample output for exact formatting.


---

Tax Calculation Logic

Taxable Income = Gross Salary + Income from Other Sources − Deductions

Tax Payable = 30% of Taxable Income



---

Sample Test Case

Sample Input

ABC
ABDPD534HF
10000
10000
5000

Sample Output

Creating partA
Creating partB
Creating partC
Creating taxComp
Account Holder Name: ABC
PAN: ABDPD534HF
Gross Salary: 10000
Income from Other Sources: 10000
Deductions: 5000
Taxable Income (computed): 15000
Tax Payable (computed): 4500
Deleting taxComp
Deleting partC
Deleting partB
Deleting partA





Code 




#include <iostream>
#include <string>
using namespace std;

class partA {
protected:
    string name, pan;
public:
    partA(string n, string p) {
        cout << "Creating partA" << endl;
        name = n;
        pan = p;
    }
    ~partA() {
        cout << "Deleting partA" << endl;
    }
};

class partB : virtual public partA {
protected:
    double grossSalary, otherIncome;
public:
    partB(string n, string p, double g, double o)
        : partA(n, p) {
        cout << "Creating partB" << endl;
        grossSalary = g;
        otherIncome = o;
    }
    ~partB() {
        cout << "Deleting partB" << endl;
    }
};

class partC : virtual public partA {
protected:
    double deductions;
public:
    partC(string n, string p, double d)
        : partA(n, p) {
        cout << "Creating partC" << endl;
        deductions = d;
    }
    ~partC() {
        cout << "Deleting partC" << endl;
    }
};

class taxComp : public partB, public partC {
public:
    taxComp(string n, string p, double g, double o, double d)
        : partA(n, p), partB(n, p, g, o), partC(n, p, d) {
        cout << "Creating taxComp" << endl;

        double taxableIncome = (grossSalary + otherIncome) - deductions;
        double tax = taxableIncome * 0.30;

        cout << "Account Holder Name: " << name << endl;
        cout << "PAN: " << pan << endl;
        cout << "Gross Salary: " << grossSalary << endl;
        cout << "Income from Other Sources: " << otherIncome << endl;
        cout << "Deductions: " << deductions << endl;
        cout << "Taxable Income (computed): " << taxableIncome << endl;
        cout << "Tax Payable (computed): " << tax << endl;
    }

    ~taxComp() {
        cout << "Deleting taxComp" << endl;
    }
};

int main() {
    string name, pan;
    double grossSalary, otherIncome, deductions;

    cin >> name;
    cin >> pan;
    cin >> grossSalary;
    cin >> otherIncome;
    cin >> deductions;

    taxComp t(name, pan, grossSalary, otherIncome, deductions);
    return 0;
}
