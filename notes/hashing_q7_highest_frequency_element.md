# 📝 Notes: q7_highest_frequency_element.cpp — Finds the highest frequency element in an array using hashing.

## 🔑 Key Concepts (Easy to Remember)
| Concept | What it means |
| --- | --- |
| `#include<bits/stdc++.h>` | Includes all standard C++ libraries for convenience. |
| `using namespace std;` | Imports the standard namespace to avoid prefixing standard library elements. |
| `map<int, int> mapp;` | Declares a map (hash table) to store elements as keys and their frequencies as values. |
| `mapp[arr[i]]++` | Increments the frequency of an element in the map. |
| `for(auto it : mapp)` | Iterates over the map using a range-based for loop. |
| `it.first` and `it.second` | Access the key (element) and value (frequency) of a map entry. |

## 📌 Must-Know Points
* The code uses a map to store the frequency of each element in the array, allowing for efficient lookup and update of frequencies.
* The `map` data structure automatically handles duplicate keys by updating the associated value.
* The code iterates over the map twice: once to print the frequencies and again to find the highest frequency element.
* The `auto` keyword is used to deduce the type of the loop variable `it` in the range-based for loop.
* The code assumes that the input array is non-empty and that the user will enter valid integers.

## 🐛 Bugs / Errors Found — What, How, When, Fix
| Bug/Error | What it is | When it happens | Fix |
| --- | --- | --- | --- |
| Variable Length Array (VLA) | The code uses a VLA (`int arr[n];`) which is not standard C++. | When the code is compiled with a standard-compliant compiler. | Replace with a `std::vector<int>` or dynamically allocated array. |
| Missing error handling | The code does not check for input errors (e.g., non-integer input). | When the user enters invalid input. | Add error handling using `try`-`catch` blocks or input validation. |
| No bounds checking | The code assumes that the input array size is valid. | When the user enters a large or negative array size. | Add bounds checking to ensure the array size is valid. |
| No bugs found in the logic of finding the highest frequency element. |  |  |  |

## 🎤 Interview Questions & Answers
**Q1: What is the purpose of the `map` data structure in this code?**
> A: The `map` is used to store the frequency of each element in the array, allowing for efficient lookup and update of frequencies.

**Q2: How does the code handle duplicate elements in the array?**
> A: The `map` data structure automatically handles duplicate keys by updating the associated value, which in this case is the frequency of the element.

**Q3: What is the time complexity of the code?**
> A: The time complexity of the code is O(n), where n is the size of the input array, because the code iterates over the array twice: once to populate the map and again to find the highest frequency element.

**Q4: How does the code find the highest frequency element?**
> A: The code iterates over the map and keeps track of the maximum frequency and the corresponding element. When it finds a frequency that is higher than the current maximum, it updates the maximum frequency and the corresponding element.

**Q5: What are some potential issues with the code?**
> A: Some potential issues with the code include the use of a Variable Length Array (VLA), missing error handling, and no bounds checking. These issues can be addressed by replacing the VLA with a `std::vector<int>`, adding error handling and input validation, and adding bounds checking to ensure the array size is valid.