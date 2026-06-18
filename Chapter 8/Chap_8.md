# Chapter 8: Arrays (Revision)

## Introduction

An array is a collection of elements of the same data type stored in contiguous memory locations.

## Features of Arrays

- Same type of elements
- Fixed size
- Easy indexing
- Efficient for storing multiple values

## Syntax

```cpp
dataType arrayName[size];
```

Example:

```cpp
int marks[5];
```

## Indexing

- First element index is `0`
- Last element index is `size - 1`

Example:

```cpp
int arr[5] = {10, 20, 30, 40, 50};
cout << arr[0] << endl;
cout << arr[4] << endl;
```

## Operations on Arrays

### Input with `cin`

```cpp
for (int i = 0; i < 5; i++) {
    cin >> arr[i];
}
```

### Output with `cout`

```cpp
for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}
```

### Traversing an Array

```cpp
for (int i = 0; i < 5; i++) {
    cout << arr[i] << endl;
}
```

## `sizeof` Operator

```cpp
cout << sizeof(arr) << endl;
cout << sizeof(arr[0]) << endl;
```

## Summary

Arrays are used to store multiple values in a structured way and are accessed using indexes.
