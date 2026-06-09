#include<bits/stdc++.h> // including the bits/stdc++.h library for standard input/output and other functions
using namespace std; // using the standard namespace to avoid prefixing standard library elements
// blank line for readability
// Pattern 13: Sequential Number Triangle (continuous count) // describing the pattern to be printed
// Output (n=4): // explaining the expected output
// 1 // example output for n=4
// 2 3 // example output for n=4
// 4 5 6 // example output for n=4
// 7 8 9 10 // example output for n=4
// blank line for readability
int main(){ // declaring the main function where program execution begins
    int n; // declaring a variable to store the number of rows
    cin >> n; // taking input from the user for the number of rows
    int num = 1; // initializing a variable to keep track of the current number to be printed
    for(int i = 1; i <= n; i++){ // outer loop to iterate over each row
        for(int j = 1; j <= i; j++){ // inner loop to iterate over each column in the current row
            cout << num << " "; // printing the current number followed by a space
            num++; // incrementing the current number for the next iteration
        }
        cout << endl; // moving to the next line after each row
    }
    // blank line for readability
} 
// blank line for readability