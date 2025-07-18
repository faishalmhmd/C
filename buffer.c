#include <stdio.h>


int main () {
    int angka;
    char huruf;

    printf("Masukkan Angka : ");
    scanf("%d", &angka);

    printf("Masukan Char: ");
    scanf(" %c", &huruf);


    printf("INT   : %d \n",angka);
    printf("CHAR  : %c",huruf);

    return 0;
}