#include <iostream> // for cout and cin
#include <vector>  // included but not used in this file
#include <climits> // included but not used in this file

// Program to convert a decimal number into its binary form.
using namespace std;

int decimalToBinary(int decNum) {
    int ans = 0;  // holds the binary result
    int pow = 1;  // current power of 2 (1, 2, 4, 8,...)

    while (decNum > 0) {
        int rem = decNum % 2;  // extract the last decianl digit
        decNum /= 2;           // remove the last digit
        ans += rem * pow;       // add its binary contribution
        pow *= 10;               // move to the next power of 2
    }

    return ans;
}

int main() {
    int decNum;
    cout << "Enter a number to convert from binary to decimal: ";
    cin >> decNum;

    // Print the original Decimal number and its binary conversion.
    cout << "Deciaml number " << decNum << " is "
         << decimalToBinary(decNum) << " in Binary." << endl;

    return 0;
}