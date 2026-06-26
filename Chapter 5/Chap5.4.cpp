#include<iostream>

// Program to calculate the binomial coefficient nCr.
using namespace std;

// Function to calculate the factorial of a number.
int factorial(int n){
    int fact = 1;
    for(int i= 0; i<n; i++){
        fact *= i;
    }
    return fact;
}

// Function to compute the binomial coefficient nCr.
int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nMr = factorial(n - r);
    
    return fact_n / (fact_r * fact_nMr);
}

// Main function where program input and output are handled.
int main(){
    int n, r;

    // Take input values for n and r from the user.
    cout <<"Enter N and R to find the binomial Cofficient nCr";
    cin>>n>>r;

    // Display the computed binomial coefficient result.
    cout <<"The Binomial cofficient of nCr is:"<<nCr(n, r)<<endl;
}