// This is the start of the C++ code file
// #include<bits/stdc++.h> // This line is commented out, it's not recommended to use this header
// using namespace std; // This line is commented out, it's not recommended to use the entire std namespace
//  int main(){ // This line is commented out, it's the start of the main function
//     string s; // This line is commented out, it declares a string variable
//     cin >> s; // This line is commented out, it reads a string from the input
//     //pre compute // This line is commented out, it's a comment explaining the purpose of the code
//     int hash[26] = {0}; // This line is commented out, it declares and initializes an array of size 26
//     for(int i =0 ; i< s.size(); i++){ // This line is commented out, it starts a for loop to traverse the string
//         hash[s[i] - 'a']++; // This line is commented out, it increments the count of a character in the hash array
//     }
//     int q; // This line is commented out, it declares an integer variable
//     cin >> q; // This line is commented out, it reads an integer from the input
//     while(q--){ // This line is commented out, it starts a while loop that runs q times
//         char c; // This line is commented out, it declares a character variable
//         cin >> c; // This line is commented out, it reads a character from the input
//         //fetch // This line is commented out, it's a comment explaining the purpose of the code
//         cout << "the number of time " << c << " " << "comes: " << hash[c-'a'] << endl; // This line is commented out, it prints the frequency of a character
//     }
//     return 0; // This line is commented out, it returns 0 to indicate the end of the program
//  }

// Include the necessary header files
#include<bits/stdc++.h> // Including the bits/stdc++.h header file
using namespace std; // Using the standard namespace

// Start of the main function
int main(){ // This is the start of the main function

    // Blank line for readability
    // 

    // ================= STEP 1: INPUT ================= // This is a comment explaining the purpose of the code
    // Take input string // This is a comment explaining the purpose of the code
    string s; // Declaring a string variable
    cin >> s; // Reading a string from the input

    // Blank line for readability
    // 

    // ================= STEP 2: PRE-COMPUTATION ================= // This is a comment explaining the purpose of the code
    // Create hash array of size 26 for lowercase letters (a–z) // This is a comment explaining the purpose of the code
    // Initialize all values to 0 // This is a comment explaining the purpose of the code
    int hash[26] = {0}; // Declaring and initializing an array of size 26

    // Traverse the string // This is a comment explaining the purpose of the code
    for(int i = 0; i < s.size(); i++){ // Starting a for loop to traverse the string

        // Convert character to index: // This is a comment explaining the purpose of the code
        // 'a' -> 0, 'b' -> 1, ..., 'z' -> 25 // This is a comment explaining the purpose of the code
        // Increase count of that character // This is a comment explaining the purpose of the code
        hash[s[i] - 'a']++; // Incrementing the count of a character in the hash array
    }

    // Blank line for readability
    // 

    // ================= STEP 3: QUERY PROCESS ================= // This is a comment explaining the purpose of the code
    // Take number of queries // This is a comment explaining the purpose of the code
    int q; // Declaring an integer variable
    cin >> q; // Reading an integer from the input

    // Loop runs q times // This is a comment explaining the purpose of the code
    while(q--){ // Starting a while loop that runs q times

        char c; // Declaring a character variable
        cin >> c; // Reading a character from the input

        // Fetch frequency in O(1) // This is a comment explaining the purpose of the code
        cout << "the number of time " << c // Printing the frequency of a character
             << " comes: " << hash[c - 'a'] << endl; // Printing the frequency of a character
        // ;;;;; // These semicolons are unnecessary and may cause a compilation error
        // ⚠️ BUG: Unnecessary semicolons — FIX: Remove them
    }

    // Blank line for readability
    // 

    // ================= STEP 4: END ================= // This is a comment explaining the purpose of the code
    return 0; // Returning 0 to indicate the end of the program
}

// Blank line for readability
// 

/*
// This is a multi-line comment
================= ⚠️ MISTAKES ================= // This is a comment explaining the purpose of the code

1. Using hash[c] instead of hash[c - 'a'] // This is a comment explaining a potential mistake
   ❌ Wrong: hash[c] // This is a comment explaining a wrong approach
   ✅ Correct: hash[c - 'a'] // This is a comment explaining the correct approach

2. Works ONLY for lowercase letters (a–z) // This is a comment explaining a limitation of the code
   If input has uppercase → wrong result // This is a comment explaining a potential issue

3. Out of bounds error if character is not between 'a'–'z' // This is a comment explaining a potential issue
// ⚠️ BUG: Out of bounds error — FIX: Add error checking


// Blank line for readability
// 

================= 💡 TIPS ================= // This is a comment explaining the purpose of the code

1. ASCII trick: // This is a comment explaining a tip
   'a' = 97, 'b' = 98 // This is a comment explaining the ASCII values of characters
   So: index = char - 'a' // This is a comment explaining the calculation of the index

2. Always remember: // This is a comment explaining a tip
   index = s[i] - 'a' // This is a comment explaining the calculation of the index

3. Best for multiple queries (very fast lookup) // This is a comment explaining a benefit of the code


// Blank line for readability
// 

================= 🚀 OPTIMIZATION ================= // This is a comment explaining the purpose of the code

1. If string has uppercase + lowercase: // This is a comment explaining a scenario
   use: // This is a comment explaining a solution
       int hash[256] = {0}; // This is a comment explaining the declaration of a larger hash array
       hash[s[i]]++; // This is a comment explaining the increment of the count of a character

2. If characters are unknown / mixed: // This is a comment explaining a scenario
   use unordered_map: // This is a comment explaining a solution
       unordered_map<char, int> mp; // This is a comment explaining the declaration of an unordered map
       for(char c : s){ // This is a comment explaining the iteration over the string
           mp[c]++; // This is a comment explaining the increment of the count of a character
       }

3. Time Complexity: // This is a comment explaining the time complexity of the code
   Precompute: O(n) // This is a comment explaining the time complexity of the precomputation
   Query: O(1) // This is a comment explaining the time complexity of the query
*/