# 📝 Notes: basic.cpp — A C++ file demonstrating recursion concepts and printing templates

## 🔑 Key Concepts (Easy to Remember)
| Concept | What it means |
| --- | --- |
| Recursion | A function calling itself to solve a problem |
| Base Case | A condition that stops the recursion |
| Recursive Call | The function call that leads to the next iteration |
| Backtracking | A technique used to print in reverse order by calling the function before printing |
| `using namespace std;` | A directive to use the standard namespace, avoiding the need for `std::` prefix |
| `void` | A return type indicating the function does not return a value |
| `if` statement | A conditional statement used to control the flow of the program |
| `return` statement | A statement used to exit a function and return control to the caller |

## 📌 Must-Know Points
* Recursion can be used to solve problems that have a recursive structure
* A base case is necessary to stop the recursion and avoid infinite loops
* The order of printing (before or after the recursive call) determines the output order
* Backtracking is a technique used to print in reverse order
* The `using namespace std;` directive can simplify code, but it's generally recommended to use the `std::` prefix instead
* The `void` return type indicates that a function does not return a value
* The `if` statement is used to control the flow of the program based on conditions
* The `return` statement is used to exit a function and return control to the caller

## 🐛 Bugs / Errors Found — What, How, When, Fix
| Bug/Error | What it is | When it happens | Fix |
| --- | --- | --- | --- |
| Infinite recursion | The `print0` function calls itself without a base case | When `print0` is called | Add a base case to stop the recursion |
| Undefined variable | The `count` variable is not defined in the `print2` function | When `print2` is called | Define the `count` variable or pass it as a parameter |
| No bugs found in the provided code |  |  |  |

## 🎤 Interview Questions & Answers
**Q1: What is recursion, and how does it work?**
> A: Recursion is a programming technique where a function calls itself to solve a problem. It works by breaking down the problem into smaller sub-problems, solving each sub-problem, and then combining the solutions to solve the original problem.

**Q2: What is the difference between printing before and after a recursive call?**
> A: Printing before a recursive call results in a normal flow of output, while printing after a recursive call results in a reverse order of output (backtracking).

**Q3: What is a base case, and why is it necessary in recursion?**
> A: A base case is a condition that stops the recursion and avoids infinite loops. It's necessary to define a base case to ensure that the recursion eventually stops and the function returns control to the caller.

**Q4: How does backtracking work in recursion?**
> A: Backtracking works by calling the function before printing, allowing the function to go deep into the recursive calls, and then printing the output while coming back from the recursive calls.

**Q5: What is the purpose of the `using namespace std;` directive, and what are its implications?**
> A: The `using namespace std;` directive allows the use of standard library functions and objects without the `std::` prefix. However, it's generally recommended to use the `std::` prefix instead to avoid naming conflicts and improve code readability.