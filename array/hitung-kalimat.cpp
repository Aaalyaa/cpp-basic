#include <stdio.h>

int main() {
    char kalimat[] = "Saya adalah anak UM Teknik Elektro PTI 2016";
    int hitung, i;

    for (i = 0; kalimat[i] != '\0'; i++) {
        hitung++;
    }
    
    printf("Kalimat %s mempunyai %i huruf", kalimat, hitung);
    printf(" dan disimpan dalam %i bytes\n", hitung + 1);

    return 0;
}