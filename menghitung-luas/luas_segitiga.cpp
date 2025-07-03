#include <iostream>
using namespace std;

int main() {
    float alas, tinggi, luas;

    cout << "Nilai alas: \n";
    cin >> alas;
    cout << "Nilai tinggi: \n";
    cin >> tinggi;

    luas = (alas * tinggi) /2;

    cout << "Luas segitiga:" << luas << endl;

    return 0;
}