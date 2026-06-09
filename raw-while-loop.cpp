#include<bits/stdc++.h> // including the bits/stdc++.h library for standard input/output operations
using namespace std; // using the standard namespace for convenience

// blank line for readability
// Reverse the given number and print the reversed value // description of the code block
// int x ; // declaring an integer variable x
// cin >> x; // taking input from the user and storing it in x
// int rev = 0; // initializing a variable rev to store the reversed number
// while (x>0) // starting a while loop that continues until x is greater than 0
// {
//     /* code */ // a comment indicating where the loop body starts
//     int digit = x % 10; // calculating the last digit of x
//     rev = rev * 10 + digit ; // appending the digit to the reversed number
//     x = x /10; // removing the last digit from x
// }
// cout << rev << endl; // printing the reversed number
// blank line for readability

// Check whether the given number is a palindrome // description of the code block
// int x; // declaring an integer variable x
// cin >> x; // taking input from the user and storing it in x
// int original = x; // storing the original value of x
// int palindrome = 0; // initializing a variable to store the reversed number
// while (x>0) // starting a while loop that continues until x is greater than 0
// {
//     /* code */ // a comment indicating where the loop body starts
//     int digit = x % 10; // calculating the last digit of x
//     palindrome = palindrome * 10 +digit; // appending the digit to the reversed number
//     x = x /10; // removing the last digit from x
// }
// cout << palindrome << endl; // printing the reversed number
// if(original == palindrome){ // checking if the original number is equal to the reversed number
//     cout << "it is a palindrome " << endl ; // printing a message if the number is a palindrome
// }
// else{ // if the number is not a palindrome
//     cout << "it is not a palindrome number" << endl ; // printing a message if the number is not a palindrome
// }
// blank line for readability

// Find and print the sum of digits of the given number // description of the code block
// int x ; // declaring an integer variable x
// cin >> x; // taking input from the user and storing it in x
// int digit = 0; // initializing a variable to store the last digit of x
// int temp = 0; // initializing a variable to store the sum of digits
// while (x > 0) // starting a while loop that continues until x is greater than 0
// {
//     /* code */ // a comment indicating where the loop body starts
//     digit = x % 10; // calculating the last digit of x
//     temp = temp + digit ; // adding the digit to the sum of digits
//     x = x / 10; // removing the last digit from x
// }
// cout << temp << endl; // printing the sum of digits
// blank line for readability

// Check whether the given number is an Armstrong number // description of the code block
// int x ; // declaring an integer variable x
// cin >> x; // taking input from the user and storing it in x
// int original = x; // storing the original value of x
// int y = x; // storing a copy of x in y
// int arm = 0; // initializing a variable to store the armstrong number
// int digit = 0; // initializing a variable to store the last digit of x
// int count = 0; // initializing a variable to store the number of digits in x
// while (x > 0) // starting a while loop that continues until x is greater than 0
// {
//    count++; // incrementing the count of digits
//    x = x /10; // removing the last digit from x
// }
// cout << "numbers of digit: "<< count << endl; // printing the number of digits
// while (y > 0) // starting a while loop that continues until y is greater than 0
// {
//     /* code */ // a comment indicating where the loop body starts
//     digit = y % 10; // calculating the last digit of y
//     arm = arm + pow(digit,count); // calculating the armstrong number
//     y = y / 10; // removing the last digit from y
// }
// cout << arm << endl; // printing the armstrong number
// if(original == arm){ // checking if the original number is equal to the armstrong number
//     cout << "it is a armstrong number" << endl ; // printing a message if the number is an armstrong number
// }
// else{ // if the number is not an armstrong number
//     cout << "it is not a armstrong number" << endl; // printing a message if the number is not an armstrong number
// }
// blank line for readability

// Check whether the given number is a Perfect number // description of the code block
// int n; // declaring an integer variable n
// cin >> n; // taking input from the user and storing it in n
// int original = n; // storing the original value of n
// int sum = 0; // initializing a variable to store the sum of divisors
// int i = 1; // initializing a variable to store the current divisor
// while (i <= n/2) // starting a while loop that continues until i is less than or equal to half of n
// {
//     /* code */ // a comment indicating where the loop body starts
//     if(n % i == 0){ // checking if i is a divisor of n
//         sum = sum + i; // adding i to the sum of divisors
//     }
//     i++; // incrementing the current divisor
// }
// cout << sum << endl; // printing the sum of divisors
// if(original == sum){ // checking if the original number is equal to the sum of divisors
//     cout << "it is a perfect number"; // printing a message if the number is a perfect number
// }
// else{ // if the number is not a perfect number
//     cout << "it is not a perfect number"; // printing a message if the number is not a perfect number
// }
// blank line for readability
// blank line for readability
// function // a comment indicating the start of a function (currently empty)