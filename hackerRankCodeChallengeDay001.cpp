#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    int a;
    cin >> a;
    int sum1 = 0;
    sum1 = i + a;
    cout << sum1;
    cout << endl;
    
    // Print the sum of the double variables on a new line.
    double b;
    cin >> b;
    double sum2 = 0; 
    sum2 = d + b;
    printf("%.1lf", sum2);
    cout << endl;
    
    // Concatenate and print the String variables on a new line.
    cin.ignore();                   // to remove buffer memory.
    string c;
    getline(cin,c);
    cout << s + c;
    
    // The 's' variable above should be printed first.

    return 0;
}
