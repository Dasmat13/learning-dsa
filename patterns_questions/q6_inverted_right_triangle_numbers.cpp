// Including the bits/stdc++.h header file to access all standard library functions
#include<bits/stdc++.h> 
// Using the standard namespace to avoid prefixing standard library elements
using namespace std; 
// 
// blank line for readability
// 
// Pattern 6: Inverted Right Triangle with column numbers, describing the problem
// Output (n=4):, explaining the expected output
// 1 2 3 4, example output for n=4
// 1 2 3, example output for n=4
// 1 2, example output for n=4
// 1, example output for n=4
// 
// blank line for readability
int main(){ // Main function where program execution begins
    int n; // Declaring variable n to store user input
    cin >> n; // Reading user input and storing it in variable n
    for (int i = 1; i <= n; i++){ // Outer loop to iterate from 1 to n
        for(int j = 1; j <= n-i+1; j++){ // Inner loop to print numbers in each row
            cout << j << " "; // Printing the current number followed by a space
        } 
        // 
        // blank line for readability
        cout << endl; // Moving to the next line after each row
    } 
    // 
    // blank line for readability
} 
// 
// blank line for readability
// ⚠️ NOTE: The code does not handle invalid inputs, it assumes the user will enter a positive integer. 
// ⚠️ BUG: The code does not validate user input, FIX: Add input validation to handle non-integer or negative inputs.