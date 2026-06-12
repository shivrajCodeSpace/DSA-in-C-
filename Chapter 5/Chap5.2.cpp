//Find the factorial for N Number
#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact *=i;
    }
    return fact;
}
    int main(){
        int Num;
        cout<<"Enter a Number to Find the Factorial:";
        cin>>Num;
        cout<<Num<<" of Factorial is:"<<factorial(Num);
        return 0;
    }