#include <iostream> // for cout and cin
#include <vector>  // included but not used in this file
#include <climits> // included but not used in this file

using namespace std;

// Convert a binary number expressed as digits in an integer
// to its decimal equivalent.
// Example: binaryToDecimal(1011) returns 11.
int binaryToDecimal(int binNum) {
    int ans = 0;  // holds the decimal result
    int pow = 1;  // current power of 2 (1, 2, 4, 8,...)

    while (binNum > 0) {
        int rem = binNum % 10;  // extract the last binary digit
        ans += rem * pow;       // add its decimal contribution
        binNum /= 10;           // remove the last digit
        pow *= 2;               // move to the next power of 2
    }

    return ans;
}

int main() {
    int binNum;
    cout << "Enter a number to convert from binary to decimal: ";
    cin >> binNum;

    // Print the original binary number and its decimal conversion.
    cout << "Binary number " << binNum << " is "
         << binaryToDecimal(binNum) << " in decimal." << endl;

    return 0;
}