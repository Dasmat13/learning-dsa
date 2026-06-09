# 📝 Notes: q3_character_frequency_in_string.cpp — This C++ file calculates the frequency of each character in a given string and answers queries about the frequency of specific characters.

## 🔑 Key Concepts (Easy to Remember)
| Concept | What it means |
| --- | --- |
| `hash[s[i] - 'a']` | Converts a character to its corresponding index in the hash array using ASCII values. |
| `int hash[26] = {0};` | Initializes a hash array of size 26 with all values set to 0, representing the frequency of each lowercase letter. |
| `cin >> s;` | Reads a string input from the user. |
| `while(q--)` | Loops through a specified number of queries. |
| `unordered_map<char, int>` | A data structure used to store the frequency of characters when the character set is unknown or mixed. |

## 📌 Must-Know Points
* The code assumes that the input string only contains lowercase letters.
* The hash array is of size 26, which corresponds to the 26 lowercase letters of the alphabet.
* The code uses the ASCII trick to convert characters to indices, where 'a' corresponds to index 0, 'b' to index 1, and so on.
* The time complexity of the precomputation step is O(n), where n is the length of the string, and the time complexity of each query is O(1).
* The code does not handle uppercase letters or characters outside the range of 'a' to 'z'.
* The use of `#include<bits/stdc++.h>` and `using namespace std;` is generally discouraged in production code due to potential naming conflicts and increased compilation time.

## 🐛 Bugs / Errors Found — What, How, When, Fix
| Bug/Error | What it is | When it happens | Fix |
| --- | --- | --- | --- |
| Out of bounds error | Accessing an index outside the range of the hash array | When the input character is not between 'a' and 'z' | Use a larger hash array or an unordered_map to handle unknown characters. |
| Incorrect index calculation | Using `hash[c]` instead of `hash[c - 'a']` | When calculating the index of a character | Use the correct index calculation `hash[c - 'a']`. |
| Uppercase letter handling | The code does not handle uppercase letters | When the input string contains uppercase letters | Convert the input string to lowercase or use a separate hash array for uppercase letters. |

## 🎤 Interview Questions & Answers
**Q1: What is the time complexity of the precomputation step in the given code?**
> A: The time complexity of the precomputation step is O(n), where n is the length of the string.

**Q2: How does the code handle queries about the frequency of specific characters?**
> A: The code uses a hash array to store the frequency of each character and answers queries in O(1) time complexity.

**Q3: What is the purpose of the ASCII trick used in the code?**
> A: The ASCII trick is used to convert characters to their corresponding indices in the hash array, where 'a' corresponds to index 0, 'b' to index 1, and so on.

**Q4: How would you modify the code to handle uppercase letters?**
> A: To handle uppercase letters, you can either convert the input string to lowercase or use a separate hash array for uppercase letters.

**Q5: What data structure would you use to store the frequency of characters when the character set is unknown or mixed?**
> A: When the character set is unknown or mixed, you can use an unordered_map to store the frequency of characters.