#include <iostream>
using namespace std;


int sumN(int n){
    int sum =0;
    for(int i=0; i<=n; i++){
        sum += i;
    }
    return sum;
}
    int main(){
        int num;
        cout<<"Enter a N Number to Find the Sum:";
        cin>>num;
        cout<<"Sum is:"<<sumN(num);
        return 0;
    }