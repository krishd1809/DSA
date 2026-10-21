# DSA
complete DSA preparation

# Day 1: Array Problems in C++

Arrays are one of the most fundamental data structures in computer science. They store elements in contiguous memory locations, enabling efficient access through indexing. Many advanced data structures and algorithms are built upon concepts learned from array manipulation.

This section focuses on common array-based interview problems such as finding missing elements, identifying duplicates, frequency counting, and applying hashing techniques.

---

# 1. Find Missing Element

## File
`FindMissingElements.cpp`

## Theory

A missing element problem involves finding a number that is absent from a sequence that should otherwise follow a predictable pattern.

When an array contains numbers from `1` to `n` with exactly one missing value, the mathematical sum formula can be used efficiently.

```
Sum of first n natural numbers = n(n+1)/2
```

By comparing the expected sum with the actual sum of the array, the missing number can be determined without additional memory.

## Approach

```
Missing Element = Expected Sum - Actual Sum
```

### Time Complexity

O(n)

### Space Complexity

O(1)

---

# 2. Find Missing Element Starting From a Different Number

## File
`FindMissingElementsStartedFfrommid.cpp`

## Theory

In many practical scenarios, sequences do not start from `1`. For example:

```
6 7 8 9 10 11 13 14 15
```

The sum formula becomes less intuitive in such cases.

For a sorted sequence without missing values:

```
arr[i] - i
```

remains constant throughout the array.

Whenever this difference changes, it indicates that one or more values are missing before the current index.

This technique utilizes the relationship between array values and their indices, making it particularly useful for sorted arrays.

### Time Complexity

O(n)

### Space Complexity

O(1)

---

# 3. More Than One Missing Elements

## File
`MoreThanOneMissingElements.cpp`

## Theory

An array may contain multiple missing values rather than a single missing element.

For sorted arrays, the difference between the element value and its index remains constant until a missing number is encountered.

Example:

```
6 7 8 9 10 11 12 15 16
```

Expected difference:

```
arr[i] - i = 6
```

At value 15:

```
15 - 7 = 8
```

The increase in difference reveals that two elements are missing.

By continuously updating the difference, all missing numbers can be identified.

### Time Complexity

O(n)

### Space Complexity

O(1)

---

# 4. Find Missing Elements in Unsorted Array

## File
`FindMissingElementsUnsortedArray.cpp`

## Theory

When the array is unsorted, methods based on index-value relationships are no longer effective.

A common solution is hashing.

Hashing involves creating an auxiliary array where each position represents a possible value and stores its frequency of occurrence.

Example:

```
Hash[5] = 1
```

indicates that the value `5` exists in the array.

Any value whose frequency remains zero represents a missing element.

Hashing trades additional memory for faster lookup operations.

### Time Complexity

O(n + max)

### Space Complexity

O(max)

---

# 5. Duplicates in Sorted Array

## File
`DuplicatesInSoretdArray.cpp`

## Theory

A duplicate element is a value that appears more than once in a collection.

In sorted arrays, duplicate elements always appear adjacent to each other. This property eliminates the need for nested loops or extra memory.

Example:

```
3 6 8 8 10 12 15 15 15 20
```

Since equal values become neighbors after sorting, duplicates can be detected simply by comparing consecutive elements.

This is one of the major advantages of working with sorted data.

### Time Complexity

O(n)

### Space Complexity

O(1)

---

# 6. Counting Duplicates in Sorted Array

## File
`CountingDuplicatesInSoretdArray.cpp`

## Theory

Finding duplicates answers whether repeated values exist, while frequency counting determines how many times they occur.

Since a sorted array groups identical elements together, counting frequencies becomes efficient.

For every duplicate encountered, the traversal continues until a different value appears.

The number of occurrences is calculated as:

```
Frequency = Last Index - First Index + 1
```

Frequency analysis is a common technique used in data processing, statistics, and pattern matching.

### Time Complexity

O(n)

### Space Complexity

O(1)

---

# 7. Duplicates in Sorted and Unsorted Arrays Using Hashing

## File
`DuplicatesInSoretdandUnsortedArrayHashing.cpp`

