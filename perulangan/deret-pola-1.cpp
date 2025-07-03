#include <iostream>
using namespace std;

int main () {
    int a, i, t = 1, sum = 0;

    cout << "Masukkan angka: ";
    cin >> a;

    for (i =1; i <= a; i++) {
        cout << t << " ";
        if (i < a) {
            cout << "+ ";
        }
        sum = sum + t;
        t = (t * 10) + 1;
    }
    cout << "\nJumlah: " << sum << endl;

    return 0;
}