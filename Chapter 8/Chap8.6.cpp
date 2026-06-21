#include<iostream>
using namespace std;

// Brute-force approach: check every pair of elements
void uniqueinArray(int arr[], int sz){
    for(int i = 0; i < sz; i++){
        bool isUnique = true; // Assume current element is unique

        // Check whether the current element appears anywhere else
        for(int j = 0; j < sz; j++){
            if(i != j && arr[i] == arr[j]){
                isUnique = false;
                break;
            }
        }

        // Print the element if it is unique
        if(isUnique){
            cout << arr[i] << " ";
        }
    }
}

// Optimized approach: use a frequency counter
void uniqueinArrayOptimized(int arr[], int sz){
    int frequency[100] = {0}; // assuming values are small and within 0..99

    // Count frequency of each element
    for(int i = 0; i < sz; i++){
        frequency[arr[i]]++;
    }

    // Print elements that appear only once
    for(int i = 0; i < sz; i++){
        if(frequency[arr[i]] == 1){
            cout << arr[i] << " ";
        }
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 2, 3};
    int sz = sizeof(arr) / sizeof(arr[0]);

    // Call the original function
    uniqueinArray(arr, sz);
    cout << endl;

    // Call the optimized function
    uniqueinArrayOptimized(arr, sz);
    return 0;
}