#include<bits/stdc++.h> // including the bits/stdc++.h header file for standard library functions
// blank line for readability
using namespace std; // using the standard namespace to avoid prefixing standard library elements

// function declaration for recursive function f
void f(int i ,int n){ // function f takes two integer parameters i and n
    // conditional statement to check if i is greater than n
    if(i > n){ // if i is greater than n, the function will terminate
        return; // returning from the function without any output
    }
    // blank line for readability
    else{ // if i is not greater than n, the function will proceed
        // recursive call to function f with incremented i
        f(i+1,n); // calling function f with i+1 and n
        // printing the current value of i
        cout << i << endl; // printing i followed by a newline character
    }
    // blank line for readability
}

// main function where program execution begins
int main(){ // main function returns an integer
    // declaring an integer variable n
    int n; // variable to store the input number
    // reading an integer from standard input
    cin >> n; // taking input from the user and storing it in n
    // calling function f with initial values
    f(1,n); // calling function f with i=1 and the input number n
    // blank line for readability
} 
// blank line for readability