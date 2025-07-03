#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah bintang (sebagai ukuran segi 4): ";
    cin >> n;

    for(int p=1; p<=n; p++) {
        for (int l=1; l<=n; l++) {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}