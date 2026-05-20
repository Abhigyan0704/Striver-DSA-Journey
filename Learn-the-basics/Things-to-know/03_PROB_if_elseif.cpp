// Given marks of a student, print on the screen:
// Grade A if marks >= 90
// Grade B if marks >= 70
// Grade C if marks >= 50
// Grade D if marks >= 35
// Fail, otherwise.


#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter your marks:: ";
    cin >> x;
    if (x<35) {
        cout << "Fail, better luck next time..";
    }
    else if (x<50) {
        cout << "Grade D";
    }
    else if (x<70) {
        cout << "Grade C";
    }
    else if (x<90) {
        cout << "Grade B";
    }
    else if (x<101) {
        cout << "Grade A, superb..";
    }
    return 0;
}
