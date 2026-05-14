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

#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "enter your age : ";
    cin >> x;
    if (x>=18) {
        cout << "you are an adult";
    }
    else if(x<18) {
        cout << "you are not an adult";
    }
    return 0;
}



