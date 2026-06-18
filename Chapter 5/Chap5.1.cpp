// Program to find the sum of numbers from 0 to n
#include <iostream>
using namespace std;

// Function to calculate the sum of numbers from 0 to n
int sumN(int n) {
    int sum = 0;

    for (int i = 0; i <= n; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    int num;

    // Take input from user
    cout << "Enter a N Number to Find the Sum:";
    cin >> num;

    // Display the result
    cout << "Sum is:" << sumN(num);
    return 0;
}