# 📝 Notes: selection_sort.cpp — Implementation of the selection sort algorithm in C++
## 🔑 Key Concepts (Easy to Remember)
| Concept | What it means |
| --- | --- |
| `int arr[]` | Declaring an integer array |
| `arr[i]` | Accessing the i-th element of the array |
| `for (int i = 0; i < n; i++)` | Looping through the array from index 0 to n-1 |
| `if (arr[i] < arr[min_idx])` | Conditional statement to compare elements |
| `min_idx = i` | Updating the index of the minimum element |
| `swap(arr[i], arr[min_idx])` | Swapping two elements in the array |
| `void selectionSort(int arr[], int n)` | Function declaration for the selection sort algorithm |
| `int main()` | Main function where program execution begins |

## 📌 Must-Know Points
* The selection sort algorithm works by repeatedly finding the minimum element from the unsorted part of the array and swapping it with the first unsorted element.
* The outer loop iterates over each element in the array, while the inner loop finds the minimum element in the unsorted part of the array.
* The `min_idx` variable keeps track of the index of the minimum element found so far.
* The `swap` function is used to exchange two elements in the array.
* The time complexity of the selection sort algorithm is O(n^2), making it less efficient for large datasets.
* The space complexity is O(1), as only a single additional memory space is required for the temporary variable.

## 🐛 Bugs / Errors Found — What, How, When, Fix
No bugs found ✅

## 🎤 Interview Questions & Answers
**Q1: What is the time complexity of the selection sort algorithm?**
> A: The time complexity of the selection sort algorithm is O(n^2), where n is the number of elements in the array. This is because the algorithm uses two nested loops to compare and swap elements.

**Q2: How does the selection sort algorithm work?**
> A: The selection sort algorithm works by repeatedly finding the minimum element from the unsorted part of the array and swapping it with the first unsorted element. This process is repeated until the entire array is sorted.

**Q3: What is the space complexity of the selection sort algorithm?**
> A: The space complexity of the selection sort algorithm is O(1), as only a single additional memory space is required for the temporary variable used in the swap operation.

**Q4: Is the selection sort algorithm stable?**
> A: No, the selection sort algorithm is not stable. This means that if two elements have the same key, their order may be swapped during the sorting process.

**Q5: What are the advantages and disadvantages of using the selection sort algorithm?**
> A: The advantages of using the selection sort algorithm include its simplicity and low overhead in terms of extra memory needed. However, the algorithm has a high time complexity, making it less efficient for large datasets. Additionally, the algorithm is not stable, which can be a disadvantage in certain applications.