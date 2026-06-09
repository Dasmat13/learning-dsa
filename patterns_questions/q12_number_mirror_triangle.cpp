#include<bits/stdc++.h> // including the bits/stdc++.h library for standard input/output and other functions
using namespace std; // using the standard namespace to avoid prefixing standard library elements
// blank line for readability
// Pattern 12: Number Mirror Triangle // describing the pattern to be printed
// Output (n=4): // example output for n = 4
// 1      1 // example output line 1
// 12    21 // example output line 2
// 123  321 // example output line 3
// 12344321 // example output line 4
int main(){ // main function where program execution begins
    int n; // declaring variable n to store the number of rows
    cin >> n; // taking input from user and storing it in n
    for(int i = 1; i <= n; i++){ // loop to iterate over each row
        // left numbers // printing numbers from 1 to i
        for(int j = 1; j <= i; j++) // loop to print numbers from 1 to i
            cout << j; // printing the current number
        // spaces in middle // printing spaces in the middle
        for(int j = 1; j <= 2*n-(i*2); j++) // loop to print spaces
            cout << " "; // printing a space
        // right numbers (mirror) // printing numbers from i to 1
        for(int j = i; j >= 1; j--) // loop to print numbers from i to 1
            cout << j; // printing the current number
        cout << endl; // moving to the next line
    } // end of the outer loop
} // end of the main function
// blank line for readability