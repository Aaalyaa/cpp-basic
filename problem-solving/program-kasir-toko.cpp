#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    string customer, kasir;
    int diskon, bayar, hasil, cashback;
    
    cout << "\n+++++TOKO BERKAH SEJAHTERA+++++\n";
    cout << "Nama kasir: ";
    getline (cin, kasir);
    cout << "Nama pelanggan: ";
    getline (cin, customer); 
    cout << "Masukkan total pembayaran: ";
    cin >> bayar;

    system("CLS");

    if (bayar < 750000) {
        diskon = bayar*0.10;
        hasil = bayar - diskon;
        cout << "Diskon yang didapat = 10%. Biaya yang harus dibayar: " << hasil << endl;
    }
    else if ((bayar >= 75000) && (bayar <=100000)) {
        diskon = bayar*0.20;
        hasil = bayar - diskon;
        cout << "Diskon yang didapat 20%. Biaya yang harus dibayar: " << hasil << endl;
    }
    else if (bayar > 100000) {
        diskon = bayar*0.30;
        hasil = bayar - diskon;
        cout << "Diskon yang didapat 30%. Biaya yang harus dibayar: " << hasil << endl;
    }
    else {
        cout << "Data yang dimasukkan invalid.";
    }
    cashback = bayar - hasil;

    system("CLS");
    
    cout << "\n+++++TOKO BERKAH SEJAHTERA+++++\n";
    cout << "\nRincian:\n";
    cout << "Nama kasir: " << kasir << endl;
    cout << "Nama pembeli: " << customer << endl;
    cout << "Uang yang dibayar: " << bayar << endl;
    if (bayar < 750000) {
        cout << "Diskon yang didapat: 10%" << endl;
    }
    else if ((bayar >= 75000) && (bayar <= 100000)) {
        cout << "Diskon yang didapat: 20%" << endl;
    }
    else {
        cout << "Diskon yang didapat: 30%" << endl;
    }
    cout << "Biaya yang harus dibayar: " << hasil << endl;
    cout << "Kembalian yang didapat: " << cashback << endl;
    cout << "\n++++++++++++++++++++++++++++++\n";

    return 0;
}