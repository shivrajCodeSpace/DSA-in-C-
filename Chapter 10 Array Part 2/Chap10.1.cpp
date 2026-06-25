// Maximum Sub Array Sum Problem
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// Function to find the maximum sum of a contiguous subarray
// Uses Kadane's algorithm approach
int maxSubArray(vector<int>& nums){
    // currSum: tracks the sum of current subarray
    // maxSum: stores the maximum sum found so far
    int currSum=0, maxSum=INT_MIN;

    // Iterate through each element in the array
    for(int val : nums){
        // Choose either start fresh from current element or extend previous sum
        currSum = max(val, currSum + val);
        // If current sum becomes negative, reset to 0 (start fresh)
        if(currSum < 0){
            currSum = 0;
        }
    } 
    // Return the maximum sum found
    return maxSum;
}
// Main function - Entry point of the program
int main()
{
   // Read the number of elements
   int n;
   cout<<"Enter numbers of Element:";
   cin>>n;
   
   // Create vector and input array elements
   vector<int> nums(n);
   for (int i=0; i< n; i++){
    cin>>nums[i];
   }
   
   // Calculate and display the maximum subarray sum
   cout<<"Maximum Sub Array is:"<< maxSubArray(nums)<<endl;
   return 0;
}