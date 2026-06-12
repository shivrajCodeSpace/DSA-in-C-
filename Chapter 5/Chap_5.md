# Chapter 4: Functions in C++

## What is a function?
A function is a named block of code that performs a specific task. Functions help organize code, enable reuse, and break problems into smaller pieces.

## Function syntax
A typical function has a return type, a name, a parameter list (optional), and a body.

```cpp
// return_type function_name(parameter_list) {
//     // body
// }

int add(int a, int b) {
    return a + b;
}
```

## Types of functions
- **Void functions**: do not return a value (`void`).
- **Value-returning functions**: return a value of a specified type (e.g., `int`, `double`).
- **Inline functions**: suggested to be expanded inline by the compiler (`inline`).
- **Recursive functions**: call themselves to solve subproblems.
- **Overloaded functions**: same name, different parameter lists.

## Return type
The return type declares what type of value the function produces. Use `void` when no value is returned.

Example returning a value:

```cpp
int square(int x) {
    return x * x;
}
```

## Function declaration (prototype) vs definition vs call
- **Declaration (prototype)**: tells the compiler about the function signature before its use.

```cpp
int add(int a, int b); // declaration/prototype
```

- **Definition**: provides the actual body (implementation).

```cpp
int add(int a, int b) {
    return a + b;
}
```

- **Call / Invoke**: executing the function by name with arguments.

```cpp
int result = add(3, 4); // function call
```

Putting it together:

```cpp
#include <iostream>
using namespace std;

int add(int a, int b); // prototype

int main() {
    cout << add(2, 3) << endl; // call
    return 0;
}

int add(int a, int b) { // definition
    return a + b;
}
```

## Parameters and arguments (formal vs actual)
- **Parameter (formal parameter)**: the variable name in the function definition or declaration (e.g., `int a`).
- **Argument (actual parameter)**: the real value passed to the function when calling it (e.g., `3` in `add(3,4)`).

## Passing by value
When parameters are passed by value, the function receives a copy of the argument. Modifying the parameter inside the function does not change the original variable.

Example:

```cpp
void increment(int x) {
    x = x + 1; // modifies local copy only
}

int main() {
    int n = 5;
    increment(n);
    // n is still 5 here
}
```

## (Brief) Passing by reference
You can also pass by reference to allow the function to modify the caller's variable using `&`:

```cpp
void incrementRef(int &x) {
    x = x + 1; // modifies caller's variable
}
```

## Example: function with return type and parameters

```cpp
#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int res = multiply(4, 5);
    cout << "4 * 5 = " << res << endl;
    return 0;
}
```

## Summary
- Functions have a return type, name, parameters, and body.
- Declaration (prototype) announces the signature; definition implements it; call executes it.
- Parameters are formal; arguments are actual.
- Pass-by-value sends copies; pass-by-reference (`&`) allows modification of originals.
- Prefer small, single-purpose functions for readability and reuse.
