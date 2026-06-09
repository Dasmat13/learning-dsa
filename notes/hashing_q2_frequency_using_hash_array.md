# 📝 Notes: q2_frequency_using_hash_array.cpp — This C++ file calculates the frequency of elements in an array using a hash array.

## 🔑 Key Concepts (Easy to Remember)
| Concept | What it means |
| --- | --- |
| `#include<bits/stdc++.h>` | Includes all standard C++ libraries for convenience. |
| `using namespace std;` | Allows use of standard library elements without `std::` prefix. |
| `int arr[n];` | Declares an array of size `n`, where `n` is a variable. |
| `int hash[13] = {0};` | Initializes a hash array of size 13 with all elements set to 0. |
| `hash[arr[i]] += 1;` | Increments the count of an element in the hash array. |
| `while(q--)` | Decrements `q` after each iteration, allowing the loop to run `q` times. |

## 📌 Must-Know Points
* The code assumes that the input array elements will be between 0 and 12, as the hash array is of size 13.
* The hash array is used to store the frequency of each element in the input array.
* The code uses a variable-length array (VLA) `int arr[n];`, which is not standard in C++ and may not work with all compilers.
* The `while(q--)` loop is used to process queries, and the `q--` statement decrements `q` after each iteration.
* The code does not handle cases where the input array elements are outside the range of 0 to 12.

## 🐛 Bugs / Errors Found — What, How, When, Fix
| Bug/Error | What it is | When it happens | Fix |
| --- | --- | --- | --- |
| Out-of-range input | Input array elements are outside the range of 0 to 12. | When the user enters an element outside this range. | Increase the size of the hash array or add error checking to handle out-of-range inputs. |
| Variable-length array (VLA) | The code uses a VLA, which is not standard in C++. | When the code is compiled with a compiler that does not support VLAs. | Replace the VLA with a dynamically allocated array or a `std::vector`. |
| No error checking | The code does not check for errors when reading input. | When the user enters invalid input. | Add error checking to handle invalid input. |
| No bounds checking | The code does not check the bounds of the hash array. | When the user enters an element outside the range of 0 to 12. | Add bounds checking to handle out-of-range inputs. |
| Duplicate code | The code has duplicate comments and code blocks. | When the code is maintained or updated. | Remove duplicate code and comments to improve maintainability. |

## 🎤 Interview Questions & Answers
**Q1: What is the purpose of the hash array in this code?**
> A: The hash array is used to store the frequency of each element in the input array. It allows for efficient lookup of the frequency of each element.

**Q2: How does the code handle out-of-range input?**
> A: The code does not handle out-of-range input explicitly. It assumes that the input array elements will be between 0 and 12. If an element outside this range is entered, the code will exhibit undefined behavior.

**Q3: What is the time complexity of the code?**
> A: The time complexity of the code is O(n + q), where n is the size of the input array and q is the number of queries. The code iterates over the input array once to populate the hash array, and then iterates over the queries to process them.

**Q4: How does the code use dynamic memory allocation?**
> A: The code does not use dynamic memory allocation explicitly. However, the use of a variable-length array (VLA) `int arr[n];` can be considered a form of dynamic memory allocation, as the size of the array is determined at runtime.

**Q5: What are some potential improvements to the code?**
> A: Some potential improvements to the code include adding error checking to handle invalid input, using a dynamically allocated array or a `std::vector` instead of a VLA, and adding bounds checking to handle out-of-range inputs. Additionally, the code could be improved by removing duplicate code and comments to improve maintainability.