#include <iostream>
using namespace std;
void referenceExample(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    referenceExample(a, b);
    cout << "The changed values are: " << a << " " << b;
}