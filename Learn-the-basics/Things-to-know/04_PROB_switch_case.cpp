// Given the integer day denoting the day number, print on the screen which day of the week it is. Week starts from Monday and
// for values greater than 7 or less than 1, print Invalid. Ensure only the 1st letter of the answer is capitalised.


#include<iostream>
using namespace std;
int main() {
    int day;
    cout << "Enter day number";
    cin >> day;
    switch (day) {
        case 1:                
        cout << "monday";
        break;
        case 2:               
        cout << "tuesday";
        break;                 
        case 3:                                          
        cout << "wednesday";        
        break;
        case 4:
        cout << "thursday";
        break;
        case 5:
        cout << "friday";
        break;
        case 6:
        cout << "saturday";
        break;
        case 7:
        cout << "sunday";
        break;
        default:              
        cout << "Invalid input!";  
    }
    return 0;
}

// **NOTE** Tried to pass a 'string' into the switch case here initially. 
//          FAILED because C++ switch statements ONLY work with integers and chars! 
//          Strings must use if-else. Keeping this file for tracking the practice problem.

// #include<iostream>
// using namespace std;
// int main() {
//     string day;
//     cout << "Enter day name::(keep the first letter capital)";
//     cin >> day;
//     switch ('day') {
//     case 'Monday':
//     cout << "1st day";
//     break;
//     case 'Tuesday':
//     cout << "2nd day";
//     break;
//     case 'Wednesday':
//     cout << "3rd day";
//     break;
//     case 'Thursday':
//     cout << "4th day";
//     break;
//     case 'Friday':
//     cout << "5th day";
//     break;
//     case 'Saturday':
//     cout << "6th day";
//     break;
//     case 'Sunday':
//     cout << "7th day";
//     break;
//     default:
//     cout << "Enter valid day name";
//     } 
//     return 0;
// }