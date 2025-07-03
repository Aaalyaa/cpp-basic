#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int *b = &a;
    *b = 100;
    int *c = nullptr;

    cout << "Nilai dari a: "<< a << endl;
    cout << "Alamat dari a:"<< &a << endl;

    cout << "Nilai dari b :"<< b << endl;
    cout << "Alamat dari b :"<< &b << endl;
    cout << "Nilai pointer *b :"<< *b << endl;

    cout << "Nilai dari c :"<< c << endl;
    
    return 0;
}