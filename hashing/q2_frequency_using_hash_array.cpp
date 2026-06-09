// including all standard C++ libraries for use
#include<bits/stdc++.h>
// using the standard namespace to avoid prefixing standard library elements
using namespace std;
// blank line for readability
// main function where program execution begins
int main(){
    // blank line for readability
    // first we have to declare an array 
    // variable to store size of array
    int n ;
    // take input for size
    cin >> n;
    // declare array of size n
    int arr[n];
    // loop to take input of array elements
    for(int i = 0 ; i <n ; i++){
        // store each element in array
        cin >> arr[i];
    }
    // blank line for readability
    // second we have to make a hash array for pre compute and when it find the same element we have to increase the hash array element by+1
    // in hash array we have to declare the size of hash array and initilize with 0 for all element 
    // we create a hash array to store frequency of elements
    int hash[13] = {0};
    // loop through original array
    for(int i = 0 ; i < n ; i++){
        // use array value as index and increase its count
        hash[arr[i]] += 1;
    }
    // blank line for readability
    // in third step we have to fetch the quaries by using while loop (q--) so it can go like 5 , 4 ,3 ,2 ,1
    // number of queries
    int q;
    // take input for number of queries
    cin >> q;
    // loop runs q times (q-- decreases q after each iteration)
    while(q--){
        // number to find frequency of
        int number;
        // input the query number
        cin >> number;
        // print how many times 'number' appeared in array
        cout << "the number " << number << " " << "occurs: " << hash[number] << endl;
    }
    // blank line for readability
    // return statement to indicate successful execution of main function
    return 0;
}
// including all standard C++ libraries for use
#include<bits/stdc++.h>   // includes all standard C++ libraries
// using the standard namespace to avoid prefixing standard library elements
using namespace std;
// blank line for readability
// main function where program execution begins
int main(){
    // blank line for readability
    // ================= STEP 1: INPUT ARRAY =================
    // variable to store size of array
    int n;                  // variable to store size of array
    // take input for size
    cin >> n;               // take input for size
    // declare array of size n
    int arr[n];             // declare array of size n
    // blank line for readability
    // loop to take input of array elements
    for(int i = 0; i < n; i++){
        // store each element in array
        cin >> arr[i];      // store each element in array
    }
    // blank line for readability
    // ================= STEP 2: HASHING (PRE-COMPUTATION) =================
    // we create a hash array to store frequency of elements
    // size is 13 → means we assume values will be from 0 to 12
    // all values are initialized to 0
    int hash[13] = {0};
    // loop through original array
    for(int i = 0; i < n; i++){
        // use array value as index and increase its count
        // example: if arr[i] = 5 → hash[5]++
        hash[arr[i]] += 1;
    }
    // blank line for readability
    // ================= STEP 3: PROCESS QUERIES =================
    // number of queries
    int q;                  // number of queries
    // take input for number of queries
    cin >> q;               // take input for number of queries
    // blank line for readability
    // loop runs q times (q-- decreases q after each iteration)
    while(q--){
        // number to find frequency of
        int number;         // number to find frequency of
        // input the query number
        cin >> number;      // input the query number
        // print how many times 'number' appeared in array
        // we directly access it using hash array
        cout << "the number " << number 
             << " occurs: " << hash[number] << endl;
    }
    // blank line for readability
    // ================= END OF PROGRAM =================
    // return statement to indicate successful execution of main function
    return 0;
}