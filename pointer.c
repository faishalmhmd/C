#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("isi pointer *p = %d \n",*p);
    printf("alamat pointer *p %p \n", (void*)&p);
    return 0;
}
