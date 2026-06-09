#include<bits/stdc++.h> // including the bits/stdc++.h library for standard input/output and other functions
using namespace std; // using the standard namespace to avoid prefixing standard library elements

int f(int n){ // defining a function f that takes an integer n as input
    if(n <= 1){ // checking if n is less than or equal to 1
        return n; // returning n if the condition is true
    }
    else{ // if the condition is false, executing the else block
        int last = f(n-1); // recursively calling function f with n-1 and storing the result in last
        int slast = f(n-2); // recursively calling function f with n-2 and storing the result in slast

        return last + slast; // returning the sum of last and slast
    }
}

// blank line for readability
int main(){ // defining the main function where program execution begins
    int n; // declaring an integer variable n
    cin >> n; // taking an integer input from the user and storing it in n
    cout << f(n); // calling function f with n and printing the result
    // blank line for readability 
    // ⚠️ BUG: the program does not handle cases where n is a negative number — FIX: add a condition to handle negative numbers
} 
// blank line for readability