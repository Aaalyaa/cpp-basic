#include <iostream>
using namespace std;

int a[5], jumlah = 5;
void input (int data, int i) {
    a[i] = data;
}

void print (int nElemen) {
    for (int i = 0; i < nElemen; i++) {
        cout << a[i] << " ";
        cout << endl;
        }
}

int main() {
    int data;
    
    cout << "Belum ada perubahan data array: " << endl;
    print(jumlah);
    for (int i = 0; i < jumlah; i++) {
        cout << "a [" << i << "] : ";
        cin >> data;
        input (data, i);
    }

    cout << "Sesudah ada perubhan data array: " << endl;
    print(jumlah);
}