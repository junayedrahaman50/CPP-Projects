#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using std::cin;
using std::cout;
using std::endl;

// Defining structure

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    // pointer of type structure
    // in c++ we can remove struct keyword. e.g. Rectangle *p5;
    struct Rectangle *p5;       // definition of structure doesn't allocate memory but declaring pointer variable of it allocates memory
    cout << sizeof(p1) << endl; // sizeof prints the size of data type in bytes
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;

    // Whatever data type pointer is, pointer takes same amount of memory for some compilers it will be 4bytes for some 8bytes(Depends on compiler architecture 32/64). Size of pointer is independant of its data type.
    return 0;
}