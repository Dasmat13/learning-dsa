#include<bits/stdc++.h> // including the bits/stdc++.h library for standard input/output and other functions
using namespace std; // using the standard namespace for convenience

void print0(){ // defining a function print0 to demonstrate recursion
    int count = 0; // initializing a variable count to 0
    cout << count << endl; // printing the current value of count
    count++; // incrementing the count variable
    print0(); // recursive call to print0, which will cause a stack overflow // ⚠️ BUG: This function will cause a stack overflow because it has no base case — FIX: Add a base case to stop the recursion
}
void print1(int count){ // defining a function print1 to demonstrate recursion with a base case
    if(count == 7){ // checking if the count has reached 7
        return ; // if true, returning from the function to stop recursion
    }
    else{ // if false, proceeding with the rest of the function
        cout << count << endl; // printing the current value of count
        print1(count + 1); // recursive call to print1 with incremented count
    }
}

// void print2(){ // commented out function print2, not being used
//     if(count == 5){ // checking if the count has reached 5, but count is not defined in this scope // ⚠️ BUG: Variable count is not defined — FIX: Define count or pass it as a parameter
//         return ; // if true, returning from the function to stop recursion
//     }
//     else{ // if false, proceeding with the rest of the function
//         cout << count << endl; // printing the current value of count, but count is not defined // ⚠️ BUG: Variable count is not defined — FIX: Define count or pass it as a parameter
//         count++; // incrementing the count variable, but count is not defined // ⚠️ BUG: Variable count is not defined — FIX: Define count or pass it as a parameter
//         print2(); // recursive call to print2
//     }
// }

/*
🔁 PRINT n → 1 (REVERSE ORDER) // comment explaining the purpose of the following code
// blank line for readability
Method 1 (Simple Recursion): // comment explaining the method
- Print first, then call recursion // comment explaining the approach
*/
// print(i); // printing the value of i, but i is not defined // ⚠️ BUG: Variable i is not defined — FIX: Define i or pass it as a parameter
// f(i-1); // calling function f with i-1 as argument, but f is not defined // ⚠️ BUG: Function f is not defined — FIX: Define function f

/*
Method 2 (Backtracking): // comment explaining the method
- Go deep first, then print while coming back // comment explaining the approach
*/
// f(i+1); // calling function f with i+1 as argument, but f is not defined // ⚠️ BUG: Function f is not defined — FIX: Define function f
// print(i); // printing the value of i, but i is not defined // ⚠️ BUG: Variable i is not defined — FIX: Define i or pass it as a parameter

/*
🧠 Rule: // comment explaining the rule
- Print BEFORE recursion → Reverse (n to 1) // comment explaining the rule
- Print AFTER recursion → Reverse (using backtracking with i+1) // comment explaining the rule
*/

/*
🔁 RECURSION PRINTING TEMPLATES // comment explaining the purpose of the following code
// blank line for readability
---------------------------------- // separator line
1️⃣ Print 1 → n (Simple Recursion) // comment explaining the method
---------------------------------- // separator line
void f(int i, int n){ // defining a function f to demonstrate recursion
    if(i > n) return; // checking if i is greater than n and returning if true

    cout << i << " "; // printing the value of i
    f(i+1, n); // recursive call to f with i+1 and n as arguments
}
// blank line for readability
Call: f(1, n) // comment explaining how to call the function
// blank line for readability
---------------------------------- // separator line
2️⃣ Print n → 1 (Simple Recursion) // comment explaining the method
---------------------------------- // separator line
void f(int i, int n){ // defining a function f to demonstrate recursion
    if(i < 1) return; // checking if i is less than 1 and returning if true

    cout << i << " "; // printing the value of i
    f(i-1, n); // recursive call to f with i-1 and n as arguments
}
// blank line for readability
Call: f(n, n) // comment explaining how to call the function
// blank line for readability
---------------------------------- // separator line
3️⃣ Print 1 → n (Backtracking) // comment explaining the method
---------------------------------- // separator line
void f(int i, int n){ // defining a function f to demonstrate recursion
    if(i < 1) return; // checking if i is less than 1 and returning if true

    f(i-1, n); // recursive call to f with i-1 and n as arguments
    cout << i << " "; // printing the value of i after recursion
}
// blank line for readability
Call: f(n, n) // comment explaining how to call the function
// blank line for readability
---------------------------------- // separator line
4️⃣ Print n → 1 (Backtracking) // comment explaining the method
---------------------------------- // separator line
void f(int i, int n){ // defining a function f to demonstrate recursion
    if(i > n) return; // checking if i is greater than n and returning if true

    f(i+1, n); // recursive call to f with i+1 and n as arguments
    cout << i << " "; // printing the value of i after recursion
}
// blank line for readability
Call: f(1, n) // comment explaining how to call the function
// blank line for readability
---------------------------------- // separator line
// blank line for readability
🧠 GOLDEN RULE: // comment explaining the rule
- Print BEFORE recursion → normal flow // comment explaining the rule
- Print AFTER recursion → reverse (backtracking) // comment explaining the rule
// blank line for readability
---------------------------------- // separator line
// blank line for readability
⚡ MEMORY TRICK: // comment explaining the memory trick
👉 "Before = Forward" // comment explaining the trick
👉 "After = Reverse" // comment explaining the trick
*/