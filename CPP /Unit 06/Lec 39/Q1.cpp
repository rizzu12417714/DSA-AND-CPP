Single File Programming Question
Problem Statement 



Ricky is building a flexible concatenation program that can merge data of various types. The program prompts the user to enter two arrays of 3 integers and two strings, along with a delimiter string. Once the inputs are provided, the program concatenates the arrays without any delimiter and displays the concatenated result.



Additionally, it concatenates the strings using the given delimiter and prints the merged string. The program is designed using template functions to accommodate different data types, allowing users to conveniently concatenate arrays and strings with ease.



Note: This kind of question will help in clearing Capgemini recruitment.

Input format :
The first line contains three space-separated integers, a1, a2, and a3, denoting the elements of the first array.

The second line contains three space-separated integers b1, b2, and b3, denoting the elements of the second array.

The third line contains the string s1, denoting the first string.

The fourth line contains the string s2, denoting the second string.

The fifth line contains a string delimiter, denoting the delimiter to use when concatenating the two strings.

Output format :
The concatenated array of integers is separated by a space.

The concatenated string, with the specified delimiter between the two original strings.



Refer to the sample output for the formatting specifications.

Code constraints :
The integers in the arrays and the delimiter string are each at a maximum length of 100.

The strings s1 and s2 are each of length at most 1000.

Sample test cases :
Input 1 :
1 2 3
4 5 6
hello
world
,
Output 1 :
Concatenated array: 5 7 9 
Concatenated string: hello,world
Input 2 :
2 4 6
1 3 5
hi
there
-
Output 2 :
Concatenated array: 3 7 11 
Concatenated string: hi-there


Single File Programming Question
Problem Statement 



Ricky is building a flexible concatenation program that can merge data of various types. The program prompts the user to enter two arrays of 3 integers and two strings, along with a delimiter string. Once the inputs are provided, the program concatenates the arrays without any delimiter and displays the concatenated result.



Additionally, it concatenates the strings using the given delimiter and prints the merged string. The program is designed using template functions to accommodate different data types, allowing users to conveniently concatenate arrays and strings with ease.



Note: This kind of question will help in clearing Capgemini recruitment.

Input format :
The first line contains three space-separated integers, a1, a2, and a3, denoting the elements of the first array.

The second line contains three space-separated integers b1, b2, and b3, denoting the elements of the second array.

The third line contains the string s1, denoting the first string.

The fourth line contains the string s2, denoting the second string.

The fifth line contains a string delimiter, denoting the delimiter to use when concatenating the two strings.

Output format :
The concatenated array of integers is separated by a space.

The concatenated string, with the specified delimiter between the two original strings.



Refer to the sample output for the formatting specifications.

Code constraints :
The integers in the arrays and the delimiter string are each at a maximum length of 100.

The strings s1 and s2 are each of length at most 1000.

Sample test cases :
Input 1 :
1 2 3
4 5 6
hello
world
,
Output 1 :
Concatenated array: 5 7 9 
Concatenated string: hello,world
Input 2 :
2 4 6
1 3 5
hi
there
-
Output 2 :
Concatenated array: 3 7 11 
Concatenated string: hi-there

#include <iostream>
#include <string>
using namespace std;

template <typename T>
void concatArray(T a[], T b[], int n) {
    cout << "Concatenated array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] + b[i] << " ";
    }
    cout << endl;
}

template <typename T>
string concatString(T s1, T s2, T delim) {
    return s1 + delim + s2;
}

int main() {
    int arr1[3], arr2[3];
    string str1, str2, delimiter;

    for (int i = 0; i < 3; i++)
        cin >> arr1[i];

    for (int i = 0; i < 3; i++)
        cin >> arr2[i];

    cin >> str1;
    cin >> str2;
    cin >> delimiter;

    concatArray(arr1, arr2, 3);
    cout << "Concatenated string: " << concatString(str1, str2, delimiter);

    return 0;
}
