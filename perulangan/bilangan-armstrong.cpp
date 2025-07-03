#include <iostream>
using namespace std;

int main () {
    int a, sisa, jml=0, temp;

    cout << "Masukkan bilangan: ";
    cin >> a;

    temp = a;

    while (a > 0) {
        sisa = a % 10;
        jml = jml + (sisa * sisa * sisa);
        a = a / 10;
    }
    if (temp == jml) {
        cout << temp << " = Bilangan Armstrong\n";
    }
    else {
        cout << temp << " = Bukan bilangan Armstrong.\n";
    }

    return 0;
}