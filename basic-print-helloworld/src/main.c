#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *) malloc(sizeof(int));
    printf("Address of the pointer: %p\n", ptr);
    printf("Value of the pointer: %d\n", *ptr);
    *ptr = 10;

    free(ptr);
    getchar();
}
