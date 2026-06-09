# 📝 Notes: q16_same_char_repeated_per_row.cpp — Prints a pattern of same characters repeated per row

## 🔑 Key Concepts (Easy to Remember)
| Concept | What it means |
| --- | --- |
| `#include<bits/stdc++.h>` | Includes all standard C++ libraries |
| `using namespace std;` | Allows use of standard library functions without `std::` prefix |
| `cin` | Reads input from the user |
| `cout` | Prints output to the console |
| `for` loop | Used for repetitive execution of a block of code |
| `char ch = 'A' + i;` | Calculates the ASCII value of a character based on its position |
| `endl` | Inserts a newline character and flushes the buffer |

## 📌 Must-Know Points
* The outer loop (`for(int i = 0; i <= n; i++)`) controls the number of rows in the pattern.
* The inner loop (`for(int j = 0; j <= i; j++)`) controls the number of characters printed in each row.
* The character printed in each row is determined by the expression `'A' + i`, which calculates the ASCII value of the character based on its position.
* The use of `<=` in the loop conditions ensures that the loop iterates `n+1` times, which is necessary to print `n` rows.
* The `cout` statement is used to print the characters, and `endl` is used to insert a newline character at the end of each row.

## 🐛 Bugs / Errors Found — What, How, When, Fix
| Bug/Error | What it is | When it happens | Fix |
| --- | --- | --- | --- |
| Off-by-one error | The loop iterates one more time than expected | When `i` exceeds `n` | Change the loop condition to `i < n` |
| No input validation | The program does not check if the input is valid | When the user enters a non-integer value | Add input validation using `cin.fail()` or `try-catch` block |
| No bugs found in the logic of the pattern printing |  |  |  |

## 🎤 Interview Questions & Answers
**Q1: What is the purpose of the outer loop in the given code?**
> A: The outer loop controls the number of rows in the pattern. It iterates `n+1` times to print `n` rows.

**Q2: How is the character printed in each row determined?**
> A: The character printed in each row is determined by the expression `'A' + i`, which calculates the ASCII value of the character based on its position.

**Q3: What is the purpose of the inner loop in the given code?**
> A: The inner loop controls the number of characters printed in each row. It iterates `i+1` times to print `i+1` characters in the `i-th` row.

**Q4: Why is `endl` used at the end of each row?**
> A: `endl` is used to insert a newline character and flush the buffer, which ensures that the output is printed immediately and the cursor moves to the next line.

**Q5: What would happen if the user enters a non-integer value as input?**
> A: If the user enters a non-integer value as input, the program would fail to read the input correctly and may produce unexpected results or crash. To handle this, input validation should be added to check if the input is a valid integer.