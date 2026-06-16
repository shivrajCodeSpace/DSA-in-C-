# Chapter 6: Binary Number System and Conversions

## What is the binary number system?
The binary number system uses only two digits: `0` and `1`. It is the base-2 number system and is the foundation of digital computers. Each binary digit is called a `bit`.

## MSB and LSB
- **MSB** stands for Most Significant Bit. It is the left-most bit in a binary number and contributes the largest value.
- **LSB** stands for Least Significant Bit. It is the right-most bit and contributes the smallest value.

Example:
- Binary `1011`
  - MSB = `1` (value 8)
  - LSB = `1` (value 1)

## Converting binary to decimal
To convert a binary number to decimal, multiply each bit by `2` raised to the position of the bit, starting from `0` on the right.

Example: Convert `1011` to decimal.
- `1 * 2^3 = 8`
- `0 * 2^2 = 0`
- `1 * 2^1 = 2`
- `1 * 2^0 = 1`
- Decimal result = `8 + 0 + 2 + 1 = 11`

### Steps
1. Write the binary number.
2. Number the bit positions from right to left starting at `0`.
3. Multiply each bit by `2^position`.
4. Add the results.

## Converting binary to octal
Binary to octal conversion groups bits in sets of three, starting from the right.

Example: Convert `101101` to octal.
- Group: `101` `101`
- `101` = `5`, `101` = `5`
- Octal result = `55`

If the left-most group has fewer than 3 bits, add leading zeros.
- Example: `1011` becomes `001 011` → octal `13`

## Converting binary to hexadecimal
Binary to hexadecimal conversion groups bits in sets of four, starting from the right.

Example: Convert `10110111` to hexadecimal.
- Group: `1011` `0111`
- `1011` = `B`, `0111` = `7`
- Hexadecimal result = `B7`

If the left-most group has fewer than 4 bits, add leading zeros.
- Example: `101` becomes `0101` → hexadecimal `5`

## Converting other numbers into binary
### Decimal to binary
To convert a decimal number to binary, divide the number by `2` repeatedly and record the remainders from bottom to top.

Example: Convert decimal `13` to binary.
- `13 / 2 = 6` remainder `1`
- `6 / 2 = 3` remainder `0`
- `3 / 2 = 1` remainder `1`
- `1 / 2 = 0` remainder `1`
- Read the remainders from last to first: `1101`

### Octal to binary
Convert each octal digit to a group of three binary bits.

Example: Convert octal `57` to binary.
- `5` → `101`
- `7` → `111`
- Binary result = `101111`

### Hexadecimal to binary
Convert each hexadecimal digit to a group of four binary bits.

Example: Convert hexadecimal `3A` to binary.
- `3` → `0011`
- `A` → `1010`
- Binary result = `00111010` (or `111010` without the leading zeros)

## One's complement
One's complement of a binary number is found by flipping every bit:
- `0` becomes `1`
- `1` becomes `0`

Example:
- Original binary: `1011001`
- One's complement: `0100110`

One's complement is useful for representing negative numbers in some older digital systems.

## Two's complement
Two's complement is a common way to represent signed integers in binary. To compute two's complement:
1. Find the one's complement (flip all bits).
2. Add `1` to the result.

Example: Compute two's complement of `1011001`.
- One's complement: `0100110`
- Add `1`: `0100110 + 1 = 0100111`

In two's complement representation, the MSB acts as the sign bit for signed numbers:
- `0` at MSB means positive or zero.
- `1` at MSB means negative when interpreted as a signed integer.

## Why two's complement?
- It provides a unique representation for `0`.
- It makes binary addition and subtraction easier.
- It handles positive and negative numbers naturally.

## Example conversions from binary
Binary: `1101101`
- Decimal: `1*2^6 + 1*2^5 + 0*2^4 + 1*2^3 + 1*2^2 + 0*2^1 + 1*2^0 = 64 + 32 + 0 + 8 + 4 + 0 + 1 = 109`
- Octal: group as `011 011 101` = `3 3 5` → `335`
- Hexadecimal: group as `0110 1101` = `6 D` → `6D`
- One's complement: `0010010`
- Two's complement: `0010011`

## Sample C++ program for conversions
```cpp
#include <iostream>
#include <string>
#include <bitset>

int binaryToDecimal(const std::string& binary) {
    int result = 0;
    for (char bit : binary) {
        result = result * 2 + (bit - '0');
    }
    return result;
}

std::string onesComplement(const std::string& binary) {
    std::string result;
    for (char bit : binary) {
        result += (bit == '0') ? '1' : '0';
    }
    return result;
}

std::string twosComplement(const std::string& binary) {
    std::string result = onesComplement(binary);
    int carry = 1;
    for (int i = result.size() - 1; i >= 0; i--) {
        int sum = (result[i] - '0') + carry;
        result[i] = (sum % 2) + '0';
        carry = sum / 2;
    }
    return result;
}
```

## Summary
- Binary uses only `0` and `1`.
- MSB is the most significant bit, LSB is the least significant bit.
- Convert binary to decimal by summing powers of 2.
- Convert binary to octal by grouping in threes.
- Convert binary to hexadecimal by grouping in fours.
- One's complement flips bits.
- Two's complement flips bits and adds one.
- Two's complement is the standard way to represent signed integers in modern digital systems.
