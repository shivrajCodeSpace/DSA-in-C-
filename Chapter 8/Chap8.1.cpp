// Linear Search Algorithm
// Searches for a target element in an array by checking each element sequentially
#include<iostream>
#include<climits>
using namespace std;

// Function to perform linear search
// Returns index of target if found, otherwise returns -1
// Function to perform linear search
// Returns index of target if found, otherwise returns -1
int linearSearch(int arr[], int sz, int target){
    // Iterate through each element in the array
    for(int i=0; i<sz; i++){
        // If element matches target, return its index
        if (arr[i] == target){
            return i;
        }
    }
    // Target not found in array
    return -1;
}
// Main function - Entry point
int main()
{
    // Test array of integers
    int arr[] = {1, 2, 3, 4, 5};
    
    // Calculate size of array
    int sz = sizeof(arr)/sizeof(int);
    
    // Element to search for
    int target = 3;
    
    // Perform linear search
    int result = linearSearch(arr, sz, target);
    
    // Display result
    if(result != -1){
        cout << "Element found at index: " << result << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
    return 0;
}