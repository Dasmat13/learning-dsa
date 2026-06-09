// Including the necessary header file for input/output and other standard library functions
#include<bits/stdc++.h>
// Using the standard namespace to avoid prefixing standard library elements
using namespace std;

// Main function where program execution begins
int main(){
   // Declaring a string variable to store the input string
   string s;
   // Taking input string from the user
   cin >> s;
   
   // Blank line for readability
   
   // Pre-computing the frequency of each character in the string
   // Creating a hash array of size 256 to cover all ASCII characters
   int hash[256] = {0};
   // Iterating over each character in the string
   for(int i = 0; i<s.size();i++){
    // Incrementing the count of the current character in the hash array
    hash[s[i]]++;
   }

   // Declaring a variable to store the number of queries
   int query;
   // Taking the number of queries from the user
   cin >> query;
   // Looping through each query
   while (query--)
   {
    /* code */
    // Declaring a character variable to store the query character
    char c;
    // Taking the query character from the user
    cin >> c;
     // Printing the frequency of the query character
     cout << "the number of time " << c 
             << " comes: " << hash[c] << endl;
    }

   }
   

// Including the necessary header file for input/output and other standard library functions
#include<bits/stdc++.h>
// Using the standard namespace to avoid prefixing standard library elements
using namespace std;

// Main function where program execution begins
int main(){

    // Blank line for readability
    // ================= STEP 1: INPUT =================
    // Taking input string from the user
    string s;
    // Reading the input string
    cin >> s;

    // Blank line for readability
    // ================= STEP 2: PRE-COMPUTATION =================
    // Creating a hash array of size 256 to cover all ASCII characters
    // Initializing all values to 0
    int hash[256] = {0};

    // Blank line for readability
    // Traverse the string
    for(int i = 0; i < s.size(); i++){
        // Directly using character as index
        // Example: 'a' → ASCII 97 → hash[97]++
        hash[s[i]]++;
    }

    // Blank line for readability
    // ================= STEP 3: QUERY PROCESS =================
    // Taking the number of queries from the user
    int query;
    // Reading the number of queries
    cin >> query;

    // Blank line for readability
    while(query--){
        // Declaring a character variable to store the query character
        char c;
        // Taking the query character from the user
        cin >> c;

        // Fetching frequency in O(1)
        // Printing the frequency of the query character
        cout << "the number of time " << c 
             << " comes: " << hash[c] << endl;
    }

    // Blank line for readability
    // ================= STEP 4: END =================
    // Returning 0 to indicate successful execution
    return 0;
}


// Blank line for readability
/*
// Starting a multi-line comment
================= ⚠️ MISTAKES =================
// Listing common mistakes
1. Forgetting array size
   // Incorrect way: only for lowercase
   ❌ int hash[26] → only for lowercase
   // Correct way: supports all ASCII
   ✅ int hash[256] → supports all ASCII

2. Using wrong indexing
   // Incorrect way: not needed here
   ❌ hash[c - 'a'] (not needed here)
   // Correct way: directly using character as index
   ✅ hash[c]

3. Negative index issue
   // If char is signed → may cause problem
   // Safe version: using unsigned char
       hash[(unsigned char)s[i]]++;
// Ending a multi-line comment


// Blank line for readability
================= 💡 TIPS =================
// Listing helpful tips
1. ASCII mapping:
   // Mapping of ASCII values
   'a' = 97, 'A' = 65, '0' = 48

2. Works for:
   // Supported character types
   ✔ lowercase
   ✔ uppercase
   ✔ digits
   ✔ symbols

3. Direct indexing makes it faster and simple
// Ending a multi-line comment


// Blank line for readability
================= 🚀 OPTIMIZATION =================
// Listing optimization techniques
1. Best approach for character frequency → O(1) query
// Using hash array for O(1) query

2. If input includes Unicode (rare in CP):
   // Using unordered_map for Unicode characters
   use unordered_map<char, int>

3. Time Complexity:
   // Precompute: O(n)
   Precompute: O(n)
   // Query: O(1)
   Query: O(1)

4. Memory:
   // Fixed 256 → very efficient
   Fixed 256 → very efficient


// Blank line for readability
================= 🔥 INTERVIEW INSIGHT =================
// Providing interview insights
This is better than:
   // Incorrect way: only for lowercase
   hash[26]

Because interviewer may give:
   // Example input
   "AaBb123!!"

Only this approach will handle all cases 💯
*/