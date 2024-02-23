#include <iostream>
using std::cout;
using std::endl;
using std::string;

// Compiler version g++ 6.3.0
void fizzbuzz()
{
    string out;
    for (int i = 1; i < 101; i++)
    {
        out = "";
        if (i % 3 == 0)
            out += "fizz";
        if (i % 5 == 0)
            out += "buzz";
        if (i % 7 == 0)
            out += "bazz";
        if (out != "")
            cout << out << endl;
        else
            cout << i << endl;
    }
}
int main()
{
    fizzbuzz();
}