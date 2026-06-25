// Find Single Unique Number
// Problem: Given an array where all elements appear twice except one,
// find the element that appears only once using XOR operation
#include<vector>
#include<iostream>
#include<climits>
using namespace std;

// Function to find the single unique number using XOR
// XOR of two same numbers is 0, so all pairs cancel out leaving the unique number
int singleNumber(vector<int>& nums ){
    // Initialize result to 0
    // XORing with 0 doesn't change the value
    int ans= 0;
    
    // XOR each element with result
    for(int val : nums){
        ans^=val;  // XOR operation: pairs cancel out, unique number remains
    }
    
    return ans;
}
// Main function - Entry point of the program
int main(){
    // Test array with numbers
    vector<int> nums= {1, 2, 3, 4};
    
    // Call function and display result
    cout<<singleNumber(nums)<<endl;
    return 0;
}