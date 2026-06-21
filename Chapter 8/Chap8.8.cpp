#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Intersection of the two arrays is: ";

    for (int i = 0; i < n; i++) {
        bool isCommon = false;

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
