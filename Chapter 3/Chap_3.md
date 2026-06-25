# Chapter 3: Conditional Statements and Loops in C++

## Overview

### Definition

Conditional statements and loops are control-flow mechanisms in C++. Conditionals make decisions based on values, while loops repeat code until a condition changes.

### Representation

- Conditional statements are written with `if`, `else if`, `else`, and `switch`.
- Loops are written with `for`, `while`, and `do-while`.
- Conditions use comparison and logical operators like `==`, `!=`, `>`, `<`, `&&`, and `||`.

### Application

- Use conditionals to choose between different execution paths.
- Use loops to repeat tasks, process collections, and run code while a condition is true.
- Together they control program behavior and make code dynamic.

### Advantages

- Enable decision-making in programs.
- Reduce repeated code using loops.
- Help manage complex logic with structured flow.
- Improve readability when used with clear conditions.

### Characteristics and Types

- Conditionals evaluate expressions and run code if the expression is true.
- Loops perform repeated execution while a condition remains true.
- Common conditional types: `if`, `if-else`, `else if`, `switch`, ternary operator.
- Common loop types: `for`, `while`, `do-while`.

## Conditional Statements

Conditional statements let your program make decisions based on conditions.

### `if` statement  

The `if` statement runs code only when a condition is true.

```cpp
int x = 10;
if (x > 5) {
    cout << "x is greater than 5" << endl;
}
```

### `if-else` statement

The `if-else` statement chooses between two paths.

```cpp
int x = 3;
if (x > 5) {
    cout << "x is greater than 5" << endl;
} else {
    cout << "x is not greater than 5" << endl;
}
```

### `else if` ladder

Use `else if` when you need more than two options.

```cpp
int x = 7;
if (x < 5) {
    cout << "x is less than 5" << endl;
} else if (x == 5) {
    cout << "x is equal to 5" << endl;
} else {
    cout << "x is greater than 5" << endl;
}
```

### `switch` statement

The `switch` statement selects one branch from many based on an integer or character value.

```cpp
char grade = 'B';
switch (grade) {
    case 'A':
        cout << "Excellent" << endl;
        break;
    case 'B':
        cout << "Good" << endl;
        break;
    case 'C':
        cout << "Average" << endl;
        break;
    default:
        cout << "Grade not recognized" << endl;
}
```

### Ternary operator

The ternary operator is a compact way to write simple `if-else` expressions in one line. It uses the form `condition ? value_if_true : value_if_false`.

Example:

```cpp
int x = 8;
string result = (x % 2 == 0) ? "even" : "odd";
cout << "x is " << result << endl;
```

This is equivalent to:

```cpp
string result;
if (x % 2 == 0) {
    result = "even";
} else {
    result = "odd";
}
```

Use the ternary operator when you want a short conditional assignment.

## Loops

Loops repeat a block of code while a condition is true.

### `for` loop

Use `for` when you know how many times the loop should run.

```cpp
for (int i = 0; i < 5; i++) {
    cout << "i = " << i << endl;
}
```

### `while` loop

Use `while` when the number of iterations is not known in advance.

```cpp
int i = 0;
while (i < 5) {
    cout << "i = " << i << endl;
    i++;
}
```

### `do-while` loop

A `do-while` loop runs the body at least once, then checks the condition.

```cpp
int i = 0;
do {
    cout << "i = " << i << endl;
    i++;
} while (i < 5);
```

## Common Loop Control

- `break`: exit the loop immediately.
- `continue`: skip the rest of the current iteration and continue with the next iteration.

Example with `break` and `continue`:

```cpp
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break; // stop the loop when i is 5
    }
    if (i % 2 == 0) {
        continue; // skip even numbers
    }
    cout << i << endl; // prints odd numbers until 5
}
```

## Example: Combining Conditionals and Loops

```cpp
for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
        cout << i << " is even" << endl;
    } else {
        cout << i << " is odd" << endl;
    }
}
```

## Nested Conditional Statements

Nested conditionals are conditionals inside other conditionals.

```cpp
int score = 85;
if (score >= 0) {
    if (score >= 90) {
        cout << "Grade A" << endl;
    } else if (score >= 75) {
        cout << "Grade B" << endl;
    } else {
        cout << "Grade C" << endl;
    }
} else {
    cout << "Invalid score" << endl;
}
```

## Nested Loops

Nested loops are loops inside other loops. They are useful for working with tables, grids, or repeated patterns.

Example with nested `for` loops:

```cpp
for (int row = 1; row <= 3; row++) {
    for (int col = 1; col <= 4; col++) {
        cout << "(" << row << "," << col << ") ";
    }
    cout << endl;
}
```

Example with a nested `while` loop:

```cpp
int row = 1;
while (row <= 3) {
    int col = 1;
    while (col <= 4) {
        cout << "(" << row << "," << col << ") ";
        col++;
    }
    cout << endl;
    row++;
}
```

## Summary

Conditional statements and loops are essential for controlling program flow.

- Use `if`, `if-else`, and `else if` for decision-making.
- Use `switch` for multi-way selection.
- Use `for`, `while`, and `do-while` for repetition.
- Use `break` and `continue` to control loop execution.
 