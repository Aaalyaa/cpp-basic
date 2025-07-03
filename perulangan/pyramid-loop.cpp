#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Masukkan angka: ";
    cin >> a;

    for (int i=1; i<=a; i++) {
        for (int k=1; k<=a-1; k++) {
            cout << " ";
        }
        for (int j=1; j<=a-i; j++) {
            cout << "*";
        }
        if (i != a-1) {
            cout << endl;
        }
    }
    for (int i=1; i<=a; i++) {
        for (int j=1; j<=a-i; j++) {
            cout << " ";
        }
        for (int k=1; k<=i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}