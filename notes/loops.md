# 📝 Notes: loops.cpp — A simple C++ program that demonstrates the use of a for loop to print numbers from 1 to 10.

## 🔑 Key Concepts (Easy to Remember)
| Concept | What it means |
| --- | --- |
| `#include<bits/stdc++.h>` | Includes the iostream standard file to perform input/output operations and the bits/stdc++.h is a non-standard header file that includes all the standard library headers. |
| `using namespace std;` | Allows the use of standard library elements without the `std::` prefix. |
| `int main()` | The main function where program execution begins. |
| `for(int i = 1; i <= 10; i++)` | A for loop that initializes a variable `i` to 1, checks if `i` is less than or equal to 10, and increments `i` by 1 in each iteration. |
| `cout << i << endl;` | Prints the value of `i` followed by a newline character. |

## 📌 Must-Know Points
* The `for` loop is used for repetitive execution of a set of statements.
* The loop variable `i` is initialized, checked, and incremented in each iteration.
* The `cout` statement is used for output, and `endl` is used to insert a newline character.
* The `using namespace std;` directive can lead to naming conflicts if not used carefully.
* The `bits/stdc++.h` header file is non-standard and should be avoided in production code.

## 🐛 Bugs / Errors Found — What, How, When, Fix
| Bug/Error | What it is | When it happens | Fix |
| --- | --- | --- | --- |
| No input validation | The program does not check for any input. | Always | Add input validation to handle unexpected inputs. |
| Non-standard header file | The program uses a non-standard header file `bits/stdc++.h`. | Always | Replace with standard header files like `iostream`. |
| Namespace pollution | The program uses `using namespace std;` which can lead to naming conflicts. | Always | Avoid using `using namespace std;` and use `std::` prefix instead. |
| No error handling | The program does not handle any errors. | Always | Add error handling mechanisms to handle unexpected errors. |
| No bugs found in the loop logic | The loop logic is correct. | Never | No fix needed. |

## 🎤 Interview Questions & Answers
**Q1: What is the purpose of the `for` loop in the given code?**
> A: The `for` loop is used to print numbers from 1 to 10.

**Q2: What is the difference between `cout` and `endl` in C++?**
> A: `cout` is used to print output, while `endl` is used to insert a newline character and flush the buffer.

**Q3: Why is `using namespace std;` considered bad practice?**
> A: `using namespace std;` can lead to naming conflicts and pollute the global namespace, making it harder to debug and maintain code.

**Q4: What is the purpose of the `main` function in C++?**
> A: The `main` function is the entry point of a C++ program, where program execution begins.

**Q5: What are the advantages and disadvantages of using `bits/stdc++.h` header file?**
> A: The advantage of using `bits/stdc++.h` is that it includes all standard library headers, making it easier to write code. However, the disadvantage is that it is non-standard, can lead to longer compilation times, and may not be supported by all compilers.