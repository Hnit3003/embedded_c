#include <stdio.h>

// auto int var;

void func()
{
    auto int x;
    int y;
    printf("%d %d", x, y);
    y = 101;
    printf("y = %d", y);
}

int main()
{
    int var2;
    auto int var = 0;
    var = 10;
    printf("%d %d\n", var, var2);
    func();
}