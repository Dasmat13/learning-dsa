#include<bits/stdc++.h> // including the bits/stdc++.h header file for standard library functions
using namespace std; // using the standard namespace to avoid prefixing standard library elements
// blank line for readability
// Pattern 4: Right Triangle with repeated row number // describing the pattern to be printed
// Output (n=4): // explaining the expected output
// 1 // sample output line 1
// 22 // sample output line 2
// 333 // sample output line 3
// 4444 // sample output line 4
// blank line for readability
int main(){ // declaring the main function where program execution begins
    int n; // declaring an integer variable to store the input number of rows
    cin >> n; // reading the input number of rows from the user
    for (int i = 1; i <= n; i++){ // starting a loop to iterate over each row
        for(int j = 1; j <= i; j++){ // starting a nested loop to print the row number
            cout << i; // printing the current row number
        }
        cout << endl; // moving to the next line after printing each row
    }
    // blank line for readability
} 
// blank line for readability