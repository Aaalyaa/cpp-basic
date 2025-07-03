#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {
    int pendapatan, jasa, akhir;
    double total;
    string sales, kasir;

    cout << "\n===== PT MAKMUR SUKSES JAYA =====\n";
    cout << "Nama kasir: ";
    getline (cin, kasir);
    cout << "Nama salesman: ";
    getline (cin, sales);
    cout << "Masukkan pendapatan hari ini: ";
    cin >> pendapatan;

    if (pendapatan <= 60000) {
        jasa = 15000;
        akhir = 0.15*pendapatan;
    }
    else if (pendapatan >= 60000) {
        jasa = 30000;
        akhir = 0.20*pendapatan;
    }
    else if (pendapatan >= 100000) {
        jasa = 50000;
        akhir = 0.30*pendapatan;
    }
    else {
        cout << "Pendapatan yang dimasukkan tidak valid.";
    }

    total = jasa + akhir;

    system ("CLS");

    //Rincian
    cout << "\n===== PT MAKMUR SUKSES JAYA =====\n";
    cout << "Rincian: \n";
    cout << "Nama kasir: " << kasir << endl;
    cout << "Nama salesman: " << sales << endl;
    cout << "Pendapatan hari ini: " << pendapatan << endl;
    cout << "Uang jasa: "<< jasa << endl;
    cout << "Komisi: " << akhir << endl;
    cout << "Total pembayaran: " << total << endl;
    cout << "=================================\n";

    return 0;
}