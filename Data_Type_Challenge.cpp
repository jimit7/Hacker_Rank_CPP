#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int j;
    double e;
    string k,l;
    cin>>j;
    cin>>e;
    cin.ignore();  //ignores an end of line character 
    getline(cin, k); 
     j=i+j;
     e= d+e;
     l=s+k;
    

cout<<j<<"\n";

std::cout << std::fixed<< std::setprecision(1) << e << '\n';
cout<< l;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
