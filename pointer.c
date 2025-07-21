#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;

    for(int i=0; i<3; i++) {
        printf("arr[%d] = %d, alamat = %p\n", i, *(p+i), (void*)(p+i));
    }

    return 0;
}
