// c++ can have .cc and cpp extension

#include <iostream>

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 10, b = 20;
    swap(a, b);
    std::cout << "swapped variables are = a:" << a << " b:" << b;
    return 0;

    // result: actual parameters are changed. As x and y are alias of a and b(a/x, b/y).

    /* But one more thing I have to say in C++, the concept of references, it is a nickname of a variable, so it should directly represent a. It is not a pointer.It will not hold an address. X means a.
So this is possible with the help of inline function.
So C++ supports inline function.
So this swap function may become inline function, not it will compulsorily it will not become inline function. So this may become inline function. It all depends on the compiler.Right.
It all depends on the compiler on the whiteboard.
I have said that this may become a inline function, but it is not mandatory.
Always, it depends how a compiler implements references.
Conceptually, references are nicknames.
They are not pointers.
Right, but compiler may implement them as a pointer.
How a compiler implements we can't say.
But there are two possibilities that a compiler can convert this swap function as an inline function and copy
the entire code here.
Or it can make these as pointers also. */
}