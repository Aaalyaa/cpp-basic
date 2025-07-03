#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char kata[100];

    cout << "Masukkan kata - katamu: ";
    cin >> kata;

    int p = strlen(kata);

    for (int i = 0; i < p; ++i) {
        for (int j = i; j < p; ++j) {
            cout << kata[j];
        }
        cout << endl; 
    }

    return 0;
}