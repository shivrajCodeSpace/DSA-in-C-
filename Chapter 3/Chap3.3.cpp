// Wap to find Sum of N Number

#include<iostream>
using namespace std;
int main(){
    char Op;
    int n;
    cout<<"Find the Sum of ODD and EVEN number."<<endl;
    cout<<"Enter option: between A And B:";
    cin>> Op;
    cout<<"Enter Number of Sum You Need:";
    cin>>n;


    int i, sum = 0;
    if(true){
        for(i=1; i<=n; i++){
            if(i%2!=0){
                sum=sum+i;
            }
        }
    }

    cout<<sum<<endl;
    return 0;

}