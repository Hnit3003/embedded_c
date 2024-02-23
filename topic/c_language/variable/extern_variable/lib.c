#include "lib.h"

/*Declaration global variable*/
int lib_var;

void update_var()
{
    lib_var = 100;
    printf("Update: %d",lib_var);
} 