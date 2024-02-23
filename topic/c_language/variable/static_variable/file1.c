#include "file1.h"

/*file1.c file scope*/
static int var;

void file1_print()
{
    var = 1000;
    printf("file1: %d\n",var);
} 