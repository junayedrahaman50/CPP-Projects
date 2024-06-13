#include <iostream>

void swap_num(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    swap_num(&a, &b);
    std::cout << "New value of a and b: " << a << " " << b;
}