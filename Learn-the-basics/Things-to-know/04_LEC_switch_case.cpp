// *******************************************************SWITCH CASE******************************************************

//=================
//    QUESTION
//=================

// Take the day no. amd print the corresponding day. For 1 print Monday, For 2 print Tuesday and so on for 7 print Sunday.

//================
//    ANSWER
//=================

// #include<iostream>
// using namespace std;
// int main() {
//     int day;
//     cout << "Enter day number";
//     cin >> day;
//     switch (day) {              <----------could have used if else if too, but bohot lamba pad jaata
//         case 1:                 <----------case 1 means, if user inputs value '1'
//         cout << "monday";
//         break;
//         case 2:                 <----------day is defined 'int' above. if it was 'char', then cases would have been__case 'a'__
//         cout << "tuesday";
//         break;                  <----------lets suppose if break wasnt here, then if user inputs '2', output would have been:
//         case 3:                                             tuesdaywednesdaythursdayfridaysaturdaysunday
//         cout << "wednesday";                writting break after each switch block stops executing the futher switch blocks.
//         break;                                                   same as else if did, remember!?
//         case 4:
//         cout << "thursday";
//         break;
//         case 5:
//         cout << "friday";
//         break;
//         case 6:
//         cout << "saturday";
//         break;
//         case 7:
//         cout << "sunday";
//         break;
//         default:              <-----------when all the cases are checked, and no case satisfies the input, default case runs.
//         cout << "Invalid input!";   <-----no need for break, you SHOULD write break but it isnt needed here.
//     }
//     return 0;
// }

// **NOTE** here indentation doesnt segregate things, unlike if else if, so understanding the jurisdiction of each case, break &
//          cout is absolutely must.