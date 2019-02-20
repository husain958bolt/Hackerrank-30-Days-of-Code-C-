#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int var_int;
    double var_double;
    string str;
    
    // Read and save an integer, double, and String to your variables.
    cin >> var_int;
    cin >> var_double;
    getline(cin >> ws,str);

    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout << (var_int + i) << endl;

    // Print the sum of the double variables on a new line.
    var_double += d;
    cout << fixed << setprecision(1) << var_double <<endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    string str_new = s + str;
    cout << str_new << endl;

    return 0;
}
