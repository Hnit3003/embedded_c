#include "file2.h"

void file2_update()
{
    static int count = 0;
    count++;
    printf("file2: %d\n", count);
}