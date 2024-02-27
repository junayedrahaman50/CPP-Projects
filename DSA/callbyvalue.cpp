#include <iostream>
#include <stdio.h>

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;
    a = 10;
    b = 20;
    swap(a, b);
    printf("a: %i b: %i", a, b);
    return 0;
    // result: the actual parameters are not swaped formal parameters are swaped
    // In call by value any changes made in formal parameter is not reflected in actual parameter. The output should be returned in call by value
}