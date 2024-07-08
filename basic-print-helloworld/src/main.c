#include <stdio.h>

int main()
{
    int a = 10;

    int *p1 = &a;
    
    printf("Value of p1: %p\n", p1);

    getchar(); // hold the screen
    return 0;
}
