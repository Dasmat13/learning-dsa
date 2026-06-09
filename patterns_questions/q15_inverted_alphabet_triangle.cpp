#include<bits/stdc++.h> // including the bits/stdc++.h library for standard input/output and other functions
using namespace std; // using the standard namespace to avoid prefixing standard library elements
// blank line for readability
// Pattern 15: Inverted Alphabet Triangle (ABCD, ABC, AB, A) // describing the pattern to be printed
// Output (n=4): // explaining the expected output
// A B C D // example output line 1
// A B C // example output line 2
// A B // example output line 3
// A // example output line 4
// blank line for readability
int main(){ // starting the main function where program execution begins
    int n; // declaring an integer variable to store the input size
    cin >> n; // taking the input size from the user
    for(int i = 0; i <= n; i++){ // starting an outer loop to iterate over each row of the pattern
        for(char ch = 'A'; ch <= 'A' + n - i; ch++){ // starting an inner loop to iterate over each character in the row
            cout << ch << " "; // printing the current character followed by a space
        } // closing the inner loop
        cout << endl; // moving to the next line after each row
    } // closing the outer loop
} // closing the main function
// blank line for readability
// ⚠️ BUG: The loop condition should be i < n instead of i <= n to avoid an extra blank line at the end — FIX: for(int i = 0; i < n; i++){
// for(int i = 0; i < n; i++){ // starting an outer loop to iterate over each row of the pattern, corrected to avoid extra blank line
// rest of the code remains the same, but the above line should replace the original loop condition for correct output