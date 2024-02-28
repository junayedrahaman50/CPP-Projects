#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int *fun(int n)
{
    int *p;
    // Creating array in heap(allocate a block of contiguous memory 5*4bytes)
    p = (int *)malloc(n * sizeof(int));
    // Initialize array
    for (int i = 0; i < n; i++)
    {
        int num;
        std::cin >> num;
        p[i] = num;
    }
    return (p);
}

int main()
{
    int *a, size = 5;
    a = fun(size);
    // Print array
    for (int i = 0; i < size; i++)
    {
        printf("%i\n", a[i]);
    }
    // Deallocate memory allocated in heap
    delete[] a;
    return 0;
    /* Array in heap is indirectly accessible to the pointer p in function fun. return(p) is returning pointer(address of the first element of heap) in function fun that is then assigned to pointer a in main function. So now a is pointing to the array in heap  */
    /* Once the fun function ends its activation record gets deleted. So pointer p is gone but pointer a in main function still points to the array created in heap */
}