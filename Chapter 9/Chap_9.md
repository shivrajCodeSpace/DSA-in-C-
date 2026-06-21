# Chapter 9: Vectors in C++

## What is a vector?
A vector is a dynamic array in C++ that stores elements of the same data type.

Unlike a normal array, a vector can change its size during program execution.

### Why use vector?
- Easy to store multiple values
- Size can grow or shrink
- Supports many built-in functions
- Works well for DSA problems

---

## Include header file
```cpp
#include <vector>
using namespace std;
```

---

## How vector is initially declared
A vector can be declared in different ways:

### 1. Empty vector
```cpp
vector<int> v;
```
This creates an empty vector.

### 2. Vector with fixed size
```cpp
vector<int> v(5);
```
This creates a vector of size 5 and each element is initialized with `0`.

### 3. Vector with fixed size and value
```cpp
vector<int> v(5, 10);
```
This creates 5 elements, all initialized with `10`.

### 4. Vector with initial values
```cpp
vector<int> v = {1, 2, 3, 4, 5};
```
This is the most common way to initialize a vector.

### 5. Another way to initialize
```cpp
vector<int> v{1, 2, 3, 4, 5};
```

---

## Static allocation vs dynamic allocation

### Static allocation
Static allocation means memory is fixed at compile time.

Example:
```cpp
int arr[5];
```
- Size is fixed
- Cannot increase or decrease at runtime
- Memory is usually allocated on the stack

### Dynamic allocation
Dynamic allocation means memory is allocated during runtime.

Example:
```cpp
int* p = new int[5];
```
- Size can be decided while the program is running
- Memory is usually allocated on the heap
- Must be deleted manually

### Vector allocation
A vector is a dynamic container.
It uses dynamic memory allocation internally, so it can grow when needed.

---

## How vector allocates memory
A vector stores its elements in a contiguous block of memory.
That means all elements are stored one after another.

Example:
```cpp
vector<int> v = {10, 20, 30};
```
Memory layout looks like:

- `v[0]` → first element
- `v[1]` → second element
- `v[2]` → third element

### Size and capacity
- `size()` → number of elements currently stored
- `capacity()` → total space currently allocated

Example:
```cpp
vector<int> v;
v.push_back(10);
v.push_back(20);

cout << v.size() << endl;      // 2
cout << v.capacity() << endl;  // may be 2 or more
```

### Important point
If the vector runs out of space, it allocates a new bigger block of memory, copies old data there, and then deletes the old block.

This is why `push_back()` is usually efficient on average.

---

## STL (Standard Template Library)
STL is the part of C++ that provides ready-made data structures and algorithms.

It helps us write code faster and more efficiently.

### Why STL is important
- Saves time because many functions are already built-in
- Makes coding easier for arrays, lists, stacks, queues, maps, and vectors
- Gives us standard and reliable ways to solve problems

### STL containers
A container is an object that stores data.
Examples:
- `vector` → dynamic array
- `list` → linked list
- `stack` → LIFO structure
- `queue` → FIFO structure
- `map` → key-value pairs

### STL algorithms
STL also provides algorithms such as:
- `sort()`
- `reverse()`
- `find()`
- `binary_search()`

### Example of STL use
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 2, 9, 1};
    sort(v.begin(), v.end());

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
```

---

## For-each loop on vector
A for-each loop is used to traverse each element without using index values.

Example:
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
```

Output:
```cpp
1 2 3 4 5
```

### Note
For-each loop is useful for reading elements, but if you want to change values, use reference:

```cpp
for (int &x : v) {
    x = x * 2;
}
```

---

## Common vector functions

### 1. `push_back()`
Adds an element at the end.
```cpp
v.push_back(7);
```

### 2. `pop_back()`
Removes the last element.
```cpp
v.pop_back();
```

### 3. `size()`
Returns the number of elements.
```cpp
cout << v.size();
```

### 4. `capacity()`
Returns allocated storage space.
```cpp
cout << v.capacity();
```

### 5. `empty()`
Checks whether vector is empty.
```cpp
if (v.empty()) {
    cout << "Empty";
}
```

### 6. `clear()`
Removes all elements.
```cpp
v.clear();
```

### 7. `front()`
Returns first element.
```cpp
cout << v.front();
```

### 8. `back()`
Returns last element.
```cpp
cout << v.back();
```

### 9. `at(index)`
Accesses element safely with bounds checking.
```cpp
cout << v.at(2);
```

### 10. `insert()`
Inserts element at a specific position.
```cpp
v.insert(v.begin() + 1, 99);
```

### 11. `erase()`
Removes element from a position.
```cpp
v.erase(v.begin() + 1);
```

### 12. `resize()`
Changes the size of the vector.
```cpp
v.resize(8);
```

### 13. `reserve()`
Reserves memory without changing size.
```cpp
v.reserve(100);
```

---

## Example program using vector
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    for (int x : v) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}
```

---

## What is segmentation fault?
A segmentation fault happens when a program tries to access memory that it is not allowed to use.

This usually happens when:
- Accessing an index out of range
- Using a null or invalid pointer
- Accessing memory after it has been freed

### Example with vector
```cpp
vector<int> v(3);
cout << v[10]; // invalid access
```
This may cause undefined behavior or a segmentation fault.

### Safe way
Use `at(index)` instead of `[index]` when you want bounds checking.
```cpp
cout << v.at(2);
```

---

## Summary
- A vector is a dynamic array.
- It stores data in contiguous memory.
- It can grow automatically.
- `size()` tells current elements, `capacity()` tells allocated space.
- A for-each loop is used to traverse vectors easily.
- Invalid memory access may cause segmentation fault.
- Vector is very useful in DSA because it is flexible and efficient.
