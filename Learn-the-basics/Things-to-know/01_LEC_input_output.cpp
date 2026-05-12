//                                                         MAIN SKELETON OF CODES

// #include<iostream>

// int main() {
//     return 0;
// } 

// ======================================================
// variation 1 (Printing in the same line without space)
// ======================================================

// #include<iostream>
// int main() {
//     std::cout << "Hey Abhigyan";
//     std::cout << "Hey Abhigyan";
//     return 0;
// }

// ========================================================
// variation 2 (Printing in different lines) 
// using "\n" or std::endl **** endl is slower than \n ****
// ========================================================

// #include<iostream>                                                             #include<iostream>
//  int main() {                                                                   int main() {
//      std::cout << "Hey Abhigyan" << "\n";               OR                          std::cout << "Hey Abhigyan" << std::endl;        
//      std::cout << "Hey Abhigyan";                                                   std::cout << "Hey Abhigyan";
//      return 0;                                                                      return 0;
//  }                                                                              }


// #include<iostream>                                                 #include<iostream>
//  int main() {                                                       int main() {
//     std::cout << "Hey Abhigyan" << "\n" << "Hey Abhigyan";   OR         std::cout << "Hey Abhigyan" << std::endl << "Hey Abhigyan";
//     return 0;                                                           return 0;
//  }                                                                 }

// ===============================================================================================
// variation 3 (Using namespace std;) 
// After using namespace std;, program uses std:: before ***all functions***, avoiding re-writting
// **NOTE** always use << before and after endl
// ===============================================================================================

// #include<iostream>
// using namespace std;

// int main() {
//     cout << "Hey Abhigyan" << endl << "Hey Abhigyan";
//     return 0;
// }
// ==================================================================================================================================
// ==================================================================================================================================
// ==================================================================================================================================
//                                                            INPUT

// #include<iostream>
// using namespace std;
// int main() {                    <--------- main skeleton of taking input
//     int x;                      <--------- this defines the datatype of the input
//     cin >> x;                   <--------- cin >> x means "input into x"
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//       int x;                       
//       cin >> x;                          <------- let's suppose input is 10
//       cout << "value of x is:" << x;     <------- output will be   value of x is:10     <--notice there is no space between ':' and 10
//       return 0;
//  }
     
// ===========================
// variation (taking 2 inputs)
// ===========================

// #include<iostream>
// using namespace std;
// int main() {
//     int x, y;
//     cin >> x >> y;               <------- pehla input jo daalega vo x me jaega, dusra y me. Example: 10 20, 10-->x 20-->y
//     cout << "Value of x:" << x << "and value of y:" << y;      <------- output will be    Value of x:20and value of y:30
//     return 0;
// }
                  
//                                        ***********OR***********

// #include<iostream>
//  using namespace std;
//  int main() {
//      int x;
//      int y;                                     <------ ek ek karke, baat ek hi hai, upar waala asaan aur acha hai
//      cin >> x;
//      cin >> y;
//      cout << "Value of x:" << x << "and value of y:" << y;
//      return 0;
//  }

//===================================================================================================================================
//===================================================================================================================================
//                                                          New Skeleton

// #include<iostream>    <-----------this include 1 library, input output 
// #include<bits/stdc++.h>  <--------this includes all libraries

// THEREFORE, THE NEW SKELETON IS

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     return 0;
// }