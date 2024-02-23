#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using std::cout;
int main()
{

    int a = 10;
    int *p;                            // Declaration of pointer
    p = &a;                            // Assignment or Initialization (&a = address of a)
    printf("using pointer: %i\n", p);  // value of p (prints address of a)
    printf("using pointer: %i\n", *p); // (dereferencing) value of p (prints data of a)
    printf("using pointer: %i\n", &a); // Address of a
    // dereferencing - go to the adddress and get the value
    // &a is the address and p is pointing to it

    // Pointer to an array
    // Whenever you declare anything in your program it's going to be created inside the stack
    int arr[5] = {2, 4, 6, 8, 10};
    int *q;
    q = arr;
    // if you want to use '&' ampercent
    // q = &arr[0];
    cout << arr << '\t' << &arr[0] << '\n'; // Note: the name of array itself contains the addredss of its first index

    // traversing array
    for (int i = 0; i < 5; i++)
    {

        printf("%i, %i\n", arr[i], q[i]); // here pointer name is working like array name both has same output
    }
    return 0;
}