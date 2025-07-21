#include <stdio.h>

char inputYN() {
    char input;
    do {
        printf("Tambah Data Lagi ? ");
        scanf(" %s", &input);
        if(input != 'Y' && input != 'y' && input != 'N' && input != 'n') {
            printf("Maaf input hanya boleh Y/N\n");
        }
    } while (input != 'Y' && input != 'y' && input != 'N' && input != 'n');

    return input;
}

int main() {
    char data[10][2][50];
    char tambah;
    int n = 0;
    char hasil;
    printf("Input Data Mahasiswa \n");
    do{
        printf("Tambah Nama Mahasiswa: ");
        scanf(" %s", data[n][0]);
        printf("Tambah Alamat Mahasiswa: ");
        scanf(" %s", data[n][1]);
        printf("Nama %s , Kelas %s \n",data[n][0],data[n][1]);
        hasil = inputYN();
        printf("Kamu memasukkan: %c\n", hasil);
        n++;
    }
    while(hasil == 'y' || hasil == 'Y');
    printf("┌────┬────────────────────┬───────────────┐\n");
    printf("│ No │ Nama               │               │\n");
    printf("├────┼────────────────────┼───────────────┤\n");
    for(int i=0;i<n;i++) {
        printf("│ %d  │ %s │ %s \n",i+1, data[i][0], data[i][0]);
    }
    printf("==============================================");
    return 0;
}
