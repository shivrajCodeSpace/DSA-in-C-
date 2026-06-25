
// Find the Smallest Number in an Array
#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Test array of numbers
    int number[] = {1, 2, 3, 4, 5};
    
    // Calculate array size
    int sz = sizeof(number)/sizeof(int);
    
    // Initialize smallest to maximum integer value
    // Initialize smallest to maximum integer value
    int smallest =INT_MAX;
    
    // Iterate through array to find minimum value
    for(int i=0; i<sz; i++){
        smallest = min(smallest, number [i]);
    }
    
    // Display the smallest number found
    cout << "The smallest number is: " << smallest << endl;
    return 0;
}