//********************************************************DATA TYPES**************************************************************
// FORMAT : data_type variable;

//===============================================================================================================================

// int                        <-------Range: 2 * 10^9 , 4 bytes                           seedhe bolu to: 10^9

// #include<iostream>
// using namespace std;
// int main() {
//     int x = 10;
//     return 0;
// }

//===============================================================================================================================

// long                       <-------Range: same as int

// #include<iostream>
// using namespace std;
// int main() {
//     long y = 15;
//     return 0;
// }

//===============================================================================================================================

// long long                  <--------Range: 9 * 10^18                                    seedhe bolu to: 10^18

// #include<iostream>
// using namespace std;
// int main() {
//     long long z = 20;
//     return 0;
// }

//===============================================================================================================================

// float                      <--------Range: 1.2E-38 to 3.4E+38 , 4 byte                  seedhe bolu to: 10^38
// double                     <--------Range: 2.3E-308 to 1.7E+308 , 8 byte                seedhe bolu to: 10^308
// long double                <--------Range: 3.4E-4932 to 1.1E+4932 , 10 byte

// #*NOTE*# float or double, both can have decimal as well as proper integer. same goes for long double
//          example: float x = 5.6 <---- valid
//                   float x = 5   <---- valid
// #*NOTE*# we can use long long every time, to escape the hurdle of range, but we dont
//          because time of code running, and amount of storage it grabs are only 2 things that matters, and long long fails in both 
//          of them.

//===============================================================================================================================

// string                   <---------- NOTE: it take anything before " " (space)
// getline                  <---------- NOTE: it picks up entire line till the line breaks (anything before 'enter')

//example of string:

// #include<iostream>                                                       #include<iostream>
// using namespace std;                                                     using namespace std;
// int main() {                                                             int main() {
//     string s;                                                                string s1, s2;
//     cin >> s;       <--- input: Hey Abhi  output: Hey           &           cin >> s1 >> s2;  <--- input:Hey abhi
//     cout << s;      ---> output: Hey                                        cout << s1 << " " << s2; ---> output: Hey abhi
//     return 0;                                                                return 0;
// }  

// example of getline:

// #include<iostream>
// using namespace std;
// int main() {
//     string str;
//     getline(cin, str);    <---input: Pandey 7896 Abhigyan    NOTE: Yes! I am shocked too, how the hell did 7896 pass through
//     cout << str;          --->output: Pandey 7896 Abhigyan         notice the above NOTE, in front of getline, 'picks entire line'
//     return 0;
// }

//===============================================================================================================================

// char          There are 256 charecters in english dictionary, char can store all of them. example: 'h' 'g' 'a' etc.
//               Format: char variable;     OR     char variable = 'any single charector you wanna assign'    NOTE: ' ' for charector
