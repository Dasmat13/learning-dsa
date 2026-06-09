// check if the string is palindrome or not 
// blank line for readability
#include<bits/stdc++.h>   // includes all standard libraries
using namespace std;      // uses the standard namespace for convenience

// defines a recursive function to check for palindrome
bool f(int i , string &s){ // i is the current index, s is the input string
    // checks the base condition for recursion
    if(i >= s.size() /2){ // if i reaches the middle of the string
        return true;       // returns true, indicating a palindrome
    }
    // checks for mismatch between characters
    if(s[i] != s[s.size() - i - 1]){ // compares current character with its mirror
        return false;                  // returns false, indicating not a palindrome
    }
    else{                              // if characters match
        // recursively calls the function for the next pair
        return f(i+1,s);                // moves to the next index
    }
}

int main(){                            // main function where execution begins
    string s;                         // declares a string variable
    cin >> s;                         // takes input string from the user
    // calls the recursive function starting from index 0
    cout << f(0,s);                   // prints the result (1 for palindrome, 0 for not)
    return 0;                          // returns 0 to indicate successful execution
}
  
// blank line for readability
// Check if a string is palindrome or not using recursion
// blank line for readability
#include<bits/stdc++.h>   // includes all standard libraries
using namespace std;      // uses the standard namespace for convenience

// defines a recursive function to check for palindrome
// i → current index (starting from 0)
// s → reference to string (no copy, efficient)
bool f(int i , string &s){ // i is the current index, s is the input string

    // checks the base condition for recursion
    // When i reaches middle of string
    // means all characters matched successfully
    if(i >= s.size() / 2){ // if i reaches the middle of the string
        return true;       // returns true, indicating a palindrome
    }

    // checks for mismatch between characters
    // compare current character with its mirror character
    // s[i] ↔ s[n-i-1]
    if(s[i] != s[s.size() - i - 1]){ // compares current character with its mirror
        return false;                  // returns false, indicating not a palindrome
    }
    else{                              // if characters match
        // recursively calls the function for the next pair
        // check next pair
        return f(i+1, s);               // moves to the next index
    }
}

int main(){                            // main function where execution begins
    string s;                         // declares a string variable
    cin >> s;                         // takes input string from the user
    // calls the recursive function starting from index 0
    // It returns true (1) or false (0)
    cout << f(0, s);                  // prints the result (1 for palindrome, 0 for not)

    return 0;                          // returns 0 to indicate successful execution
} 
// blank line for readability