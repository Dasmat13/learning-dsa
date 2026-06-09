# 📝 Notes: q12_fibonacci_number.cpp — Calculates the nth Fibonacci number using recursion

## 🔑 Key Concepts (Easy to Remember)
| Concept | What it means |
| --- | --- |
| `#include<bits/stdc++.h>` | Includes all standard C++ libraries for convenience |
| `using namespace std;` | Allows use of standard library functions without `std::` prefix |
| `int f(int n)` | Function declaration for calculating the nth Fibonacci number |
| `if(n <= 1)` | Base case for recursion: returns `n` when `n` is 0 or 1 |
| `int last = f(n-1);` | Recursive call to calculate the (n-1)th Fibonacci number |
| `int slast = f(n-2);` | Recursive call to calculate the (n-2)th Fibonacci number |
| `return last + slast;` | Returns the sum of the last two Fibonacci numbers |
| `cin >> n;` | Reads an integer input from the user |
| `cout << f(n);` | Prints the nth Fibonacci number to the console |

## 📌 Must-Know Points
* The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1.
* The recursive function `f(int n)` has a time complexity of O(2^n), which can be inefficient for large values of `n`.
* The function uses a top-down approach, where the problem is broken down into smaller sub-problems, and the solutions are combined to form the final result.
* The base case for the recursion is when `n` is 0 or 1, at which point the function returns `n`.
* The recursive calls to `f(n-1)` and `f(n-2)` can lead to repeated calculations, which can be optimized using memoization or dynamic programming.

## 🐛 Bugs / Errors Found — What, How, When, Fix
| Bug/Error | What it is | When it happens | Fix |
| --- | --- | --- | --- |
| No input validation | The program does not check if the input is a non-negative integer | When the user enters a negative number or a non-integer | Add input validation to ensure `n` is a non-negative integer |
| No error handling | The program does not handle errors that may occur during input or calculation | When an error occurs during input or calculation | Add try-catch blocks to handle potential errors |
| Inefficient recursion | The recursive function has a high time complexity | When calculating large Fibonacci numbers | Optimize the function using memoization or dynamic programming |
| No comments or documentation | The code lacks comments and documentation | When trying to understand the code | Add comments and documentation to explain the code's purpose and functionality |
| No bugs found for small inputs | The program works correctly for small inputs | When testing the program with small inputs | No fix needed, but be aware of potential issues with large inputs |

## 🎤 Interview Questions & Answers
**Q1: What is the time complexity of the recursive function `f(int n)`?**
> A: The time complexity of the recursive function `f(int n)` is O(2^n), which can be inefficient for large values of `n`.

**Q2: How can the recursive function be optimized for large values of `n`?**
> A: The recursive function can be optimized using memoization or dynamic programming to store and reuse previously calculated Fibonacci numbers, reducing the time complexity to O(n).

**Q3: What is the purpose of the base case in the recursive function?**
> A: The base case is used to terminate the recursion when `n` is 0 or 1, at which point the function returns `n`.

**Q4: What is the difference between the top-down and bottom-up approaches to solving the Fibonacci sequence problem?**
> A: The top-down approach uses recursion to break down the problem into smaller sub-problems, while the bottom-up approach uses iteration to build up the solution from smaller sub-problems.

**Q5: How can input validation be added to the program to ensure that `n` is a non-negative integer?**
> A: Input validation can be added by checking if the input is a non-negative integer using a conditional statement, and handling any errors that may occur during input.