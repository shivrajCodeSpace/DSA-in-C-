# Chapter 2: Variables, Data Types, and Operators in C++

## Variables

### Definition

A variable is a named storage location in memory that holds a value. In C++, every variable has a data type and a name.

### Representation

A variable is declared using a type name followed by an identifier. You can assign a value when declaring it.

Example:

```cpp
int age = 20;
float price = 9.99;
char grade = 'A';
```

### Application

Variables are used to store and manipulate data in a program. They keep values that can change during program execution.

Common uses:

- Store user input
- Track counters and loop variables
- Hold intermediate results
- Maintain program state

### Advantages

- Makes programs flexible and dynamic
- Enables reuse of values through identifiers
- Simplifies calculations and data management
- Improves code readability and organization

### Characteristics

- Has a name, type, and value
- Occupies memory in the computer
- Can be updated during program execution
- Must be declared before use in C++
- Can have an initial value or be assigned later

## Data Types

### Definition

A data type defines the kind of value a variable can hold, such as integer, floating-point, character, or boolean.

### Representation

Data types are expressed with keywords like `int`, `float`, `double`, `char`, `bool`, and `string`.

Common C++ data types and typical sizes:

- `int`: integer values like `5`, `-10`, `0` — usually 4 bytes
- `float`: single-precision decimal values like `3.14` — usually 4 bytes
- `double`: double-precision decimal values like `2.71828` — usually 8 bytes
- `char`: single character like `'a'` — 1 byte
- `bool`: boolean values `true` or `false` — usually 1 byte
- `string`: text, created with `#include <string>` — size varies depending on content

### Application

Data types determine how the computer stores values and which operations are allowed.

Uses include:

- Choosing the right type for numbers, text, or true/false answers
- Improving performance by using smaller data types when appropriate
- Preventing invalid operations or data loss

### Advantages

- Enforces correct use of values in code
- Helps the compiler detect type errors
- Optimizes memory usage
- Supports different kinds of computation

### Characteristics and Types

Data type characteristics:

- Defines the size and range of values
- Controls the type of operations allowed
- Influences memory allocation
- Affects precision for numeric values

Type categories in C++:

- **Primitive types**: `int`, `float`, `double`, `char`, `bool`
- **Derived types**: arrays, pointers, references
- **User-defined types**: `struct`, `class`, `enum`
- **Library types**: `string` and containers from the standard library

## Operators

### Definition

Operators perform operations on values and variables. They are symbols that tell the compiler what action to take.

### Representation

Operators are written between or before operands, depending on the operator type.

#### Arithmetic operators

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

#### Comparison operators

- `==` equal to
- `!=` not equal to
- `>` greater than
- `<` less than
- `>=` greater than or equal to
- `<=` less than or equal to

#### Logical operators

- `&&` and
- `||` or
- `!` not

#### Unary operators

Unary operators work with a single operand.

- `++` increment: adds 1 to a variable
- `--` decrement: subtracts 1 from a variable
- `+` unary plus: indicates a positive value
- `-` unary minus: negates a value
- `!` logical NOT: inverts a boolean value

##### Pre-increment and pre-decrement

- `++a` increments `a` first, then returns the new value.
- `--a` decrements `a` first, then returns the new value.

Example:

```cpp
int a = 5;
int b = ++a; // a becomes 6, b is 6
int c = --a; // a becomes 5, c is 5
```

##### Post-increment and post-decrement

- `a++` returns the current value, then increments `a`.
- `a--` returns the current value, then decrements `a`.

Example:

```cpp
int a = 5;
int b = a++; // b is 5, then a becomes 6
int c = a--; // c is 6, then a becomes 5
```

### Application

Operators are used to compute values, compare values, and control decision-making in programs.

Common uses:

- Perform arithmetic calculations
- Compare values in conditions
- Combine conditions using logical operators
- Update values with increment and decrement operators

### Advantages

- Simplifies expressions in code
- Makes calculations readable and concise
- Enables decision-making and loops
- Supports complex expressions with mixed operators

### Characteristics and Types

Operator characteristics:

- Each operator has a specific purpose
- Some operators act on one operand, others on two
- Operators follow precedence and associativity rules
- Some operators can be overloaded in C++

Operator types:

- **Arithmetic operators**: `+`, `-`, `*`, `/`, `%`
- **Comparison operators**: `==`, `!=`, `>`, `<`, `>=`, `<=`
- **Logical operators**: `&&`, `||`, `!`
- **Unary operators**: `++`, `--`, `+`, `-`, `!`
- **Assignment operators**: `=`, `+=`, `-=`, `*=`, `/=`

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
 