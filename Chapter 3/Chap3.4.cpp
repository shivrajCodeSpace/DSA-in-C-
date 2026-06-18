// Program to print the sum of odd numbers from 1 to N
#include<iostream>
using namespace std;

int main() {
    int sum = 0;
    int n;

    // Read input
    cout << "Enter Number:";
    cin >> n;

    // Add all odd numbers up to n
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    // Display the result
    cout << "Sum is:" << sum << endl;
    return 0;
}