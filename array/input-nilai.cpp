#include <stdio.h>
#include <conio.h>

int main() {
    int index, nilai [10];

    printf ("Masukkan nilai 10 mahasiswa: \n");
    
    for (index = 0; index < 10; index++) {
        printf ("Mahasiswa %d: ", index+1);
        scanf ("%d", &nilai[index]);
    }

    printf ("Nilai mahasiswa yang telah dimasukkan: ");

    for (index = 0; index < 10; index++) {
        printf ("%5.0i", nilai[index]);
    }

    getch();
}