#include <iostream>
using namespace std;

int main () {
    int a1, a2, i, fpb = 1, kpk, hitung;

    cout << "Masukkan  bilangan pertama: ";
    cin >> a1;
    cout << "Masukkan bilangan ke-dua: ";
    cin >> a2;

    hitung = (a1 < a2) ? a1 : a2;

    for (i=1; i <= hitung; i++) {
        if (a1 % i == 0 && a2 % i == 0) {
            fpb = i;
        }
    }
    
    kpk = a1*a2 / fpb;

    cout << "KPK dari bilangan " << a1 << " dan " << a2 << ": " << kpk << endl;

    return 0;
}