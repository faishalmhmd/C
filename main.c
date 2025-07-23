#include <stdio.h>

int main() {
    int var_a = 100;
    int var_b = 200;
    int *p_var_a = &var_a;


    printf("Name \t Addres \t \t Data \n");
    printf("var_a\t %p \t %d \n",&var_a, var_a);
    printf("var_b\t %p \t %d \n",&var_b, var_b);
    printf("p_var_a\t %p \t %d \n",&p_var_a, *p_var_a);
}
