#include <iostream>
using namespace std;

int main () {
    int a, i = 1 ,sum=0;
    cout << "Masukkan angka: ";
    cin >> a;
       do {
       if(a % i == 0)
       sum = sum + i;
       i++; 
       } while (i < a);

       if(sum == a) {
    cout << a << " bilangan sempurna\n"; 
    }
    else {
    cout << a << " bukan bilangan sempurna\n";
    }

    return 0;
}