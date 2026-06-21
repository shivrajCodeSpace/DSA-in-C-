#include <iostream>
using namespace std;

   int reverseArray(int arr[], int sz){
    int start = 0, end = sz-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
   }
int main() {
    int arr[] ={1,2,34,45,7};
    int sz = sizeof(arr)/sizeof(int);
    reverseArray(arr, sz);
    cout<<"Reversed Array is:";
    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
