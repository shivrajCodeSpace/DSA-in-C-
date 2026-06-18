// Program to find the factorial of a number
#include<iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int Num;

    // Take input from user
    cout << "Enter a Number to Find the Factorial:";
    cin >> Num;

    // Print the result
    cout << Num << " of Factorial is:" << factorial(Num);
    return 0;
}