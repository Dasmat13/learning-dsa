# 📝 Notes: q1_count_occurrences_of_number.cpp — Counts the occurrences of a given number in an array.

## 🔑 Key Concepts (Easy to Remember)
| Concept | What it means |
| --- | --- |
| `#include<bits/stdc++.h>` | Includes all standard C++ libraries. |
| `using namespace std;` | Avoids writing `std::` before `cout`, `cin`, etc. |
| `int arr[n];` | Declares an array of size `n`. |
| `cin >> n;` | Inputs the size of the array from the user. |
| `for(int i = 0; i < n; i++)` | Loops through the entire array. |
| `if(a[i] == number)` | Checks if the current element is equal to the given number. |
| `cnt = cnt + 1;` | Increments the count of occurrences. |
| `return cnt;` | Returns the total count after checking all elements. |

## 📌 Must-Know Points
* The code uses a function `f()` to count the occurrences of a given number in an array.
* The function takes three parameters: `number`, `a[]`, and `n`, where `number` is the value to find, `a[]` is the array, and `n` is the size of the array.
* The code uses a `for` loop to iterate through the array and check each element against the given number.
* If a match is found, the count is incremented by 1.
* The code uses `cin` to input the size of the array, the array elements, and the number to search for.
* The code uses `cout` to print the result.
* The code has a duplicate `#include<bits/stdc++.h>` and `using namespace std;` which is unnecessary and can be removed.
* The code does not handle cases where the input size is negative or zero.

## 🐛 Bugs / Errors Found — What, How, When, Fix
| Bug/Error | What it is | When it happens | Fix |
| --- | --- | --- | --- |
| Duplicate includes | Duplicate `#include<bits/stdc++.h>` and `using namespace std;` | At the beginning of the code | Remove the duplicates. |
| No error handling | No check for negative or zero input size | When the user inputs a negative or zero size | Add a check to handle these cases. |
| No validation | No validation for the input number | When the user inputs a non-integer value | Add validation to handle non-integer values. |

## 🎤 Interview Questions & Answers
**Q1: What is the purpose of the `f()` function in the code?**
> A: The `f()` function is used to count the occurrences of a given number in an array.

**Q2: How does the code handle cases where the input size is negative or zero?**
> A: The code does not handle these cases and will result in undefined behavior. To fix this, a check should be added to handle negative or zero input sizes.

**Q3: What is the time complexity of the code?**
> A: The time complexity of the code is O(n), where n is the size of the array, because the code uses a single loop to iterate through the array.

**Q4: How does the code use `cin` and `cout`?**
> A: The code uses `cin` to input the size of the array, the array elements, and the number to search for. The code uses `cout` to print the result.

**Q5: What is the purpose of the `using namespace std;` directive?**
> A: The `using namespace std;` directive is used to avoid writing `std::` before `cout`, `cin`, and other standard library functions. However, it is generally considered bad practice to use this directive in production code.