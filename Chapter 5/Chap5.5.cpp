// Prime Number Checker - Print all primes from 2 to N
#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrimeNumber(int n) {
    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        return false;
    }

    // Check divisors from 2 to sqrt(n)
    // If any number divides n, it's not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    // If no divisors found, number is prime
    return true;
}

// Main function - Entry point
int main() {
    // Read upper limit from user
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Check if input is valid
    if (n < 2) {
        cout << "No prime numbers in this range." << endl;
        return 0;
    }

    // Find and display all prime numbers from 2 to n
    cout << "Prime numbers from 2 to " << n << ":\n";
    for (int i = 2; i <= n; i++) {
        // Check if current number is prime
        if (isPrimeNumber(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
