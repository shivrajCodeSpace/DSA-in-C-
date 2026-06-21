#include <iostream>
#include <climits>
using namespace std;

// Function to swap the smallest and largest elements in the array
void swapMinMax(int arr[], int sz){
    int smallest = INT_MAX; // stores the smallest value found
    int largest = INT_MIN;  // stores the largest value found

    // Find the smallest and largest values in the array
    for(int i = 0; i < sz; i++){
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]);
    }

    // Replace the smallest value with the largest value
    // and the largest value with the smallest value
    for(int i = 0; i < sz; i++){
        if(arr[i] == smallest){
            arr[i] = largest;
        }
        else if(arr[i] == largest){
            arr[i] = smallest;
        }
    }
}

int main(){
    int arr[] = {4, 55, 63, -4, 52, 0, 1};
    int sz = sizeof(arr) / sizeof(arr[0]);

    // Call the function to swap min and max values
    swapMinMax(arr, sz);

    // Display the updated array
    for(int i = 0; i < sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}