# 📝 Notes: q10_reverse_array_one_pointer.cpp — Reverses an array using recursion with one pointer

## 🔑 Key Concepts (Easy to Remember)
| Concept | What it means |
| --- | --- |
| `#include<bits/stdc++.h>` | Includes all standard libraries in C++ |
| `using namespace std;` | Allows use of standard library functions without `std::` prefix |
| `void f(int i, int n, int arr[])` | Recursive function to reverse an array |
| `if(i >= n/2)` | Base condition to stop recursion when middle of array is reached |
| `swap(arr[i], arr[n-i-1])` | Swaps current element with its mirror element |
| `f(i+1, n, arr)` | Recursive call to move to next index |
| `int arr[n]` | Variable Length Array (VLA) to create array of size n |
| `cin` and `cout` | Input and output streams in C++ |

## 📌 Must-Know Points
* The recursive function `f` takes three parameters: current index `i`, size of array `n`, and the array `arr`.
* The base condition `if(i >= n/2)` stops the recursion when the middle of the array is reached.
* The `swap` function is used to swap the current element with its mirror element.
* The recursive call `f(i+1, n, arr)` moves to the next index and continues swapping inner elements.
* The `main` function takes input size of array, creates an array, inputs elements, calls the recursive function, and prints the reversed array.
* The use of VLA `int arr[n]` is specific to GCC and may not work in other compilers.
* The `using namespace std;` directive can lead to naming conflicts and is generally discouraged in large projects.

## 🐛 Bugs / Errors Found — What, How, When, Fix
| Bug/Error | What it is | When it happens | Fix |
| --- | --- | --- | --- |
| No input validation | Program assumes valid input size and elements | When invalid input is provided | Add input validation to handle invalid inputs |
| No error handling | Program does not handle errors during input/output | When errors occur during input/output | Add error handling to handle exceptions |
| VLA usage | VLA may not work in all compilers | When compiling with non-GCC compilers | Use dynamic memory allocation instead of VLA |
| No bounds checking | Program does not check array bounds | When accessing array elements | Add bounds checking to prevent out-of-bounds access |
| No bugs found in logic | Program logic is correct | - | No fix needed |

## 🎤 Interview Questions & Answers
**Q1: What is the purpose of the recursive function `f` in the given code?**
> A: The recursive function `f` is used to reverse an array by swapping elements from the start and end indices, moving towards the center of the array.

**Q2: How does the base condition `if(i >= n/2)` work in the recursive function?**
> A: The base condition `if(i >= n/2)` stops the recursion when the middle of the array is reached, as all required elements have been swapped by then.

**Q3: What is the purpose of the `swap` function in the given code?**
> A: The `swap` function is used to swap the current element with its mirror element, effectively reversing the array.

**Q4: How does the recursive call `f(i+1, n, arr)` work in the given code?**
> A: The recursive call `f(i+1, n, arr)` moves to the next index and continues swapping inner elements, effectively reversing the array.

**Q5: What are the potential issues with using VLA `int arr[n]` in the given code?**
> A: The use of VLA `int arr[n]` is specific to GCC and may not work in other compilers, and it can also lead to stack overflow for large input sizes. It is recommended to use dynamic memory allocation instead of VLA.