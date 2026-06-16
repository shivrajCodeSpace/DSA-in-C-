# Chapter 7: Bitwise Operators in C++

## What are bitwise operators?
Bitwise operators work on the binary representation of integer values. They compare or shift individual bits and are useful for low-level programming, flags, and performance-sensitive code.

## Bitwise AND (`&`)
The bitwise AND operator compares each bit of two numbers and returns `1` only when both bits are `1`.

Example:
- `6` in binary = `0110`
- `3` in binary = `0011`
- `6 & 3` = `0010` = `2`

Use case: masking bits.

## Bitwise OR (`|`)
The bitwise OR operator compares each bit of two numbers and returns `1` when at least one bit is `1`.

Example:
- `6` in binary = `0110`
- `3` in binary = `0011`
- `6 | 3` = `0111` = `7`

Use case: setting bits.

## Bitwise XOR (`^`)
The bitwise XOR operator returns `1` when the bits are different, and `0` when they are the same.

Example:
- `6` in binary = `0110`
- `3` in binary = `0011`
- `6 ^ 3` = `0101` = `5`

Use case: toggling bits and simple parity checks.

## Left shift (`<<`)
The left shift operator moves bits to the left by a specified number of positions. Each shift left multiplies the number by `2`.

Example:
- `3` in binary = `0000 0011`
- `3 << 1` = `0000 0110` = `6`
- `3 << 2` = `0000 1100` = `12`

Use case: fast multiplication by powers of two.

## Right shift (`>>`)
The right shift operator moves bits to the right by a specified number of positions. Each shift right divides the number by `2` (for positive values).

Example:
- `12` in binary = `0000 1100`
- `12 >> 1` = `0000 0110` = `6`
- `12 >> 2` = `0000 0011` = `3`

Use case: fast division by powers of two and extracting lower bits.

## Example in C++
```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 6; // 0110
    int b = 3; // 0011

    cout << "a & b = " << (a & b) << endl; // 2
    cout << "a | b = " << (a | b) << endl; // 7
    cout << "a ^ b = " << (a ^ b) << endl; // 5
    cout << "a << 1 = " << (a << 1) << endl; // 12
    cout << "a >> 1 = " << (a >> 1) << endl; // 3

    return 0;
}
```

## Summary
- `&` keeps a bit only when both operands have `1`.
- `|` sets a bit when either operand has `1`.
- `^` sets a bit when operands differ.
- `<<` shifts bits left, multiplying by `2` for each step.
- `>>` shifts bits right, dividing by `2` for each step (for positive integers).
