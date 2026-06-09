#include<bits/stdc++.h> // including the bits/stdc++.h library for standard input/output operations
using namespace std; // using the standard namespace to avoid prefixing standard library elements
// Pattern 1: N x N Square of Stars // describing the pattern to be printed
// Output (n=4): // explaining the expected output
// * * * * // example output for n = 4
// * * * * // example output for n = 4
// * * * * // example output for n = 4
// * * * * // example output for n = 4
// blank line for readability
int main(){ // declaring the main function where program execution begins
    int n; // declaring an integer variable to store the input size
    cin >> n; // reading the input size from the user
    for (int i = 0; i < n; i++){ // starting an outer loop to iterate over rows
        for(int j = 0; j < n; j++){ // starting an inner loop to iterate over columns
            cout << "* "; // printing a star followed by a space
        }
        cout << endl; // moving to the next line after each row
    }
    // blank line for readability
} // ending the main function