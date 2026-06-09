# 📝 Notes: q11_check_palindrome_string.cpp — Checks if a given string is a palindrome using recursion

## 🔑 Key Concepts (Easy to Remember)
| Concept | What it means |
| --- | --- |
| `bool f(int i, string &s)` | A recursive function that checks if a string is a palindrome |
| `using namespace std;` | Imports the standard library namespace to use its functions and classes |
| `string &s` | A reference to a string, used to avoid copying the string in the recursive function |
| `s.size() / 2` | The middle index of the string, used as the base condition for the recursion |
| `s[i] != s[s.size() - i - 1]` | Compares the current character with its mirror character in the string |
| `return f(i+1, s);` | Recursive call to check the next pair of characters |

## 📌 Must-Know Points
* The function `f` takes two parameters: the current index `i` and a reference to the string `s`.
* The base condition for the recursion is when `i` reaches the middle of the string.
* The function compares the current character with its mirror character in the string using `s[i] != s[s.size() - i - 1]`.
* If the characters match, the function calls itself with the next index `i+1`.
* The function returns `true` if the string is a palindrome and `false` otherwise.
* The `main` function reads a string from the user and calls the `f` function starting from index 0.

## 🐛 Bugs / Errors Found — What, How, When, Fix
| Bug/Error | What it is | When it happens | Fix |
| --- | --- | --- | --- |
| No input validation | The program does not check if the input string is empty or contains only spaces | When the user enters an empty string or a string with only spaces | Add input validation to check for empty or space-only strings |
| No error handling | The program does not handle errors that may occur during input or recursion | When an error occurs during input or recursion | Add error handling to catch and handle exceptions |
| No bugs found in the logic | The program's logic is correct and does not contain any bugs | N/A | N/A |

## 🎤 Interview Questions & Answers
**Q1: What is the purpose of the `f` function in the code?**
> A: The `f` function is a recursive function that checks if a given string is a palindrome.

**Q2: How does the `f` function compare characters in the string?**
> A: The `f` function compares the current character with its mirror character in the string using `s[i] != s[s.size() - i - 1]`.

**Q3: What is the base condition for the recursion in the `f` function?**
> A: The base condition for the recursion is when `i` reaches the middle of the string, i.e., `i >= s.size() / 2`.

**Q4: How does the `main` function read input from the user?**
> A: The `main` function reads a string from the user using `cin >> s;`.

**Q5: What is the output of the program if the input string is a palindrome?**
> A: The output of the program is `1` (true) if the input string is a palindrome.