#include <iostream>
using namespace std;

int main () {
    int a, angka, digit, reversed = 0;

    cout << "Masukkan angka: ";
    cin >> angka;

    a = angka;

    do {
        digit = angka % 10;
        reversed = (reversed * 10) + digit;
        angka = angka / 10;
    } while (angka != 0);

    cout << "Angka yang dibalik: " << reversed << endl;

    if (a == reversed) {
        cout << "Bilangan palindrome\n";
    }
    else {
        cout << "Bukan bilangan palindrome\n";
    }

    return 0;
}