#include<bits/stdc++.h> // including the bits/stdc++.h library for standard input/output and other functions
using namespace std; // using the standard namespace to avoid prefixing standard library elements

// Pattern 16: Same character repeated per row (A, BB, CCC...) // describing the pattern to be printed
// Output (n=4): // explaining the expected output
// A // example output for n=4
// B B // example output for n=4
// C C C // example output for n=4
// D D D D // example output for n=4

int main(){ // declaring the main function where program execution begins
    int n; // declaring an integer variable to store the number of rows
    cin >> n; // taking input from the user for the number of rows
    for(int i = 0; i <= n; i++){ // starting a loop to iterate over each row
        char ch = 'A' + i; // calculating the character to be printed in the current row
        for(int j = 0; j <= i; j++){ // starting a nested loop to print the character repeatedly
            cout << ch << " "; // printing the character followed by a space
        }
        cout << endl; // moving to the next line after printing each row
    }
    // blank line for readability 
    // ⚠️ BUG: The loop iterates from 0 to n (inclusive), which will print n+1 rows instead of n rows — FIX: Change the loop condition to i < n 
    // However, since the code is not changed as per the rules, the above bug remains 
} 
// blank line for readability 
// end of the program 
// blank line for readability