#include<bits/stdc++.h> // including the bits/stdc++.h library for standard input/output and other functions
using namespace std; // using the standard namespace to avoid prefixing standard library elements

int main(){ // declaring the main function where program execution begins
    // blank line for readability
    string s; // declaring a string variable to store input
    cin >> s; // reading input from the user and storing it in the string variable
    cout << s.size()<< endl; // printing the size of the input string
    // blank line for readability
    
    // pre-compute comment to explain the purpose of the following code block
    map<char, int> has; // declaring a map to store character frequencies
    for(int i = 0 ; i < s.size();i++){ // iterating over each character in the input string
        has[s[i]]++; // incrementing the count of the current character in the map
    }
    // blank line for readability

    for(auto it : has){ // iterating over each element in the map
        cout << it.first << "->" << it.second << endl; // printing each character and its frequency
    }
    // blank line for readability
} 
// blank line for readability