# 📝 Notes: q2_print_1_to_n.cpp — Prints numbers from 1 to n using recursion

## 🔑 Key Concepts (Easy to Remember)
| Concept | What it means |
| --- | --- |
| `#include<bits/stdc++.h>` | Includes all standard C++ libraries for convenience |
| `using namespace std;` | Allows using standard library functions without `std::` prefix |
| `void f(int i, int n)` | Declares a function `f` that takes two integer parameters `i` and `n` |
| `if (i > n)` | Base condition for recursion: stops when `i` exceeds `n` |
| `cout << i << endl;` | Prints the current value of `i` followed by a newline |
| `f(i + 1, n);` | Recursive call to `f` with incremented `i` and same `n` |
| `cin >> n;` | Reads an integer input from the user and stores it in `n` |
| Recursion | A programming technique where a function calls itself to solve a problem |

## 📌 Must-Know Points
* The function `f` uses recursion to print numbers from 1 to `n`.
* The base condition `if (i > n)` is crucial to prevent infinite recursion.
* The recursive call `f(i + 1, n)` increments `i` by 1 in each call.
* The `main` function reads an integer input `n` from the user and calls `f(1, n)` to start the recursion.
* The `using namespace std;` directive can be avoided by using `std::` prefix with standard library functions.
* The `#include<bits/stdc++.h>` header is non-standard and should be avoided in production code.

## 🐛 Bugs / Errors Found — What, How, When, Fix
| Bug/Error | What it is | When it happens | Fix |
| --- | --- | --- | --- |
| No input validation | Program crashes for non-integer input | When user enters non-integer input | Add input validation using `cin.fail()` or `try-catch` block |
| No error handling | Program crashes for large input values | When user enters very large input value | Add error handling using `try-catch` block or check for overflow |
| Non-standard header | Program may not compile on all platforms | When compiling on non-GCC platforms | Replace with standard headers like `#include <iostream>` |
| No comments | Code is hard to understand | Always | Add comments to explain the code logic and purpose |
| No bugs found for correct input |  |  |  |

## 🎤 Interview Questions & Answers
**Q1: What is recursion, and how is it used in this code?**
> A: Recursion is a programming technique where a function calls itself to solve a problem. In this code, the function `f` uses recursion to print numbers from 1 to `n` by calling itself with incremented `i` and same `n`.
**Q2: What is the base condition for recursion in this code?**
> A: The base condition for recursion in this code is `if (i > n)`, which stops the recursion when `i` exceeds `n`.
**Q3: How does the recursive call `f(i + 1, n)` work?**
> A: The recursive call `f(i + 1, n)` increments `i` by 1 and calls the function `f` again with the new value of `i` and same `n`.
**Q4: What happens if the user enters a non-integer input?**
> A: If the user enters a non-integer input, the program will crash or produce undefined behavior. To fix this, input validation using `cin.fail()` or `try-catch` block should be added.
**Q5: Why is the `#include<bits/stdc++.h>` header considered non-standard?**
> A: The `#include<bits/stdc++.h>` header is considered non-standard because it is not part of the C++ standard library and may not be supported by all compilers. It is recommended to use standard headers like `#include <iostream>` instead.