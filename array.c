#include <stdio.h>
#include <stdlib.h>

    int main () {
        int arr[100];
        int input;
        int n = 0;
        char tambah;
        do {
            printf("Silahkan Masukkan Angka : ");
            scanf("%d", &input);
            arr[n] = input;
            n++;

            printf("Tambah Data Lagi ?");
            scanf(" %c",&tambah);
        } while (tambah == 'y' || tambah == 'Y');
        printf("List Data");
        for(int i=0; i < n; i++) {
            printf("Data %d == %d \n",i+1,arr[i]);
        }
        return 0;
    } 