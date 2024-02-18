#include <iostream>

// cout << (insertion operator) - for output
// cin >> (extraction operator) - for input (cin - character input)

int main()
{
    std::string name;
    int age;
    /* if we use cin before getline there is a newline character in input buffer to eliminate this std::ws is used */
    std::cout << "What's your age?: ";
    std::cin >> age;
    std::cout << "What's your full name?: ";
    // std::cin>>name;
    // if we want to read a string that contains spaces we need to use getline function
    std::getline(std::cin >> std::ws, name);
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old.";
    return 0;
}