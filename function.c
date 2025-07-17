#include <stdio.h>

void static_variable() {
    static int static_variable = 0;
    static_variable++;
    printf("static variable %d \n",static_variable);
}

void local_variable() {
    int local_variable = 0;
    local_variable++;
    printf("local vairable %d \n",local_variable);
}

int main () {
    printf("== Static Variable \n");
    static_variable();
    static_variable();
    static_variable();
    printf("== Local Variable \n");
    local_variable();
    local_variable();
    local_variable();
}