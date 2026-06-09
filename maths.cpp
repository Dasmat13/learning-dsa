#include<bits/stdc++.h> // including the bits/stdc++.h library for standard input/output operations
using namespace std; // using the standard namespace for convenience
// int countDigit(long long n){ // function to count the number of digits in a given number
//     int cnt = 0; // initializing a counter variable to store the number of digits
//     while( n > 0){ // loop to extract each digit from the number
//         int lastDigit = n % 10; // extracting the last digit of the number
//         cnt = cnt + 1; // incrementing the counter variable
//         n = n /10; // removing the last digit from the number
//     }
//     return cnt; // returning the total number of digits
// }
// int main(){ // main function where program execution begins
//     long long n; // declaring a variable to store the input number
//     cin >> n; // reading the input number from the user
//     cout << countDigit(n); // printing the number of digits in the input number
//     return 0; // returning 0 to indicate successful program execution

// int reverseDigit(long long n){ // function to reverse the digits of a given number
//     int rev = 0; // initializing a variable to store the reversed number
//     while (n > 0) // loop to extract each digit from the number
//     {
//         int lastDigit = n % 10; // extracting the last digit of the number
//         n = n/10; // removing the last digit from the number
//         //first extract 0*10+3=3 // explanation of the reversal process
//         //3+10+2=32 // explanation of the reversal process
//         //32?*10+1=321 // explanation of the reversal process
//         rev = (rev * 10) + lastDigit; // appending the extracted digit to the reversed number
//         /* code */ // empty comment, possibly a placeholder for additional code
//     }
//     return rev; // returning the reversed number

// } 
// int main(){ // main function where program execution begins
//     long long n; // declaring a variable to store the input number
//     cin >> n; // reading the input number from the user
//     cout << reverseDigit(n); // printing the reversed number
//     return 0; // returning 0 to indicate successful program execution
//  }

// bool palindrome(int n) // function to check if a given number is a palindrome
// {
//     // Write your code // comment indicating where the student should write their code
//     int original = n; // storing the original number for comparison
//     int rev = 0; // initializing a variable to store the reversed number
//     while(n > 0){ // loop to extract each digit from the number
//         int lastDigit = n %10; // extracting the last digit of the number
//         n = n/10; // removing the last digit from the number
//         rev = (rev*10)+lastDigit; // appending the extracted digit to the reversed number
//     }
//     return rev == original; // returning true if the number is a palindrome, false otherwise
// }

// int main(){ // main function where program execution begins
//     int n ; // declaring a variable to store the input number
//     cin >> n; // reading the input number from the user
//     if(palindrome(n)){ // checking if the input number is a palindrome
//         cout << "true"; // printing true if the number is a palindrome
//     }
//     else{ // handling the case where the number is not a palindrome
//         cout << "false"; // printing false if the number is not a palindrome
//     }
// }

// bool armstrong(int n){ // function to check if a given number is an Armstrong number
//     int original = n; // storing the original number for comparison
//     int sum = 0; // initializing a variable to store the sum of the cubes of the digits
//     while(n>0){ // loop to extract each digit from the number
//         int lastdigit = n %10; // extracting the last digit of the number
//         sum = sum + (lastdigit*lastdigit*lastdigit); // calculating the sum of the cubes of the digits
//         n = n/10; // removing the last digit from the number
//     }
//     return sum == original; // returning true if the number is an Armstrong number, false otherwise
// }

int main(){ // main function where program execution begins
    int n ; // declaring a variable to store the input number
    cin >> n; // reading the input number from the user
    for(int i = 1; i <=n;i++){ // loop to find all divisors of the input number
        if(n%i==0){ // checking if the current number is a divisor of the input number
            cout << i << " "; // printing the divisor
        }
    }
} 
// blank line for readability
// ⚠️ NOTE: The code only finds divisors of the input number, but does not handle any potential errors or edge cases. 
// ⚠️ BUG: The code does not check for invalid input, such as negative numbers or non-integer values. 
// FIX: Add input validation to handle such cases.