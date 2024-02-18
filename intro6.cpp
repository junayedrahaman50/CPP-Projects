// useful math functions

#include <iostream>
// rest of the math functions are in cmath header file
#include <cmath>
int main()
{
    double x = 3.14;
    double y = 3;
    double z;
    // z = std::min(x, y);
    // z = std::max(x, y);
    // pow = power
    // 2 to the power 3 = 8
    // z = pow(2, 3);
    // square root
    // z = sqrt(9);
    // absolute value, if you place negative number in it it will give positive of it, how far it is away from 0
    // z = abs(-3);
    // to round a number
    // z = round(x);
    // round up
    // z = ceil(x);
    // round down
    z = floor(x);

    std::cout << z << '\n';

    // calculate Hypotenuse(otivuj) of a right triangle

    double a, b, c;
    std::cout << "Enter side A: ";
    std::cin >> a;
    std::cout << "Enter side B: ";
    std::cin >> b;
    // a = pow(a, 2);
    // b = pow(b, 2);
    // c = sqrt(a+b);
    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "Side C is: " << c;
    return 0;
}