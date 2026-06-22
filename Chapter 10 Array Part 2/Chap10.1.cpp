#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxSubArray(vector<int>& nums){
    int currSum=0, maxSum=INT_MIN;

    for(int val : nums){
        currSum = max(val, currSum + val);
        if(currSum < 0){
            currSum = 0;

        }

    } return maxSum;
}
int main()
{
   int n;
   cout<<"Enter numbers of Element:";
   cin>>n;
   vector<int> nums(n);
   for (int i=0; i< n; i++){
    cin>>nums[i];
   }
   cout<<"Maximum Sub Array is:"<< maxSubArray(nums)<<endl;
}