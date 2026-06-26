#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int fibonacci_N(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci_N(n-1) + fibonacci_N(n-2);
    
}
int main(){
    int n;
    cout <<"Enter N Number to find fibonacci Number";
    cin>>n;

    cout<<"Fibonacci Number is"<< fibonacci_N(n)<<endl;
    return 0;
}