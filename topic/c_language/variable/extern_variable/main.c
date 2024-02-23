#include <stdio.h>
#include "lib.h"

/*Extern global variable*/
extern int lib_var;

int main()
{
    lib_var = 10;
    printf("Value: %d\n",lib_var);
    update_var();

}