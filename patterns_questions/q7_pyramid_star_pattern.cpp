#include<bits/stdc++.h> // including the bits/stdc++.h library for standard input/output operations
using namespace std; // using the standard namespace for convenience
// Pattern 7: Pyramid / Centered Triangle of Stars // describing the pattern to be printed
// Output (n=4): // explaining the expected output
//    * // example output for n=4
//   *** // example output for n=4
//  ***** // example output for n=4
// ******* // example output for n=4
// blank line for readability
int main(){ // declaring the main function where program execution begins
    int n; // declaring a variable to store the number of rows
    cin >> n; // taking input from the user for the number of rows
    for(int i = 0; i < n; i++){ // starting a loop to iterate over each row
        for(int j = 0; j < n-i-1; j++){ // starting a nested loop to print spaces
            cout << " "; // printing a space
        }
        for(int j = 0; j < 2*i+1; j++){ // starting a nested loop to print stars
            cout << "*"; // printing a star
        }
        cout << endl; // moving to the next line
    }
    // blank line for readability
} 
// blank line for readability