#include <stdio.h>

void swap1(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
    return;

}

void swap2(int *pa, int *pb)
{
    int temp;

    temp = *pa;

    *pa = *pb;
    *pb = temp;
    return;
}

int main(void)
{
    int a, b;

    a = 3;
    b = 5;
    printf("Before calling funcion swap1, a: %d, b: %d\n", a, b);
    swap1(a, b);
    printf("After calling funcion swap1, a: %d, b: %d\n", a, b);

    printf("Before calling funcion swap2, a: %d, b: %d\n", a, b);
    swap2(&a, &b);
    printf("After calling funcion swap2, a: %d, b: %d\n", a, b);

    return 0;
}