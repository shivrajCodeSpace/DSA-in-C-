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

Declaration, definition, and call are three separate concepts:

- **Declaration (prototype):** announces the function's signature (return type, name, and parameter types) so the compiler can check calls before it sees the implementation. Declarations are required when a function is used before it is defined or when separating interface (header) from implementation (source file).

    Example:

    ```cpp
    int add(int a, int b); // forward declaration / prototype
    ```

- **Definition:** provides the actual implementation (the function body). The definition must match the declared signature (same return type and parameter types).

    Example:

    ```cpp
    int add(int a, int b) {
            return a + b; // function body
    }
    ```

- **Call (invoke):** executes the function by name and passes actual arguments. The compiler checks that the call matches the function's signature (number and types of arguments).

    Example:

    ```cpp
    int result = add(3, 4); // call
    ```

Notes and tips:

- The parameter names in a declaration are optional: `int add(int, int);` is valid.
- Declarations are commonly placed in header files (`.h` / `.hpp`) and definitions in source files (`.cpp`). This enables separate compilation and clearer module boundaries.
- A function's signature (used for overload resolution) includes the function name and parameter types, but not the return type.
- Default parameter values may be specified in the declaration (not in multiple places).

Compact complete example (declaration, call, definition):

```cpp
#include <iostream>
using namespace std;

int add(int a, int b); // declaration (prototype)

int main() {
        cout << add(2, 3) << endl; // call
        return 0;
}

int add(int a, int b) { // definition (implementation)
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
