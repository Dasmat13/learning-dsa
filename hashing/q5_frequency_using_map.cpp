// blank line for readability
// including the bits/stdc++.h library for standard input/output and other functions
#include<bits/stdc++.h>
// using the standard namespace to avoid prefixing standard library elements
using namespace std;

// defining the main function where program execution begins
int main(){
    // declaring a variable to store the size of the array
    int n;
    // taking the size of the array as input from the user
    cin >> n;
    // declaring an array of size n
    int arr[n];
    // loop to take array elements as input from the user
    for(int i = 0 ; i < n ; i++){
        // taking each array element as input from the user
        cin >> arr[i];
    }

    // pre-computing the frequency of each element
    map<int, int> mapp;
    // loop to traverse the array and count the frequency of each element
    for(int i = 0 ; i < n ; i++){
        // incrementing the count of the current element in the map
        mapp[arr[i]]++;
    }
    // loop to print the frequency of each element
    for(auto it : mapp){
        // printing the element and its frequency
        cout << it.first << "->" << it.second << endl;
    }

    // taking the number of queries as input from the user
    int q;
    // taking the number of queries as input from the user
    cin >> q;
    // loop to process each query
    while (q--){
        // declaring a variable to store the query number
        int number;
        // taking the query number as input from the user
        cin >> number;
        // fetching the frequency of the query number
        cout << mapp[number] << endl;
    }

    // blank line for readability
}

// blank line for readability
// including the bits/stdc++.h library for standard input/output and other functions
#include<bits/stdc++.h>
// using the standard namespace to avoid prefixing standard library elements
using namespace std;

// defining the main function where program execution begins
int main(){
    // blank line for readability
    // ================= STEP 1: INPUT =================
    // Take size of array
    int n;
    // taking the size of the array as input from the user
    cin >> n;
    // declaring an array of size n
    int arr[n];   // declare array of size n
    // Input array elements
    // loop to take array elements as input from the user
    for(int i = 0; i < n; i++){
        // taking each array element as input from the user
        cin >> arr[i];
    }

    // blank line for readability
    // ================= STEP 2: PRE-COMPUTATION =================
    // Create a map to store frequency
    // key   → array element
    // value → count (frequency)
    map<int, int> mapp;
    // Traverse array and count frequency
    // loop to traverse the array and count the frequency of each element
    for(int i = 0; i < n; i++){
        // incrementing the count of the current element in the map
        mapp[arr[i]]++;   // increase count of arr[i]
    }

    // blank line for readability
    // ================= STEP 3: PRINT MAP (OPTIONAL) =================
    // Print all elements with their frequency
    // loop to print the frequency of each element
    for(auto it : mapp){
        // it.first  → element (key)
        // it.second → frequency (value)
        // printing the element and its frequency
        cout << it.first << " -> " << it.second << endl;
    }

    // blank line for readability
    // ================= STEP 4: QUERY PROCESS =================
    // Take number of queries
    int q;
    // taking the number of queries as input from the user
    cin >> q;
    // loop to process each query
    while(q--){
        // declaring a variable to store the query number
        int number;
        // taking the query number as input from the user
        cin >> number;
        // Fetch frequency in O(log n)
        // printing the frequency of the query number
        cout << mapp[number] << endl;
    }

    // blank line for readability
    // ================= STEP 5: END =================
    // returning 0 to indicate successful execution
    return 0;
}

// blank line for readability
/*
// starting a multi-line comment
================= ⚠️ MISTAKES =================
// listing common mistakes
1. Using array hashing when values are large
   // explaining the issue with array hashing
   ❌ int hash[1000000] (may cause memory issue)
   // suggesting an alternative
   ✅ use map instead
// explaining another mistake
2. Assuming element exists
   // explaining the behavior when an element is not present
   mapp[number] will return 0 if not present (safe)
// explaining another mistake
3. Forgetting that map is sorted
   // explaining the behavior of map
   Output will always be in ascending order of keys
// ending the list of mistakes
================= 💡 TIPS =================
// listing useful tips
1. map stores keys in sorted order automatically
// explaining another tip
2. Access:
   // explaining how to access an element
   mapp[x] → gives frequency
   // explaining the behavior when an element is not present
   If x not present → returns 0
// explaining another tip
3. Iteration:
   // explaining how to iterate over the map
   for(auto it : mapp)
   // explaining the benefit of this approach
   → easy way to traverse
// ending the list of tips
================= 🚀 OPTIMIZATION =================
// listing optimization techniques
1. Time Complexity:
   // explaining the time complexity of pre-computation
   Precompute: O(n log n)
   // explaining the time complexity of query
   Query: O(log n)
// explaining an alternative approach
2. Faster alternative:
   // suggesting an alternative data structure
   unordered_map<int, int> mp;
   // explaining how to use the alternative data structure
   for(int i = 0; i < n; i++){
       // incrementing the count of the current element
       mp[arr[i]]++;
   }
   // explaining the benefit of this approach
   👉 Time:
      // explaining the time complexity of pre-computation
      Precompute: O(n)
      // explaining the time complexity of query
      Query: O(1) average
// explaining when to use each approach
3. When to use what:
   // explaining when to use map
   map → when sorted order needed
   // explaining when to use unordered_map
   unordered_map → when speed needed
// ending the list of optimization techniques
================= 🔥 INTERVIEW INSIGHT =================
// providing an insight for interviews
If interviewer asks:
   // explaining the question
   "handle large values (up to 10^9)"
// suggesting an approach
👉 Always use:
   // suggesting data structures to use
   map OR unordered_map
// explaining why array hashing is not suitable
Array hashing will FAIL ❌
// ending the insight
*/