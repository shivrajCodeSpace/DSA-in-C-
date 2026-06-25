// Find the Unique Element using XOR Operation
#include<iostream>
#include<vector>
using namespace std;

// Function to find the single unique element in array
// All other elements appear an even number of times
// XOR property: a ^ a = 0 and a ^ 0 = a
int uniqueEle(vector<int>& arr){
    // Start with first element
    int flag = arr[0];
    
    // XOR each element with flag
    // Pairs cancel out (become 0), unique element remains
    for(int i =1; i <arr.size() ;i++){
        int uniqueVal = flag^arr[i];
        flag = uniqueVal;
    }
    
    return flag;

}
// Main function - Entry point
int main(){
    // Test array with elements where one is unique
    vector<int> arr = {1, 2, 3, 2, 1, 4};
    
    // Find and display the unique element
    cout<<uniqueEle(arr)<<endl;
    
    return 0;
}
