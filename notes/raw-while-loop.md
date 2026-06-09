# 📝 Notes: raw-while-loop.cpp — A C++ file demonstrating various number-related operations using while loops

## 🔑 Key Concepts (Easy to Remember)
| Concept | What it means |
| --- | --- |
| `while` loop | A control structure that allows code to be executed repeatedly based on a given condition |
| `cin` | A function used to read input from the user |
| `cout` | A function used to print output to the console |
| `%` operator | The modulus operator, which returns the remainder of a division operation |
| `/` operator | The division operator, which performs integer division when both operands are integers |
| `pow` function | A function that calculates the power of a number |
| `if` statement | A control structure used to execute different blocks of code based on conditions |

## 📌 Must-Know Points
* The `while` loop is used to repeatedly execute a block of code as long as a certain condition is true.
* The `%` operator is used to extract the last digit of a number.
* The `/` operator is used to remove the last digit of a number.
* The `pow` function is used to calculate the power of a number.
* The `if` statement is used to check conditions and execute different blocks of code accordingly.
* It's essential to initialize variables before using them to avoid undefined behavior.
* The `using namespace std;` directive is used to avoid having to prefix standard library functions and objects with `std::`.

## 🐛 Bugs / Errors Found — What, How, When, Fix
| Bug/Error | What it is | When it happens | Fix |
| --- | --- | --- | --- |
| No input validation | The program does not check if the user input is valid | When the user enters a non-integer value | Add input validation to ensure the user enters a valid integer |
| No error handling | The program does not handle errors that may occur during execution | When an error occurs, such as division by zero | Add error handling to handle potential errors and exceptions |
| No bugs found in the given code |  |  | No bugs found ✅ |

## 🎤 Interview Questions & Answers
**Q1: What is the purpose of the `while` loop in the given code?**
> A: The `while` loop is used to repeatedly execute a block of code as long as a certain condition is true, such as reversing a number or checking if a number is a palindrome.

**Q2: How does the code extract the last digit of a number?**
> A: The code uses the `%` operator to extract the last digit of a number, which returns the remainder of the division operation.

**Q3: What is the purpose of the `pow` function in the code?**
> A: The `pow` function is used to calculate the power of a number, which is used to check if a number is an Armstrong number.

**Q4: How does the code check if a number is a palindrome?**
> A: The code checks if a number is a palindrome by reversing the number and comparing it with the original number.

**Q5: What is the purpose of the `if` statement in the code?**
> A: The `if` statement is used to check conditions and execute different blocks of code accordingly, such as checking if a number is a palindrome or an Armstrong number.