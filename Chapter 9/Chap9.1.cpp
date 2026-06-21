//Single Unique Number 
#include<vector>
#include<iostream>
#include<climits>
using namespace std;

int singleNumber(vector<int>& nums ){
    int ans= 0;
    for(int val : nums){
        ans^=val;
    }
    return ans;
}
int main(){
    vector<int> nums= {1, 2, 3, 4};
    cout<<singleNumber(nums)<<endl;
    return 0;

}