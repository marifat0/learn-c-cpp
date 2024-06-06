#include <stdio.h>

int main() {
    int num = 10;
    int *ptr; // declaration of pointer
    ptr = &num; // assigning address of num to ptr
    printf("Address of num (&n): %p\n", &num); // address of num
    printf("Value of num: %d\n", num); // value of num
    printf("Value of ptr: %p\n", ptr); // value of ptr
    printf("Value of *ptr: %d\n", *ptr); // using * operator to dereference ptr and get the value it points to
}
