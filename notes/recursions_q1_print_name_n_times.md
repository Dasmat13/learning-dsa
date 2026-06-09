# 📝 Notes: q1_print_name_n_times.cpp — Prints a given name 'n' times using recursion

## 🔑 Key Concepts (Easy to Remember)
| Concept | What it means |
| --- | --- |
| `#include<bits/stdc++.h>` | Includes all standard C++ libraries for input/output, data structures, and algorithms |
| `using namespace std;` | Allows using standard library functions without `std::` prefix |
| `void name(int i, int n)` | Function declaration for recursive function `name` with two integer parameters |
| `if (i > n)` | Base case condition for recursion termination |
| `cout << "dasmat" << endl;` | Prints the string "dasmat" followed by a newline character |
| `name(i + 1, n);` | Recursive function call with incremented `i` value |
| `cin >> n;` | Reads an integer input from the user and stores it in `n` |
| `name(1, n);` | Initial recursive function call with `i = 1` and user-input `n` |

## 📌 Must-Know Points
* The recursive function `name` takes two parameters: `i` (current iteration) and `n` (total iterations).
* The base case condition `if (i > n)` ensures the recursion terminates when `i` exceeds `n`.
* The recursive call `name(i + 1, n)` increments `i` by 1 in each iteration.
* The function prints the string "dasmat" in each recursive call.
* The `main` function reads an integer input `n` from the user and initiates the recursion with `name(1, n)`.

## 🐛 Bugs / Errors Found — What, How, When, Fix
| Bug/Error | What it is | When it happens | Fix |
| --- | --- | --- | --- |
| No input validation | Program crashes if non-integer input is provided | When user enters non-integer input | Add input validation using `cin.fail()` or `try-catch` block |
| No error handling | Program terminates abruptly if an error occurs | When an error occurs during execution | Implement error handling mechanisms, such as `try-catch` blocks |
| Potential stack overflow | Recursive function calls can exceed stack size limit | When `n` is very large | Consider using iterative approach or increasing stack size limit |
| No bugs found for small inputs |  |  |  |
| Potential issue with `bits/stdc++.h` | Non-standard header file may not be supported by all compilers | When compiling with non-standard compilers | Use standard header files instead, such as `iostream`, `cstdio`, etc. |

## 🎤 Interview Questions & Answers
**Q1: What is recursion, and how does it work in the given code?**
> A: Recursion is a programming technique where a function calls itself repeatedly until a base case condition is met. In the given code, the `name` function calls itself with incremented `i` value until `i` exceeds `n`, at which point the recursion terminates.

**Q2: What is the purpose of the base case condition `if (i > n)`?**
> A: The base case condition `if (i > n)` ensures that the recursion terminates when `i` exceeds `n`, preventing infinite recursion and potential stack overflow.

**Q3: How does the recursive function `name` print the string "dasmat" `n` times?**
> A: The recursive function `name` prints the string "dasmat" in each recursive call, and the recursion continues until `i` exceeds `n`. This results in the string being printed `n` times.

**Q4: What would happen if the user enters a very large value for `n`?**
> A: If the user enters a very large value for `n`, the recursive function calls may exceed the stack size limit, leading to a potential stack overflow error. To mitigate this, an iterative approach or increasing the stack size limit could be considered.

**Q5: How can you modify the code to print a custom string instead of "dasmat"?**
> A: To print a custom string, you can modify the `cout` statement inside the recursive function `name` to print the desired string. Alternatively, you can pass the custom string as an additional parameter to the `name` function and print it accordingly.