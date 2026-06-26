#include<iostream>
using namespace std;

// Function to calculate the sum of digits of a number.
int sumOfDigit(int num){
    int digSum = 0;
    while(num > 0){
        int lestDig = num % 10;  // Get the last digit.
        num /= 10;              // Remove the last digit.
        digSum += lestDig;      // Add it to the sum.
    }
    return digSum;              // Return the total sum.
}

int main(){
    int num;

    // Take input from the user.
    cout << "Enter a two or more number of Digit to Find the Sum of digit:";
    cin >> num;

    // Display the result.
    cout << "The Sum of Digit is:" << sumOfDigit(num) << endl;
    return 0;
}