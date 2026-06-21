
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int number[] = {1, 2, 3, 4, 5};
    int sz = sizeof(number)/sizeof(int);
    int smallest =INT_MAX;
    for(int i=0; i<sz; i++){
        smallest = min(smallest, number [i]);
    }
    cout << "The smallest number is: " << smallest << endl;
    return 0;
}