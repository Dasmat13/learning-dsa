#include<bits/stdc++.h> // including the bits/stdc++.h library for standard input/output operations
using namespace std; // using the standard namespace for convenience

// Pattern 9: Diamond (Pyramid + Inverted Pyramid) // describing the pattern to be printed
// Output (n=4): // explaining the expected output
//    * // example output line 1
//   *** // example output line 2
//  ***** // example output line 3
// ******* // example output line 4
// ******* // example output line 5
//  ***** // example output line 6
//   *** // example output line 7
//    * // example output line 8

int main(){ // starting the main function where program execution begins
    int n; // declaring an integer variable to store the input size
    cin >> n; // reading the input size from the user
    // Upper half (pyramid) // describing the upper half of the diamond pattern
    for(int i = 0; i < n; i++){ // starting a loop to print the upper half of the diamond
        for(int j = 0; j < n-i-1; j++) cout << " "; // printing spaces for alignment
        for(int j = 0; j < 2*i+1; j++) cout << "*"; // printing stars for the upper half
        cout << endl; // moving to the next line
    }
    // Lower half (inverted pyramid) // describing the lower half of the diamond pattern
    for(int i = 0; i < n; i++){ // starting a loop to print the lower half of the diamond
        for(int j = 0; j < i; j++) cout << " "; // printing spaces for alignment
        for(int j = 0; j < 2*n-(2*i+1); j++) cout << "*"; // printing stars for the lower half
        cout << endl; // moving to the next line
    }
} 
// blank line for readability 
// end of the program