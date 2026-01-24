Single File Programming Question
Problem Statement



﻿In a gynecologist's clinic, efficiently managing doctor appointments is crucial for providing timely care to patients. The clinic maintains a record where each element represents a patient's ID based on their arrival time. To offer flexibility to patients, the clinic has designed a custom function called "removeElement" that allows patients to cancel their appointments.



When a patient requests to cancel their appointment (represented by the target patient ID), the function efficiently removes all occurrences of that patient's ID from the appointment queue, ensuring a smooth and well-organized appointment process. 



Note: This kind of question will be helpful in clearing Accenture recruitment.

Input format :
The first line of input consists of the number of patients, N.

The second line of input consists of N space-separated patient IDs.

The third line of input consists of the ID, M for which the appointment has to be canceled.

Output format :
If M is present in the patients' IDs, the output displays all IDs in exact order after removing M.

If M is not present in the patients' IDs, the output displays all IDs in exact order.

Code constraints :
1 <= M, N <= 104

Sample test cases :
Input 1 :
5
2 4 6 8 10
6
Output 1 :
2 4 8 10 
Input 2 :
5
2 4 6 8 10
1
Output 2 :
2 4 6 8 10 


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int m;
    cin >> m;

    for (int i = 0; i < n; i++) {
        if (arr[i] != m) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
