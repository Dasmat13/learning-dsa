# 📝 Notes: q13_sequential_number_triangle.cpp — Prints a sequential number triangle pattern based on user input

## 🔑 Key Concepts (Easy to Remember)
| Concept | What it means |
| --- | --- |
| `#include<bits/stdc++.h>` | Includes all standard C++ libraries for convenience |
| `using namespace std;` | Allows use of standard library functions without `std::` prefix |
| `cin` | Reads input from the user |
| `cout` | Prints output to the console |
| `for` loop | Used for repetitive execution of a block of code |
| Nested loops | Used to create patterns with multiple dimensions |
| `num++` | Increments the value of `num` by 1 |

## 📌 Must-Know Points
* The outer loop (`i`) controls the number of rows in the triangle.
* The inner loop (`j`) controls the number of columns in each row.
* The `num` variable keeps track of the current number to be printed.
* The `num++` statement increments the `num` variable after each print.
* The `endl` statement is used to move to the next line after each row.
* The user input `n` determines the size of the triangle.
* The pattern is printed with a continuous count, starting from 1.

## 🐛 Bugs / Errors Found — What, How, When, Fix
| Bug/Error | What it is | When it happens | Fix |
| --- | --- | --- | --- |
| No input validation | Program crashes if non-integer input is provided | When user enters non-integer input | Add input validation to check for integer input |
| No error handling | Program crashes if input is too large | When user enters very large input | Add error handling to handle large inputs |
| No bugs found |  |  | No fix needed |

## 🎤 Interview Questions & Answers
**Q1: What is the purpose of the outer loop in the given code?**
> A: The outer loop (`i`) controls the number of rows in the triangle pattern. It iterates from 1 to `n`, where `n` is the user input.

**Q2: How does the inner loop contribute to the pattern?**
> A: The inner loop (`j`) controls the number of columns in each row. It iterates from 1 to `i`, where `i` is the current row number, and prints the current number (`num`) followed by a space.

**Q3: What is the role of the `num` variable in the code?**
> A: The `num` variable keeps track of the current number to be printed in the pattern. It starts from 1 and increments by 1 after each print.

**Q4: Why is `endl` used at the end of each row?**
> A: `endl` is used to move to the next line after each row, creating a new line for the next row of the pattern.

**Q5: How can you modify the code to print a triangle pattern with a different starting number?**
> A: To print a triangle pattern with a different starting number, you can initialize the `num` variable with the desired starting number instead of 1. For example, to start from 10, you can initialize `num` with 10: `int num = 10;`.