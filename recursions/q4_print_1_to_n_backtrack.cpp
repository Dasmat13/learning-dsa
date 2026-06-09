// This is a comment explaining the purpose of the file
// blank line for readability
// print 1 to n (by using backtrack) 
// including the bits/stdc++.h library for standard input/output and other functions
#include<bits/stdc++.h>
// using the standard namespace to avoid prefixing standard library elements
using namespace std;

// defining a function f that takes two integer parameters, i and n
void f(int i,int n){
    // checking if i is less than 1, which is the base case for the recursion
    if(i < 1){
        // returning from the function if the base case is met
        return;
    }
    // if the base case is not met, executing the else block
    else{
        // making a recursive call to function f with i-1 and n, going deeper first
        f(i-1, n);   // go deeper first
        // printing the value of i after the recursive call returns
        cout << i << endl; // print after return
    }
}

// defining the main function where program execution begins
int main(){
    // declaring an integer variable n to store user input
    int n;
    // reading an integer from the user and storing it in n
    cin >> n;
    // calling function f with n and n as arguments to start the recursion
    f(n,n);
}

// blank line for readability
/*
// starting a multi-line comment for recursion and backtracking notes
🔁 RECURSION & BACKTRACKING NOTES
// blank line for readability
// listing the key points of recursion and backtracking
1. Base Case:
   // explaining the purpose of the base case
   - Condition to stop recursion
   // explaining how the base case prevents infinite recursion
   - Prevents infinite calls
// blank line for readability
// explaining the recursive call
2. Recursive Call:
   // describing the recursive call
   - Function calls itself with smaller input
// blank line for readability
// explaining the backtracking concept
3. Backtracking Concept:
   // describing the backtracking process
   - First go deep (recursive call)
   // explaining what happens after the recursive call
   - Then do work while returning
// blank line for readability
----------------------------------
// blank line for readability
// explaining printing patterns
📌 Printing Patterns:
// blank line for readability
// explaining how to print 1 to n
👉 Print 1 to n:
   // making a recursive call with i-1
   f(i-1);
   // printing the value of i
   print(i);
   // explaining the process of printing 1 to n
   // Go till 0, print while coming back
// blank line for readability
// explaining how to print n to 1
👉 Print n to 1:
   // printing the value of i first
   print(i);
   // making a recursive call with i-1
   f(i-1);
   // explaining the process of printing n to 1
   // Print first, then go deeper
// blank line for readability
// explaining how to use increasing i (1 → n)
👉 Using increasing i (1 → n):
   // explaining the normal order of printing
   // Normal order
   print(i);
   // making a recursive call with i+1
   f(i+1);
   // blank line for readability
   // explaining the reverse order of printing using backtracking
   // Reverse order (backtracking)
   f(i+1);
   // printing the value of i after the recursive call
   print(i);
// blank line for readability
----------------------------------
// blank line for readability
// explaining the golden rule of recursion
🧠 Golden Rule:
// explaining the condition for normal order
- Print BEFORE recursion → Normal order
// explaining the condition for reverse order
- Print AFTER recursion → Reverse order
// blank line for readability
----------------------------------
// blank line for readability
// providing a final reminder about recursion and backtracking
⚡ Always remember:
// explaining what recursion is
- Recursion = function calling itself
// explaining what backtracking is
- Backtracking = "go deep, then print"
// blank line for readability
*/