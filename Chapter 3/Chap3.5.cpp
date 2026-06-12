#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number to find Prime or Not: ";
    cin >> n;
    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime) {
        cout << "Is Prime Number" << endl;
    } else {
        cout << "Not a Prime number" << endl;
    }

    return 0;
}