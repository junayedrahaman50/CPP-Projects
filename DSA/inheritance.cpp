#include <iostream>
using std::cin;
using std::cout;

// Base class
class A
{
public:
    int num1, num2;
    void get_input()
    {
        cin >> num1;
        cin >> num2;
    }
    void show_message()
    {
        cout << "Enter number";
    }
};

// Derived class
class B : public A
{
public:
    void show_output()
    {
        cout << "The multiplication is " << (num1 * num2);
    }
    void show_message()
    {
        cout << "Enter two numbers";
    }
};

int main()
{
    A a;
    B b;
    b.get_input();
    b.show_output();
    a.show_message();
    b.show_message();
}