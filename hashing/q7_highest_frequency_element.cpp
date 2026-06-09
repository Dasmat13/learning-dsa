// Including the necessary header file for input/output and other standard library functions
#include<bits/stdc++.h>
// Using the standard namespace to avoid prefixing standard library elements
using namespace std;

// Starting the main function where program execution begins
int main(){
    // Taking an array as input from the user
    //take a array
    // Declaring a variable to store the size of the array
    int n;
    // Reading the size of the array from the user
    cin >> n;
    // Declaring an array with the given size
    int arr[n];
    // Loop to read array elements from the user
    for(int i = 0 ; i< n ; i++){
        // Reading each element of the array from the user
        cin >> arr[i];
    } 
    // blank line for readability

    // Precomputing the frequency of each element in the array
    //pre compute
    // Creating a map to store the frequency of each element
    map<int , int> mapp;
    // Loop to iterate over each element in the array
    for(int i = 0 ; i < n; i++){
        // Incrementing the frequency of the current element in the map
        mapp[arr[i]]++;
    }

    // Finding the highest frequency element in the array
    //finding the highest frequency 
    // Initializing variables to store the maximum frequency and the corresponding element
    int maxFreq = 0;
    // Initializing a variable to store the element with the highest frequency
    int element = 0;

    // Loop to print the frequency of each element
    for(auto it : mapp){
        // Printing the element and its frequency
        cout << it.first << "->" << it.second << endl;
    }

    // Loop to find the element with the highest frequency
    for(auto it : mapp){
        // Checking if the frequency of the current element is greater than the maximum frequency found so far
        if(it.second > maxFreq){
            // Updating the maximum frequency
            maxFreq = it.second;
            // Updating the element with the highest frequency
            element = it.first;
        }
    }

    // Printing the element with the highest frequency
    cout << "Highest occurring element: " << element << endl;
    // Printing the frequency of the highest occurring element
    cout << "Frequency: " << maxFreq << endl;

    // Returning 0 to indicate successful execution of the program
    return 0;
} 
// blank line for readability