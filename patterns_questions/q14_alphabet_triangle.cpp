#include<bits/stdc++.h> // including the bits/stdc++.h library for standard input/output and other functions
using namespace std; // using the standard namespace to avoid prefixing standard library elements
// blank line for readability
// Pattern 14: Alphabet Triangle (A, AB, ABC...) // describing the pattern to be printed
// Output (n=4): // explaining the expected output
// A // first line of the expected output
// A B // second line of the expected output
// A B C // third line of the expected output
// A B C D // fourth line of the expected output
// blank line for readability
int main(){ // declaring the main function where program execution begins
    int n; // declaring an integer variable to store the number of rows
    cin >> n; // taking the number of rows as input from the user
    for(int i = 0; i <= n; i++){ // starting a loop to iterate over each row
        for(char ch = 'A'; ch <= 'A' + i; ch++){ // starting a nested loop to print characters in each row
            cout << ch << " "; // printing the current character followed by a space
        }
        // ⚠️ BUG: The loop iterates until i <= n, which will print n+1 rows instead of n rows — FIX: for(int i = 0; i < n; i++){
        cout << endl; // moving to the next line after printing each row
    }
} 
// blank line for readability