#include <stdio.h>

void displayPointer(int *a) {
    printf("%d",*a);
}

int main () {
    int a = 10;
    int *pointToA = &a;

    displayPointer(&a);

    return 0;
}