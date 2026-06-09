# 📝 Notes: q5_frequency_using_map.cpp — This C++ file calculates the frequency of each element in an array using a map and answers queries about the frequency of specific elements.

## 🔑 Key Concepts (Easy to Remember)
| Concept | What it means |
| --- | --- |
| `map<int, int> mapp` | A map that stores integers as keys and their frequencies as values. |
| `mapp[arr[i]]++` | Increments the frequency of the current array element in the map. |
| `for(auto it : mapp)` | Iterates over the map, where `it.first` is the key (array element) and `it.second` is the value (frequency). |
| `mapp[number]` | Returns the frequency of the given number, or 0 if it's not present in the map. |
| `unordered_map<int, int> mp` | An unordered map that stores integers as keys and their frequencies as values, with faster average time complexity than a regular map. |

## 📌 Must-Know Points
* The map automatically stores keys in sorted order.
* Accessing a key that's not present in the map returns 0.
* Iterating over the map using a range-based for loop is an easy way to traverse the elements.
* Using an array to store frequencies can cause memory issues for large values, so a map or unordered map is recommended instead.
* The time complexity of precomputing frequencies using a map is O(n log n), while querying is O(log n).
* Using an unordered map can reduce the time complexity of precomputing frequencies to O(n) and querying to O(1) on average.

## 🐛 Bugs / Errors Found — What, How, When, Fix
| Bug/Error | What it is | When it happens | Fix |
| --- | --- | --- | --- |
| Using array hashing for large values | Memory issue | When dealing with large values (up to 10^9) | Use a map or unordered map instead. |
| Assuming element exists | Returns 0 if not present | When accessing a key that's not in the map | Check if the key is present before accessing its value. |
| Forgetting that map is sorted | Output is in ascending order of keys | When iterating over the map | Be aware of the sorted order when iterating over the map. |
| No bugs found in the provided code |  |  |  |

## 🎤 Interview Questions & Answers
**Q1: What is the time complexity of precomputing frequencies using a map?**
> A: The time complexity of precomputing frequencies using a map is O(n log n), where n is the number of elements in the array.

**Q2: How can you reduce the time complexity of querying frequencies?**
> A: You can use an unordered map instead of a regular map to reduce the time complexity of querying frequencies to O(1) on average.

**Q3: What happens when you access a key that's not present in the map?**
> A: When you access a key that's not present in the map, it returns 0.

**Q4: Why is using an array to store frequencies not recommended for large values?**
> A: Using an array to store frequencies can cause memory issues for large values, so a map or unordered map is recommended instead.

**Q5: How do you iterate over the elements of a map?**
> A: You can iterate over the elements of a map using a range-based for loop, where `it.first` is the key (array element) and `it.second` is the value (frequency).