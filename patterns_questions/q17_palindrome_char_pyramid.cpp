#include<bits/stdc++.h> // including the bits/stdc++.h library for standard input/output and other functions
using namespace std; // using the standard namespace to avoid prefixing standard library elements
// blank line for readability
// Pattern 17: Palindrome Character Pyramid // describing the pattern to be printed
// Output (n=3): // example output for n = 3
//    A // first line of the example output
//   ABA // second line of the example output
//  ABCBA // third line of the example output
// ABCDCBA // fourth line of the example output
// blank line for readability
int main(){ // main function where program execution begins
    int n; // declaring variable n to store the number of lines
    cin >> n; // taking input from the user and storing it in n
    for(int i = 0; i <= n; i++){ // loop to iterate over each line of the pattern
        // spaces // section to print spaces before the palindrome characters
        for(int j = 0; j <= n-i-1; j++) // loop to print spaces
            cout << " "; // printing a space
        // palindrome chars // section to print the palindrome characters
        char ch = 'A'; // initializing the character to be printed
        int breakpoint = (2*i+1)/2; // calculating the middle point of the palindrome
        for(int j = 1; j <= 2*i+1; j++){ // loop to print the palindrome characters
            cout << ch; // printing the current character
            if(j <= breakpoint) // checking if we are in the first half of the palindrome
                ch++; // incrementing the character for the next iteration
            else // we are in the second half of the palindrome
                ch--; // decrementing the character for the next iteration
        }
        cout << endl; // moving to the next line
    }
    // blank line for readability
} // end of the main function
// blank line for readability