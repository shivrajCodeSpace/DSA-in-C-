// Program to find the grade based on marks
#include<iostream>
using namespace std;

int main()
{
    int marks;

    // Take input from user
    cout << "Enter Obtained Mark:";
    cin >> marks;

    // Check marks and print the corresponding grade
    if (marks >= 90) {
        cout << "Grade A" << endl;
    } else if (marks >= 80) {
        cout << "Grade B" << endl;
    } else if (marks >= 70) {
        cout << "Grade C" << endl;
    } else {
        cout << "Contact To Your Institute" << endl;
    }

    return 0;
}