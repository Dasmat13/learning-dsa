// This is a comment explaining the purpose of the code
// print 1 to n in reverse order
// Including the bits/stdc++.h library for standard input/output and other functions
#include<bits/stdc++.h>
// Using the standard namespace to avoid prefixing standard library elements
using namespace std;

// Defining a function f that takes two integer parameters, i and n
void f(int i, int n){   
    // Checking the base condition for the recursion
    if(i < 1){
        // Here i is less than 1, so we return to stop the recursion
        return;
    }
    // If the base condition is not met, we execute the else block
    else{
        // Printing the current value of i
        cout << i << endl;
        // Recursively calling function f with i decremented by 1 and n unchanged
        f(i-1,n);       
    }
}
// Starting the main function where program execution begins
int main(){
    // Declaring an integer variable n to store user input
    int n;
    // Reading an integer from the user and storing it in n
    cin >> n;
    // Calling function f with n as both arguments to start the recursion
    f(n,n);
} 
// blank line for readability
// End of the program