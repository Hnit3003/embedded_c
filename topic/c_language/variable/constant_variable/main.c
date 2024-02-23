#include <stdio.h>

const int b = 19;

int main()
{
    const int a = 123;

    int *ptrb = &b;
    // *ptrb = 20;

    int *ptra = &a;
    *ptra = 12;

    printf("%d %d %d %d", a, b, ptra, ptrb);
}