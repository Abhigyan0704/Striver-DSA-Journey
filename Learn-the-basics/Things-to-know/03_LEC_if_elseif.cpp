//*******************************************************IF ELSEIF***************************************************************

//Example:

// #include<iostream>
// using namespace std;
// int main() {
//     int x;
//     cout << "Enter your age";
//     cin >> x;
//     if(x>=18) {                             <------Notice the additional {} placement & the indentation behind if and else
//         cout << "You are an adult";
//     }
//     else {
//         cout << "You are not an adult";
//     }
//     return 0;
// }

//*****NOTE*****   it is not mandatory to have 'else', if you have 'if'

// =======================
// Variation 1: else if
// =======================

// #include<iostream>
// using namespace std;
// int main() {
//     int x;
//     cout << "enter your age : ";
//     cin >> x;
//     if (x>=18) {
//         cout << "you are an adult";
//     }
//     else if(x<18) {         <---can give 'if' statement inside 'else'. if we dont, it take everything other than condition given in 'if'
//         cout << "you are not an adult";
//     }
//     return 0;
// }

//****NOTE****    if we dont give 'else' statement after 'if'        OR       if we give 'else' statement after 'if', with no condition
//                                           BOTH THE CASES WILL FUNCTION SIMILARLY (logic laga)
//****NOTE****    if at line 35, statement was else if(x<10), and input was 15, then no output will come out

// ========================
//        QUESTION
// ========================

/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to enter marks and print the corresponding grade.
*/

// ==================
// ANSWER (first way) (time consuming approach)
// ==================

// #include<iostream>
// using namespace std;
// int main() {
//     int x;
//     cout << "Enter your marks: ";
//     cin >> x;
//     if (x<25) {
//         cout << "F";
//     }
//     if (x>=25 && x<45) {
//         cout << "E";                                   There is a huge problem in this method, because it has mutliple 'if's
//     }                                        <-------- even if your input is 24, output will be F, but computer will check 
//     if (x>=45 && x<50) {                               for all the 'if's given below, consuming more time.
//         cout << "D";
//     }
//     if (x>=50 && x<60) {
//         cout << "C";
//     }
//     if (x>=60 && x<80) {                    <--------- Also, see the syntax, for multiple conditions, use '&&'
//         cout << "B";
//     }
//     if (x>=80 && x<=100) {
//         cout << "outstanding, Grade A";
//     }
//     return 0;
// }

// ===================
// ANSWER (second way)(else if)
// ===================

// #include<iostream>
// using namespace std;
// int main() {
//     int x;
//     cout << "Enter your marks: ";
//     cin >> x;
//     if (x<25) {
//         cout << "F";
//     }
//     else if (x<45) {
//         cout << "E";
//     }                                 
//     else if (x<50) {                                    Notice how only one side boundary is given, it is because the other                      
//         cout << "D";                         <--------- boundary has been already checked in previous 'else if's
//     }                                                   so computer only run the code till there, where cout satisfies.
//     else if (x<60) {
//         cout << "C";
//     }
//     else if (x<80) {
//         cout << "B";
//     }
//     else if (x<=100) {
//         cout << "outstanding, Grade A";
//     }
//     return 0;
// }

//======================
//      QUESTION
//======================

/*
Take the age from the user and then decide accordingly:
1. If age < 18,
   print-> "not eligible for job"
2. If age >= 18 and age <= 54,
   print-> "eligible for job"
3. If age >= 55 and age <= 57,
   print-> "eligible for job, but retirement soon."
4. If age > 57
   print-> "retirement time"
*/

//======================
//ANSWER(with proper end limits)
//======================

// #include<iostream>
// using namespace std;
// int main() {
//     int x;
//     cout << "Enter your age::";
//     cin >> x;
//     if (x<18) {
//         cout << "not eligible for job";
//     }
//     else if (x>=18 && x<=54) {
//         cout << "eligible for job";
//     }
//     else if (x >= 55 && x<=57) {
//         cout << "eligible for job, but retirement soon.";
//     }
//     else if (x>57) {
//         cout << "retirement time..";
//     }
//     return 0;
// }

// ==================
// ANSWER (condensed)
// ==================

// #include<iostream>  
// using namespace std;
// int main() {
//     int x;
//     cout << "Enter your age::";
//     cin >> x;
//     if (x<18) {
//         cout << "not eligible for job";
//     }
//     else if (x<=54) {
//         cout << "eligible for job";
//     }
//     else if (x<=57) {
//         cout << "eligible for job, but retirement soon.";
//     }
//     else {
//         cout << "retirement time..";
//     }
//     return 0;
// }

// ====================
// ANSWER(NESTED IF, the OG method)
// ====================

#include<iostream>  
using namespace std;
int main() {
    int x;
    cout << "Enter your age::";
    cin >> x;
    if (x<18) {
        cout << "not eligible for job";
    }
    else if (x<=57) {
        cout << "eligible for job";
        if (x>54) {
            cout << ", but retirement soon.";
        }
    }
    else {
        cout << "retirement time..";
    }
    return 0;
}