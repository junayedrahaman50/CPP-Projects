#include <stdio.h>
#include <iostream>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10, b = 20;
    swap(&a, &b); // x = &a, y = &b;
    printf("Swapped values are a: %i b: %i", a, b);
    return 0;

    // result: actual parameters are changed. swap function can access variables of main function by using pointers (indirect access).
    // In call by adress the address of actual parameters are passed to the formal parameters which are pointers. These pointers will be indirectly accessing the values of variable of a and b.
    // *x(dereferencing)
}