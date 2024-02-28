#include <stdio.h>
#include <iostream>
/* Arrays are passed by address from one function to another function arrays can not be passed by value at all */
void fun(int *x, int n)
{
    int i;
    x[0] = 13;
    x[4] = 13;
    for (i = 0; i < 5; i++)
    {
        printf("%i\n", x[i]);
    }
}

int main()
{
    int a[5] = {10, 20, 13, 9, 8};
    fun(a, 5);
    printf("%i = %i", a, &a[0]);
    /* Note: the name of array itself contains the addredss of its first index, that is passed to int *A by calling fun(a, 5). 5 is the size of array. Since It is call by address the actual parameter/array can be modified using formal parameters of fun function */
    return 0;
}