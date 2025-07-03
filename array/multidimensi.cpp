#include <stdio.h>
#include <conio.h>
#include <cstdlib>

int main() {
    int baris, kolom, matriks[3][4];

    printf("Masukkan elemen array: \n");
    for (baris = 0; baris < 3; baris++) {
        for (kolom = 0; kolom < 4; kolom++) {
            printf("matriks [%i][%i] = ", baris + 1, kolom + 1);
            scanf("%i", &matriks[baris][kolom]);
        }
        printf("\n");

        system("CLS");
    }

    system ("CLS");

    printf("Isi array: \n");

    for (baris = 0; baris < 3; baris++) {
        for (kolom = 0; kolom < 4; kolom++) {
            printf("%i ", matriks[baris][kolom]);
        }
        printf("\n");
    }

    return 0;
}

/* This is multidimensional array.
Where the baris represents rows 
and kolom represents columns */