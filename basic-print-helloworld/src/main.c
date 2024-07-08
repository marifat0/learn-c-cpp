#include <stdio.h>
#include "some_func.h"

int print_name()
{
    char input[10];
    printf("Enter a value: ");
    scanf("%s", input);

    printf("Hi, %s\n", input);
    getchar();
    return 0;
}
int main()
{
    int a = 10;

    int *p1 = &a;
    
    printf("Value of p1: %p\n", p1);
    printf("Value of *p1: %d\n", *p1);

    callthis();

    print_name();

    getchar();

    return 0;
}
