/* CHALLENGE: THE MEMORY ARCHITECT
---------------------------------------------------------
TASK: Create a program that demonstrates the correct use of 
C++ Data Types based on memory requirements and range limits.

INPUTS:
1. Initial: A single character representing a name (e.g., 'A').
2. Age: A whole number (e.g., 19).
3. Global Debt: A massive number representing trillions (e.g., 300,000,000,000,000).
4. GPA: A high-precision decimal value (e.g., 9.856432).

OUTPUT GOAL: 
Display the data in a single line with the following format:
"Initial: [val], Age: [val], Debt: [val], GPA: [val]"

TECHNICAL GOAL: 
Choose the smallest possible valid data type for each 
variable to ensure the Mac Neo handles the large 'Debt' 
number without an overflow error.
---------------------------------------------------------
*/

#include<iostream>
using namespace std;
int main() {
    char a;
    long long debt;
    double gpa;
    int age;

    cout << "Enter your charector:";
    cin >> a;
    cout << "Enter GPA:";
    cin >> gpa;
    cout << "Enter Age:";
    cin >> age;
    cout << "Enter Global Debt:";
    cin >> debt;

    cout << "Initial:" << a << " Age:" << age << " Debt:" << debt << " GPA:" << gpa;
    return 0;
}