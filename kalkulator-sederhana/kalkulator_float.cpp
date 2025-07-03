#include <iostream>
using namespace std;

int main()
{
    float a, b, hasil_1, hasil_2, hasil_3, hasil_4;

    cout << "bilangan pertama: ";
    cin >> a;
    cout << "bilangan kedua: ";
    cin >> b;

    hasil_1 = a + b;
    hasil_2 = a - b;
    hasil_3 = a * b;
    hasil_4 = a / b;

    cout << "Penjumlahan: " << hasil_1 << endl;
    cout << "Pengurangan: " << hasil_2 << endl;
    cout << "Perkalian  : " << hasil_3 << endl;
    cout << "Pembagian  : " << hasil_4 << endl;

    return 0;
}