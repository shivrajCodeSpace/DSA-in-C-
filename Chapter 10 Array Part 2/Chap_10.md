# Chapter 10: Subarrays and Maximum Subarray Sum

## What is a subarray?
A subarray is a group of elements taken from an array in continuous order.

That means:
- the elements must be next to each other
- their order stays the same
- we cannot skip elements inside the chosen part

For example, for the array:

```cpp
arr = [2, -3, 4, -1, 5]
```

Some valid subarrays are:
- `[2]`
- `[2, -3, 4]`
- `[4, -1, 5]`
- `[-3, 4, -1, 5]`

But these are not subarrays:
- `[2, 4, 5]` ❌ (because 4 and 5 are not consecutive in the original array)
- `[2, -1]` ❌ (because -1 is not next to 2)

A subarray is also called a contiguous subarray.

---

## Why do we need subarrays?
Subarrays are used in many problems because they help us study parts of the data.

Common questions are:
- what is the maximum sum of any subarray?
- what is the minimum sum of any subarray?
- which subarray has a certain property?

One very common question is:
> Find the subarray whose sum is the largest.

This is exactly what Kadane's algorithm helps us solve.

---

## Brute force approach
A brute force approach means we do not try to be smart first. We simply try every possibility and check it.

### Idea
For every starting index `i`, we try every ending index `j` and compute the sum of the subarray from `i` to `j`.

This is like saying:
- start from first element, check all possible endings
- then move to second element, check all possible endings
- continue until the end

### Example
Suppose the array is:

```cpp
[1, -2, 3, 4, -1, 2, 1, -5, 4]
```

If we start from index 0, we check:
- `[1]`
- `[1, -2]`
- `[1, -2, 3]`
- `[1, -2, 3, 4]`
- and so on

Then we start from index 1 and check all subarrays beginning there.

### Pseudocode
```text
for i = 0 to n-1
    sum = 0
    for j = i to n-1
        sum = sum + arr[j]
        if sum is greater than current answer
            update answer
```

### Why this works
This method checks all possible subarrays, so we are guaranteed to find the correct answer.

### Time complexity
- The outer loop runs `n` times.
- The inner loop can run up to `n` times.
- So the total time is about `O(n^2)`.

### Disadvantage
The brute force method is simple, but for large arrays it becomes slow because it checks too many subarrays.

### Small intuition
If the array has 10,000 elements, checking every subarray is a lot of work. We want a faster method.

---

## Kadane's Algorithm
Kadane's algorithm is a smart way to find the maximum sum subarray in only `O(n)` time.

### Main idea
Instead of checking every subarray, we keep track of only two values:
- `currentSum` = the best sum of a subarray that ends at the current position
- `bestSum` = the best sum seen anywhere so far

### Important observation
At each element, we have only two choices:
1. Start a new subarray from this element
2. Extend the previous subarray

So we do:

```text
currentSum = max(arr[i], currentSum + arr[i])
bestSum = max(bestSum, currentSum)
```

### Why this is correct
If `currentSum` becomes negative, then adding it to the next elements will only make things worse.
So it is better to ignore that negative part and start a new subarray from the next element.

### Easy example
Suppose we are at a value and the running sum is negative.
Then:
- `currentSum + arr[i]` may be smaller than `arr[i]`
- so we choose `arr[i]` itself

This helps us avoid bad subarrays.

---

## Example of Kadane's algorithm
Take this array:

```cpp
[-2, 1, -3, 4, -1, 2, 1, -5, 4]
```

We will walk through it carefully.

### Step 1
- currentSum = -2
- bestSum = -2

Here, the first value itself is the best we have so far.

### Step 2
At value `1`:
- currentSum = max(1, -2 + 1) = max(1, -1) = 1
- bestSum = max(-2, 1) = 1

Now the best subarray ending here is just `[1]`.

### Step 3
At value `-3`:
- currentSum = max(-3, 1 + (-3)) = max(-3, -2) = -2
- bestSum = max(1, -2) = 1

The sum is still not good enough to improve the answer.

### Step 4
At value `4`:
- currentSum = max(4, -2 + 4) = 4
- bestSum = max(1, 4) = 4

Now we found a better ending subarray.

### Step 5
At value `-1`:
- currentSum = max(-1, 4 + (-1)) = 3
- bestSum = max(4, 3) = 4

The best subarray ending here is `[4, -1]` with sum 3, which is not better than 4.

### Step 6
At value `2`:
- currentSum = max(2, 3 + 2) = 5
- bestSum = max(4, 5) = 5

Now the best answer improves.

