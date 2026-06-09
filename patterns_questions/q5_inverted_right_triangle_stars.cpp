#include<bits/stdc++.h> // including the bits/stdc++.h library for standard input/output operations
using namespace std; // using the standard namespace to avoid prefixing standard library elements
// Pattern 5: Inverted Right-Angled Triangle of Stars // describing the pattern to be printed
// Output (n=4): // explaining the expected output for a specific input
// * * * * // example output line 1
// * * * // example output line 2
// * * // example output line 3
// * // example output line 4
// blank line for readability
int main(){ // declaring the main function where program execution begins
    int n; // declaring an integer variable to store the input size
    cin >> n; // reading the input size from the user
    for (int i = 1; i <= n; i++){ // starting a loop to iterate over each row of the pattern
        for(int j = 0; j < n-i+1; j++){ // starting a nested loop to print stars in each row
            cout << "* "; // printing a star followed by a space
        }
        cout << endl; // moving to the next line after printing each row
    }
    // blank line for readability
} 
// blank line for readability