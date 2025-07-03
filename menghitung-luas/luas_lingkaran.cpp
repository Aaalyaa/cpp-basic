#include <iostream>
using namespace std;

int main() {
    float r, luas;

    cout << "Nilai jari-jari: \n";
    cin >> r;
    
    luas = 3,14 * (r * r);

    cout << "Luas lingkaran:" << luas << endl;

    return 0;
}