// Program to calculate the sum of all elements in an array
#include<iostream>
#include<climits>
using namespace std;

// Function to find the sum of array elements
int sumofArray(int arr[], int sz) {
    int sum = 0;

    for (int i = 0; i < sz; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sz = sizeof(arr) / sizeof(arr[0]);

    // Print the total sum
    cout << sumofArray(arr, sz) << endl;
    return 0;
}
