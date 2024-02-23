#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// Reference is an nick name or alias given to a variable

int main()
{

    int a = 10; // created in stack
    // reference must be initialized when declared
    int &r = a; // reference variable

    // it can not be set to reference another variable later on
    int b = 25;
    r = b; // it just simply takes the value 25 and assigns to to b. Same as doind a=b. r is nothing but a. So it is assignment not initialization.

    cout << r << endl
         << a << endl;

    // references doesn't consume memory it uses same memory as a
    return 0;
}