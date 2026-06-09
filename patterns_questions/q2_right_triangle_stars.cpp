#include<bits/stdc++.h> // including the bits/stdc++.h library for standard input/output and other functions
using namespace std; // using the standard namespace to avoid prefixing standard library elements
// blank line for readability
// Pattern 2: Right-Angled Triangle of Stars (increasing rows) // describing the pattern to be printed
// Output (n=4): // explaining the expected output
// * // example output for n=4
// * * // example output for n=4
// * * * // example output for n=4
// * * * * // example output for n=4
// blank line for readability
int main(){ // starting the main function where program execution begins
    int n; // declaring an integer variable n to store the number of rows
    cin >> n; // taking input from the user and storing it in n
    for (int i = 1; i <= n; i++){ // starting a for loop to iterate over each row
        for(int j = 1; j <= i; j++){ // starting a nested for loop to print stars in each row
            cout << "* "; // printing a star followed by a space
        }
        cout << endl; // moving to the next line after each row
    }
    // blank line for readability
} 
// blank line for readability