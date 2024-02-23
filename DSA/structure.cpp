#include <iostream>
#include <stdio.h>
using namespace std;

// Compiler version g++ 6.3.0

// definition with declaration
struct Rectangle
{
    int length;
    int breadth;
} r1; // r1 is global

int main()
{
    printf("%lu\n", sizeof(r1));
    // declaration with initialisation
    struct Rectangle r2 = {10, 5};
    printf("%lu\n", sizeof(r2));
    printf("%i %i\n", r2.length, r2.breadth);
    cout << "Hello, CPP!";
    return 0;
}