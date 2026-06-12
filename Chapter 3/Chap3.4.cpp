// This Code of Sum of ODD number From 1 to N
#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int n;
    cout <<"Enter Number:";
    cin >>n; 
    for(int i=1; i<=n; i++){
        if(i % 2 != 0){
        sum += i;
    }
    }
    cout<<"Sum is:"<<sum<<endl;
    return 0;
}