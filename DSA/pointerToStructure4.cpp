#include <stdio.h>
// required for using malloc
#include <stdlib.h>
#include <iostream>

// define structure
struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    // declare data variable of type structure
    // in c++ we can remove struct keyword. e.g. Rectangle r;
    Rectangle r = {10, 5};
    std::cout << r.length << " " << r.breadth << std::endl; // normal access using . operator for pointers use ->
    // declare address variable(pointer) of type structure (get address of r)
    Rectangle *p = &r;
    // accessing members using pointer
    // Method 1 (use * operator enclosed in ())
    (*p).length = 20;
    (*p).breadth = 15;
    // Method 2 (use -> arrow operator)
    p->length += 10;
    p->breadth += 10;

    std::cout << "The length and breadth of Rectangle is: " << p->length << " " << p->breadth << std::endl;

    // declare another address variable (pointer) in stack
    Rectangle *q;
    // Dynamically create variable of type structure in heap
    // Allocate total memory in heap that is needed by structure in heap using malloc
    /* malloc function returns a pointer it is of type void so we need to typecast it to struct Rectangle. In this case it will allocate 8 bytes for 2 integers. So we can write 8 as well */
    // q = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    q = new Rectangle; // equivalent to above line in c++
    q->length = 20;
    q->breadth = 10;
    std::cout << "Length and Breadth of Dynamically created Rectangle is: " << q->length << " " << q->breadth << std::endl;
    return 0;
}