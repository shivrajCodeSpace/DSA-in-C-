// Find Intersection of Two Arrays
#include <iostream>
using namespace std;

int main() {
    // First array
    int arr1[] = {1, 2, 3, 4, 5};
    // Second array
    int arr2[] = {4, 5, 6, 7, 8};

    // Calculate sizes of both arrays
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Intersection of the two arrays is: ";

    // Iterate through first array
    for (int i = 0; i < n; i++) {
        // Flag to check if element is common
        bool isCommon = false;

        // Check if arr1[i] exists in arr2
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                isCommon = true;
                break;
            }
        }

        if (isCommon) {
            bool alreadyPrinted = false;
            for (int k = 0; k < i; k++) {
                if (arr1[k] == arr1[i]) {
                    alreadyPrinted = true;
                    break;
                }
            }

            if (!alreadyPrinted) {
                cout << arr1[i] << " ";
            }
        }
    }

    cout << endl;
    return 0;
}
