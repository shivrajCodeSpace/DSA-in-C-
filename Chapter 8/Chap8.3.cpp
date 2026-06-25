// Reverse Array Algorithm
#include <iostream>
using namespace std;

// Function to reverse an array in-place
// Uses two pointers moving towards the center, swapping elements
int reverseArray(int arr[], int sz){
    // Initialize pointers at start and end of array
    int start = 0, end = sz-1;
    
    // Continue until pointers meet at the middle
    while(start < end){
        // Swap elements at start and end positions
        swap(arr[start], arr[end]);
        
        // Move pointers towards the center
        start++;
        end--;
    }
}
// Main function - Entry point
int main() {
    // Test array of integers
    int arr[] ={1,2,34,45,7};
    
    // Calculate array size
    int sz = sizeof(arr)/sizeof(int);
    
    // Call function to reverse the array
    reverseArray(arr, sz);
    
    // Display reversed array
    cout<<"Reversed Array is:";
    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
