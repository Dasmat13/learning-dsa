// Including the iostream library for input/output operations
#include <iostream>
// Using the standard namespace to avoid prefixing standard library elements
using namespace std;

// Starting the main function where program execution begins
int main() {    
// Declaring an integer variable x to store user input
int x;
// Reading user input from the console and storing it in variable x
cin >> x;
// Displaying a message to the user with the input value
cout << "You entered: " << x << endl;
// End of the main function
} 
// blank line for readability
// ⚠️ NOTE: The code does not handle invalid inputs, it assumes the user will enter a valid integer. 
// FIX: Add error handling for non-integer inputs.