#include<bits/stdc++.h> // including the bits/stdc++.h library for standard input/output and other functions
using namespace std; // using the standard namespace to avoid prefixing standard library elements
// Pattern 10: Hourglass (Triangle + Inverted Triangle of Stars) // describing the pattern to be printed
// Output (n=4): // explaining the expected output for a specific input
// * // showing the first line of the expected output
// * * // showing the second line of the expected output
// * * * // showing the third line of the expected output
// * * * * // showing the fourth line of the expected output
// * * * * // showing the fifth line of the expected output
// * * * // showing the sixth line of the expected output
// * * // showing the seventh line of the expected output
// * // showing the eighth line of the expected output
// blank line for readability
int main(){ // starting the main function where program execution begins
    int n; // declaring an integer variable to store the input size
    cin >> n; // reading the input size from the user
    // Upper half (increasing) // describing the upper half of the pattern
    for(int i = 1; i <= n; i++){ // starting a loop to print the upper half of the pattern
        for(int j = 1; j <= i; j++) // starting a nested loop to print each line of the upper half
            cout << "* "; // printing a star followed by a space
        cout << endl; // moving to the next line
    }
    // Lower half (decreasing) // describing the lower half of the pattern
    for(int i = 1; i <= n; i++){ // starting a loop to print the lower half of the pattern
        for(int j = 1; j < n-i+1; j++) // starting a nested loop to print each line of the lower half
            cout << "* "; // printing a star followed by a space
        cout << endl; // moving to the next line
    }
    // blank line for readability
} // ending the main function
// blank line for readability