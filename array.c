    #include <stdio.h>
    #include <stdlib.h>

    int main () {
        int arr[100];
        int n = 0;
        int input;
        char tambah;

        do {
            if(n >= 100) {
                printf("Array sudah penuh");
            }
            printf("Silahkan Masukkan Angka : ");
            scanf("%d", &input);
            arr[n] = input;
            n++;
            printf("char %c",tambah);
            printf("Tambah Data Lagi (Y/N)");
            scanf("%c", &tambah);
        }
        while (tambah == 'y' || tambah == 'Y'); 
        printf("Data di Array");
        for (int i=0; i<n; i++) {
            printf("%d", arr[i]);
        }
        printf("\n");
        return 0;
    } 