
// Find the Character of UpperCase and LowerCase with Two different Logic
#include<iostream>
using namespace std;
int main(){
    
    char ch;
    cout<<"Enter a Character:";
    cin>>ch;

    // if(ch>= 'a' && ch <='z'){
    // Where we Used ASCII value to find out the UC and LC
    if(ch >= 97 && ch <= 122){
        cout<<"Lower Case"<<endl;
    }
    else if(ch >= 'A' && ch <='Z'){
            cout<<"Upper Case"<<endl;
    }
    


}