#include <stdio.h>
#include <stdlib.h>
#include <iostream>
int main()
{
    int arr[5] = {10,
                  12,
                  18,
                  20,
                  98};
    // **create array in heap using pointer**
    int *p; // it's in the stack
    /* It will get the size of 5 integers sot it's an array of integers malloc(size) - see notes */
    // p = (int *)malloc(5 * sizeof(int));     // it's in the heap
    p = new int[5]; // equivalent c++ code (works just like malloc)
    // initialize the values
    /*
        In C++, arrays do not have a built-in method or property like arr.length in JavaScript to determine their length. However, you can use the sizeof operator to find the size of an array in bytes and then divide it by the size of one element to get the number of elements. Here's an exaple:
            int arr[] = {1, 2, 3, 4, 5};
            int size = sizeof(arr) / sizeof(arr[0]);
            std::cout << size;
    */
    int size = 5;
    // adding values to array inside heap
    for (int i = 0; i < size; i++)
    {
        std::cin >> p[i];
    }
    // using range based loop
    // for (int x : arr)
    // {
    //     std::cout << x << std::endl;
    // }
    for (int i = 0; i < size; i++)
    {
        std::cout << p[i] << std::endl;
    }

    // **delete the memory we used from heap**

    /* Whenever we are dynamically allocating memory we need to release the memory   after using it. Can be ignored in small programs but necessary step for big projects. */

    // use for 'malloc()' (c lang)
    // 'free' and 'delete' deallocates memory that is allocated in heap
    // free(p);
    // 'delete' used in c++ to free allocated memory in heap using 'new'
    delete[] p; // if any other type of variable write just the variable name for array use square brackets
    return 0;

    // Once the program ends heap memory will be automatically(implicitly) deleted
    // Implicit - what compiler does
    // Explicit - what programmer does
}