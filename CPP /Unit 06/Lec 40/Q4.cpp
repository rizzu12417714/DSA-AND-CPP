Single File Programming Question
Problem Statement



Thamizh is organizing a charity event to raise funds for various causes. As part of the event, he planned to conduct a unique auction for special items donated by the participants. To make the auction more interesting, he wants to ensure that each item to be auctioned has a unique starting bid.



Write a program to help you manage the unique starting bids for the auction items. The program should take input for the number of auction items (not more than 15) and their respective starting bids. However, since you want to avoid any complications during the auction, you need to ensure that each starting bid is unique. If there are any duplicate starting bids, the program should remove the duplicates and calculate the total sum of the unique starting bids.



Note: This kind of question will help in clearing Capgemini recruitment.

Input format :
The first line consists of an integer n, representing the number of elements.

The second line consists of n space-separated integers, representing the elements.

Output format :
The output displays the sum of unique elements in the following format: "Sum of unique elements: [sum]".

Print -1 if constraints are violated.



Refer to the sample output for the formatting specifications.

Code constraints :
n ≤ 15

1 ≤ elements ≤ 105

Sample test cases :
Input 1 :
5
1 5 4 4 1
Output 1 :
Sum of unique elements: 10
Input 2 :
20
Output 2 :
-1
Input 3 :
18
18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
Output 3 :
-1



#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 15) {
        cout << -1;
        return 0;
    }

    unordered_set<int> s;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (s.insert(x).second) {
            sum += x;
        }
    }

    cout << "Sum of unique elements: " << sum;
    return 0;
}
