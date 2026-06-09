#include<bits/stdc++.h> // including the bits/stdc++.h library for standard input/output operations
using namespace std; // using the standard namespace for convenience
// Pattern 8: Inverted Pyramid / Centered Triangle of Stars // describing the pattern to be printed
// Output (n=4): // explaining the expected output for a specific input
// ******* // example output line 1
//  ***** // example output line 2
//   *** // example output line 3
//    * // example output line 4
// blank line for readability
int main(){ // starting the main function where program execution begins
    int n; // declaring an integer variable to store the input size
    cin >> n; // reading the input size from the user
    for(int i = 0; i < n; i++){ // starting a loop to iterate over each row of the pattern
        for(int j = 0; j < i; j++){ // starting a nested loop to print leading spaces
            cout << " "; // printing a space character
        }
        for(int j = 0; j < 2*n-(2*i+1); j++){ // starting another nested loop to print stars
            cout << "*"; // printing a star character
        }
        cout << endl; // moving to the next line
    }
    // blank line for readability
} // ending the main function