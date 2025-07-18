    #include <stdio.h>
    #include <stdlib.h>

    int main () {
        int umur;


        do {
            printf("Silahkan Masukkan Umur : ");
            scanf("%d",&umur);
        } while ( umur < 17);

        printf("Umur Lebih dari 17 : %d", umur);

        return 0;
    } 