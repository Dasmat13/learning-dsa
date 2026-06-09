// blank line for readability
// reverse an array using one pointer
// blank line for readability
#include<bits/stdc++.h>   // Includes all standard libraries
// blank line for readability
using namespace std; // uses the standard namespace for convenience
// blank line for readability

// 🔁 Recursive function 
// i → current index (starting from 0)
// n → size of array
// arr[] → array to be reversed
void f(int i, int n, int arr[]{ // function f takes 3 parameters: i, n, and arr
    // blank line for readability
    // 🔴 Base Condition: 
    // Stop when i reaches middle of array
    // Because we already swapped all required elements
    if(i >= n/2){ // checks if i is greater than or equal to half of n
        return;   // ⛔ stop recursion
    }
    // blank line for readability
    else{ // if i is less than half of n
        // 🔄 Swap current element with its mirror element
        // Mirror index = (n - i - 1)
        // Example: 
        // i = 0 → swap arr[0] with arr[n-1]
        // i = 1 → swap arr[1] with arr[n-2]
        swap(arr[i], arr[n-i-1]); // swaps the elements at index i and n-i-1

        // 👉 Recursive call: 
        // Move to next index (i+1)
        // Continue swapping inner elements
        f(i+1, n, arr); // calls function f with i+1, n, and arr
    }
    // blank line for readability
}

// blank line for readability
int main(){ // main function where program execution begins
    int n; // declares an integer variable n
    cin >> n;   // 📥 Input size of array
    // blank line for readability
    int arr[n]; // 📦 Create array of size n (VLA - works in GCC)
    // blank line for readability

    // 📥 Input elements into array
    for(int i = 0; i < n; i++){ // loop to input elements into array
        cin >> arr[i]; // inputs element at index i
    }
    // blank line for readability

    // 🚀 Call recursive function
    // Start from index 0
    f(0, n, arr); // calls function f with 0, n, and arr
    // blank line for readability

    // 📤 Print reversed array
    for(int i = 0; i < n; i++){ // loop to print reversed array
        cout << arr[i] << " "; // prints element at index i
    }
    // blank line for readability
} 
// blank line for readability