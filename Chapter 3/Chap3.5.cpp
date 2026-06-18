// Program to check whether a number is prime or not
#include<iostream>
using namespace std;

int main() {
    int n;

    // Take input from user
    cout << "Enter Number to find Prime or Not: ";
    cin >> n;

    bool isPrime = true;

    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        isPrime = false;
    } else {
        // Check divisors from 2 up to sqrt(n)
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Print the result
    if (isPrime) {
        cout << "Is Prime Number" << endl;
    } else {
        cout << "Not a Prime number" << endl;
    }

    return 0;
}