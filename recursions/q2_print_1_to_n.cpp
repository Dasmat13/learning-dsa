// This is a comment explaining the purpose of the file: print numbers from 1 to n
// blank line for readability
// Including the bits/stdc++.h library to use various standard functions
#include<bits/stdc++.h> 
// Using the standard namespace to avoid prefixing standard library elements
using namespace std; 
// blank line for readability
// Defining a function f that takes two integer parameters: i and n
void f(int i , int n){
    // This is the base condition to stop the recursion when i exceeds n
    if(i > n){
        // Returning from the function to stop the recursion
        return;
    }
    // blank line for readability
    // This is the recursive case when i is less than or equal to n
    else{
        // Printing the current value of i
        cout << i<< endl;
        // Recursive call to function f with i incremented by 1
        f(i + 1, n);
    }
    // blank line for readability
}

// This is the main function where program execution begins
int main(){
    // Declaring an integer variable n to store user input
    int n ;
    // Reading an integer from the user and storing it in n
    cin >> n;
    // Calling function f with initial values of i and n
    f(1,n);
    // blank line for readability
} 
// blank line for readability
// ⚠️ NOTE: The code does not handle invalid inputs, such as non-integer or negative values.
// ⚠️ BUG: The code uses bits/stdc++.h which is non-standard and may not work on all compilers — FIX: Use individual headers for standard library elements instead.