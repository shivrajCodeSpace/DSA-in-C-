// Program to find the sum of odd numbers up to N
#include<iostream>
using namespace std;

int main() {
    char Op;
    int n;

    // Take input from user
    cout << "Find the Sum of ODD and EVEN number." << endl;
    cout << "Enter option: between A And B:";
    cin >> Op;
    cout << "Enter Number of Sum You Need:";
    cin >> n;

    int i, sum = 0;

    // This loop adds only odd numbers from 1 to n
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum = sum + i;
        }
    }

    // Print the result
    cout << sum << endl;
    return 0;
}