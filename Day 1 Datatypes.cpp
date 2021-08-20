#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int integer;
    double doub;
    string str;

    // Read and save an integer, double, and String to your variables.
    string tmp;

    getline(cin, tmp);
    integer = stoi(tmp);

    getline(cin, tmp);
    doub = stod(tmp);

    getline(cin, str );

    // Print the sum of both integer variables on a new line.
    
    cout<<i + integer <<endl;

    // Print the sum of the double variables on a new line.
    // Used setprecision(1) to get at least 1 digit after decimal point

    cout<<fixed<<setprecision(1)<<d + doub<<endl;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << str  << endl;


    return 0;
}