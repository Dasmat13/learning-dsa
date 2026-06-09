# 📝 Notes: q12_number_mirror_triangle.cpp — Prints a number mirror triangle pattern based on user input

## 🔑 Key Concepts (Easy to Remember)
| Concept | What it means |
| --- | --- |
| `#include<bits/stdc++.h>` | Includes all standard C++ libraries |
| `using namespace std;` | Allows use of standard library functions without `std::` prefix |
| `cin >> n;` | Reads user input into variable `n` |
| `for(int i = 1; i <= n; i++)` | Loops from 1 to `n` (inclusive) |
| `cout << j;` | Prints the value of `j` to the console |
| `cout << " ";` | Prints a space to the console |
| `for(int j = i; j >= 1; j--)` | Loops from `i` down to 1 (inclusive) |

## 📌 Must-Know Points
* The outer loop (`for(int i = 1; i <= n; i++)`) controls the number of rows in the pattern.
* The first inner loop (`for(int j = 1; j <= i; j++)`) prints the left numbers in each row.
* The second inner loop (`for(int j = 1; j <= 2*n-(i*2); j++)`) prints the spaces in the middle of each row.
* The third inner loop (`for(int j = i; j >= 1; j--)`) prints the right numbers (mirror) in each row.
* The `2*n-(i*2)` expression calculates the number of spaces needed in the middle of each row.
* The pattern is printed row by row, with each row containing the left numbers, spaces, and right numbers.

## 🐛 Bugs / Errors Found — What, How, When, Fix
No bugs found ✅

## 🎤 Interview Questions & Answers
**Q1: What is the purpose of the outer loop in the code?**
> A: The outer loop (`for(int i = 1; i <= n; i++)`) controls the number of rows in the pattern. It loops from 1 to `n` (inclusive) and prints each row of the pattern.

**Q2: How does the code print the left numbers in each row?**
> A: The code prints the left numbers in each row using the first inner loop (`for(int j = 1; j <= i; j++)`). This loop starts from 1 and goes up to the current row number (`i`), printing each number.

**Q3: What is the purpose of the expression `2*n-(i*2)` in the code?**
> A: The expression `2*n-(i*2)` calculates the number of spaces needed in the middle of each row. It subtracts twice the current row number (`i`) from twice the total number of rows (`n`), giving the number of spaces needed.

**Q4: How does the code print the right numbers (mirror) in each row?**
> A: The code prints the right numbers (mirror) in each row using the third inner loop (`for(int j = i; j >= 1; j--)`). This loop starts from the current row number (`i`) and goes down to 1, printing each number in reverse order.

**Q5: What would happen if the user enters a negative number for `n`?**
> A: If the user enters a negative number for `n`, the outer loop (`for(int i = 1; i <= n; i++)`) would not execute, and the program would not print any output. This is because the loop condition (`i <= n`) would be false from the start. To handle this, the code could add a check to ensure that `n` is a positive integer before printing the pattern.