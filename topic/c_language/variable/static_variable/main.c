
#include <stdio.h>
#include "file1.h"

/*main.c file scope*/
static int var;

int main()
{
    var = 10;
    file1_print();
    printf("main: %d\n",var);
}