// Program to check whether a character is uppercase or lowercase
#include<iostream>
using namespace std;

int main() {
    char ch;

    // Take input from user
    cout << "Enter a Character:";
    cin >> ch;

    // Check lowercase using ASCII values
    if (ch >= 97 && ch <= 122) {
        cout << "Lower Case" << endl;
    }
    // Check uppercase using ASCII values
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "Upper Case" << endl;
    }

    return 0;
}