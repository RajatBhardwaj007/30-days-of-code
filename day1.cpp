#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    // Declare second integer, double, and String variables.
    int a;
    double b;
    string input;


    // Read and save an integer, double, and String to your variables.

    cin>>a;
    cin>>b;
    cin.ignore();
    getline(cin,input);
     // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.


    a=a+i;

    // Print the sum of both integer variablee.s on a new li
    cout << a<< endl;
    // Print the sum of the double variables on a new line
    printf("%.1f\n", d + b);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s ;
    cout << input << endl;


    return 0;