## Theory

Hashing is one of the most widely used techniques in modern algorithms because it provides near-constant time access to stored information.

Instead of repeatedly scanning an array, a hash table stores frequency counts for each value.

Example:

```
hash[arr[i]]++;
```

After processing:

```
hash[i] = frequency of i
```

- Frequency = 0 → Element absent
- Frequency = 1 → Element appears once
- Frequency > 1 → Element is duplicated

The hashing technique forms the foundation of advanced data structures such as Hash Maps, Hash Sets, Dictionaries, and Associative Arrays.

### Time Complexity

O(n)

### Space Complexity

O(max)

---

# 8. Pair with Sum K in Unsorted Array Using Hashing

## File
`PairWithSumK.cpp`

## Theory

The Pair with Sum K problem involves finding all pairs of elements in an array whose sum is equal to a given target value `K`.

In an unsorted array, elements are arranged without any specific order, making it difficult to apply pointer-based techniques directly. A brute-force solution would compare every element with every other element, resulting in a time complexity of `O(n²)`.

To improve efficiency, hashing can be used. The idea is to store previously visited elements in a hash table and, for each current element, check whether the required complement already exists.

```text
Complement = K - arr[i]
```

If the complement is found in the hash table, a valid pair is identified.

Example:

```text
Array: 6 3 8 10 16 7 5 2 9 14
K = 10
```

For the element:

```text
7
```

the required complement is:

```text
10 - 7 = 3
```

Since `3` has already been encountered, the pair `(7, 3)` forms a valid solution.

Hashing transforms repeated searching operations into constant-time lookups, making it one of the most powerful techniques in Data Structures and Algorithms. It serves as the foundation for widely used structures such as Hash Maps, Hash Sets, Dictionaries, and Associative Arrays.

## Approach

1. Create a hash table to store visited elements.
2. Traverse the array.
3. For each element, calculate its complement.
4. Check whether the complement exists in the hash table.
5. If present, print the pair.
6. Store the current element in the hash table.

### Time Complexity

```text
O(n)
```

### Space Complexity

```text
O(max)
```

---

# 9. Pair with Sum K in Sorted Array Using Two Pointers

## File
`PairWithSumKSoretdArray.cpp`

## Theory

When the array is sorted, the Pair with Sum K problem can be solved efficiently using the Two-Pointer Technique.

A sorted array provides useful ordering information. Instead of checking every possible pair, two pointers are maintained at opposite ends of the array.

```text
Left Pointer  -> First Element
Right Pointer -> Last Element
```

At each step, the sum of the two elements is calculated.

```text
sum = arr[left] + arr[right]
```

Depending on the result:

- If `sum == K`, a valid pair is found.
- If `sum < K`, move the left pointer forward to increase the sum.
- If `sum > K`, move the right pointer backward to decrease the sum.

Since the array is sorted, moving the pointers guarantees progress toward the solution without revisiting previously checked pairs.

Example:

```text
Array: 1 3 4 5 6 8 9 10 12 14
K = 15
```

Valid pairs:

```text
(1,14)
(3,12)
(5,10)
(6,9)
```

The Two-Pointer technique is a common optimization over the brute-force approach. It eliminates unnecessary comparisons and achieves linear time complexity while requiring no extra memory.

## Approach

1. Initialize two pointers:
   - Left at the beginning.
   - Right at the end.
2. Calculate the sum of both elements.
3. If the sum equals `K`, print the pair and move both pointers.
4. If the sum is smaller than `K`, move the left pointer forward.
5. If the sum is greater than `K`, move the right pointer backward.
6. Continue until both pointers meet.

### Why Use Two Pointers?

Compared to the brute-force solution:

```text
O(n²)
```

the Two-Pointer technique reduces the complexity to:

```text
O(n)
```

by utilizing the sorted property of the array. This makes it one of the most frequently asked techniques in coding interviews and competitive programming.

### Time Complexity

```text
O(n)
```

### Space Complexity

```text
O(1)
```

---


## Author

**Krishna Dubbewar**

GitHub: https://github.com/krishd1809