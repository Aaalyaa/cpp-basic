#include <iostream>
using namespace std;

int main () {
    char nilai;

    cout << "Please input a grade (A, B, C, D, E): ";
    cin >> nilai;

    switch (nilai) {
        case 'A':
        case 'a':
        cout << "Excellent!" << endl;
        break;
        case 'B':
        case 'b':
        cout << "Well Done." << endl;
        break;
        case 'C':
        case 'c':
        cout << "You Passed." << endl;
        break;
        case 'D':
        case 'd':
        cout << "Better Try Again." << endl;
        break;
        case 'E':
        case 'e':
        cout << "You Are Failed." << endl;
        break;
        default:
        cout << "Invalid Grade!" << endl;
    }
    cout << "Your grade is " << nilai << endl;

    return 0;
}