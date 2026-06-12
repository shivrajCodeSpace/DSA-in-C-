# Chapter 2: Variables, Data Types, and Operators in C++

## Variables

A variable is a named storage location in memory that holds a value. In C++, every variable has a type and a name.

Example:

```cpp
int age = 20;
float price = 9.99;
char grade = 'A';
```

- `int` stores whole numbers.
- `float` stores decimal numbers.
- `char` stores a single character.

## Data Types

Common C++ data types and their typical sizes in memory:

- `int`: integer values like `5`, `-10`, `0` — usually 4 bytes
- `float`: single-precision decimal numbers like `3.14` — usually 4 bytes
- `double`: double-precision decimal numbers like `2.71828` — usually 8 bytes
- `char`: single character like `'a'` — 1 byte
- `bool`: boolean values `true` or `false` — usually 1 byte
- `string`: text, created with `#include <string>` — size varies depending on the text content

## Operators

Operators perform operations on values and variables.

### Arithmetic operators

- `+` addition
- `-` subtraction
- `*` multiplication
- `/` division
- `%` remainder

Example:

```cpp
int x = 5 + 3;
int y = 10 - 2;
int z = x * y;
```

### Comparison operators

- `==` equal to
- `!=` not equal to
- `>` greater than
- `<` less than
- `>=` greater than or equal to
- `<=` less than or equal to

### Logical operators

- `&&` and
- `||` or
- `!` not

### Unary operators

Unary operators work with a single operand.

- `++` increment: adds 1 to a variable
- `--` decrement: subtracts 1 from a variable
- `+` unary plus: indicates a positive value
- `-` unary minus: negates a value
- `!` logical NOT: inverts a boolean value

#### Pre-increment and pre-decrement

- `++a` increments `a` first, then returns the new value.
- `--a` decrements `a` first, then returns the new value.

Example:

```cpp
int a = 5;
int b = ++a; // a becomes 6, b is 6
int c = --a; // a becomes 5, c is 5
```

#### Post-increment and post-decrement

- `a++` returns the current value, then increments `a`.
- `a--` returns the current value, then decrements `a`.

Example:

```cpp
int a = 5;
int b = a++; // b is 5, then a becomes 6
int c = a--; // c is 6, then a becomes 5
```

#### Other unary examples

```cpp
int x = 5;
int y = -x; // y is -5
bool flag = false;
flag = !flag; // flag becomes true
```

## Type Casting and Type Conversion

Type conversion changes a value from one type to another.

### Implicit conversion

C++ can automatically convert one type to another when it is safe to do so.

```cpp
int a = 10;
double b = a; // implicit conversion from int to double
```

### Explicit conversion (type casting)

When automatic conversion is not safe or when you want to force a conversion, use explicit casting.

```cpp
float c = 3.14f;
int d = (int)c; // explicit cast from float to int
```

### Common type conversion examples

- `int` to `double` (safe, no data loss for integer values)
- `double` to `int` (possible data loss, fractional part removed)
- `char` to `int` (stores character code)

C++ also uses conversion rules such as integer promotion and usual arithmetic conversions when expressions combine different types.

## Input and Output

### Output with `cout`

```cpp
#include <iostream>
using namespace std;

int main() {
    int number = 7;
    cout << "Number: " << number << endl;
    return 0;
}
```

### Input with `cin`

```cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "You entered: " << x << endl;
    return 0;
}
```

## Compile and Run Process

To turn source code into an executable, follow these steps:

1. Write the C++ source file, for example `index.cpp`.
2. Compile it using a compiler such as `g++`.
3. The compiler generates an executable file.
4. Run the executable to execute the program.

### Example using `g++`

```bash
g++ index.cpp -o index
./index
```

- `g++ index.cpp` compiles the code.
- `-o index` names the output executable `index`.
- `./index` runs the compiled program.

## What Happens During Compilation

- The compiler checks the code for syntax errors.
- It converts source code into machine code.
- It links any libraries or required code.
- It produces the final executable file.

## Summary

This chapter introduces:

- Variables and data types in C++
- Operators for arithmetic, comparison, and logic
- Type casting
- Standard input and output using `cin` and `cout`
- The compile-run workflow from source code to executable
 