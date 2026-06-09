#include<bits/stdc++.h> // including the bits/stdc++.h library for standard input/output and other functions
using namespace std; // using the standard namespace to avoid prefixing standard library elements
// Pattern 3: Right Triangle with column numbers (1 2 3...) // describing the pattern to be printed
// Output (n=4): // explaining the expected output
// 1 // sample output line 1
// 12 // sample output line 2
// 123 // sample output line 3
// 1234 // sample output line 4
// blank line for readability
int main(){ // declaring the main function where program execution begins
    int n; // declaring an integer variable to store the input number of rows
    cin >> n; // reading the input number of rows from the user
    for (int i = 1; i <= n; i++){ // starting an outer loop to iterate over each row
        for(int j = 1; j <= i; j++){ // starting an inner loop to iterate over each column in the current row
            cout << j; // printing the current column number
        }
        cout << endl; // moving to the next line after each row
    }
    // blank line for readability
} 
// blank line for readability