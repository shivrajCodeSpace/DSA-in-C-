#include<iostream>
#include<vector>
using namespace std;

int uniqueEle(vector<int>& arr){
    int flag = arr[0];
    for(int i =1; i <arr.size() ;i++){
        int uniqueVal = flag^arr[i];
        flag = uniqueVal;
    }
    return flag;

}
int main(){
    vector<int> arr = {1, 2, 3, 2, 1, 4};
    cout<<uniqueEle(arr)<<endl;
    return 0;
}
