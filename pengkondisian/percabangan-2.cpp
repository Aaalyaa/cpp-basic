#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Masukkan bilagan bulat: ";
    cin >> x;
    cout << "Masukkan bilagan bulat lain: ";
    cin >> y;

    if (x > 0 && y < 0) {
        cout << "Ke-2 bilangan = Bilangan Positif \n";
    }
    else if (x > 0 || y > 0) {
        cout << "Salah 1 bilangan = Bilangan Positif \n";
    }
    else {
        cout << "Kedua bilangan bukan Bilangan Positif \n";
    }
}