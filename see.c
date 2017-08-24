#include <stdio.h>

int main ( ) {

    int b = 100;
    int *p = &b;

    printf("Assign b=100 and p = &b\n");
    printf("b: %d *p: %d  p: %p &b: %p\n", b , *p, (void *)p, (void *)&b);

    (*p)++;

    printf(" *p++ \n"); 
    printf("b: %d *p: %d  p: %p &b: %p\n", b , *p, (void *)p, (void *)&b);

    p++;
    printf(" p++ \n"); 
    printf("b: %d *p: %d  p: %p &b: %p\n", b , *p, (void *)p, (void *)&b);

}
