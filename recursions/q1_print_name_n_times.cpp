#include<bits/stdc++.h> // including the bits/stdc++.h library for standard input/output functions
using namespace std; // using the standard namespace to avoid prefixing standard library elements
// print names n times using recursion // describing the purpose of the code
// blank line for readability
void name(int i , int n){ // declaring a function 'name' with two integer parameters
    // ..................... // empty line, possibly for separation or readability
    if(i>n){ // checking if 'i' is greater than 'n'
        return; // returning from the function if the condition is met
    }
    // .......................base condition // describing the base case of the recursion
    else{ // executing the code if 'i' is not greater than 'n'
        cout << "dasmat" <<endl; // printing "dasmat" to the console
        name(i+1,n); // recursively calling the 'name' function with incremented 'i'

    }
}
// blank line for readability
int main(){ // declaring the main function where program execution begins
    int n; // declaring an integer variable 'n'
    cin >> n; // reading an integer from the console and storing it in 'n'
    name(1,n); // calling the 'name' function with initial 'i' as 1 and 'n' as input
} 
// blank line for readability
// ⚠️ NOTE: The code does not handle cases where the user inputs a non-positive or non-integer value for 'n'. 
// ⚠️ BUG: The code does not validate user input. — FIX: Add input validation to handle such cases.