### Step 7
At value `1`:
- currentSum = max(1, 5 + 1) = 6
- bestSum = max(5, 6) = 6

This gives us the best so far.

### Step 8
At value `-5`:
- currentSum = max(-5, 6 + (-5)) = 1
- bestSum = max(6, 1) = 6

The answer remains 6.

### Step 9
At value `4`:
- currentSum = max(4, 1 + 4) = 5
- bestSum = max(6, 5) = 6

Final answer:

```text
Maximum subarray sum = 6
```

---

## C++ program using Kadane's algorithm

```cpp
#include <iostream>
#include <vector>
using namespace std;

int maxSubarraySum(vector<int> &arr) {
    int currentSum = arr[0];
    int bestSum = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        bestSum = max(bestSum, currentSum);
    }

    return bestSum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Maximum subarray sum is: " << maxSubarraySum(arr) << endl;

    return 0;
}
```

### Explanation of the code
- `currentSum` stores the best subarray ending at the current position.
- `bestSum` stores the best answer found so far.
- `max(arr[i], currentSum + arr[i])` decides whether to:
  - start new from `arr[i]`, or
  - continue the previous subarray

### Output

```cpp
Maximum subarray sum is: 6
```

---

## Complexity
- **Brute force:** `O(n^2)` time
- **Kadane's algorithm:** `O(n)` time and `O(1)` extra space

Why is Kadane faster?
- It visits each element once.
- It does not check every possible pair of start and end positions.

---

## Moore's Voting Algorithm
Moore's Voting Algorithm is a smart method to find the majority element in an array.

### What is a majority element?
A majority element is an element that appears more than half the time in the array.

If the array size is `n`, then a majority element must appear more than `n/2` times.

Example:
- In `[2, 2, 1, 1, 1, 2, 2]`, the majority element is `2`
- Because `2` appears 4 times out of 7, and `4 > 7/2`

If no element appears more than `n/2` times, then there is no majority element.

---

### Idea of Moore's Voting Algorithm
The main idea is to cancel pairs of different elements.

If we keep pairing one element with a different element, then the majority element will remain after all cancellations.

Example:
- Suppose we have `[7, 7, 5, 7, 5, 1, 5, 7, 5]`
- We can cancel `7` with `5`, `7` with `1`, and so on
- The element that remains more often is the majority candidate

---

### Step 1: Find the candidate
We keep:
- `candidate` = current possible majority element
- `count` = how many times it has been seen as a possible answer

Rules:
- If `count == 0`, set `candidate` to the current element
- If current element is same as `candidate`, increase `count`
- Otherwise decrease `count`

This works because different values cancel each other out.

---

### Step 2: Verify the candidate
After the first pass, the candidate may or may not be the real majority element.
So we run a second pass to count how many times it appears.

If its frequency is greater than `n/2`, print it.
Otherwise, there is no majority element.

---

### Example
Array:
```cpp
[3, 3, 4, 2, 4, 4, 2, 4]
```

#### First pass
- `candidate = 3`, `count = 1`
- compare each value and cancel pairs
- final candidate becomes `4`

#### Second pass
- count of `4` is 4
- size of array is 8
- `4 > 8/2` → true

So the majority element is `4`.

---

### C++ code for Moore's Voting Algorithm
```cpp
#include <iostream>
#include <vector>
using namespace std;

int findCandidate(vector<int> &arr) {
    int candidate = arr[0];
    int count = 1;

    for (int i = 1; i < arr.size(); i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    return candidate;
}

bool isMajority(vector<int> &arr, int candidate) {
    int freq = 0;
    for (int x : arr) {
        if (x == candidate) freq++;
    }
    return freq > arr.size() / 2;
}

int main() {
    vector<int> arr = {3, 3, 4, 2, 4, 4, 2, 4};

    int candidate = findCandidate(arr);

    if (isMajority(arr, candidate)) {
        cout << "Majority element is: " << candidate << endl;
    } else {
        cout << "No majority element exists" << endl;
    }

    return 0;
}
```

---

### Time and space complexity
- **Time:** `O(n)`
- **Space:** `O(1)`

This algorithm is faster than checking every element manually because it only needs two passes.

---

## Summary
- A subarray is a continuous part of an array.
- Brute force checks every subarray, so it is slow.
- Kadane's algorithm is faster because it keeps only the important information.
- Moore's Voting Algorithm helps us find a majority element in `O(n)` time and `O(1)` space.
- The core idea is:
  - keep adding if the sum helps
  - start fresh if the sum becomes bad
  - cancel different values to find the possible majority
