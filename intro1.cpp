// Compiler parses source code to machine instructions

// iostream is a header file that contains basic functions for i/o operations
#include <iostream>
// using namespace std;

void func()
{
    std::cout << "Bangers!"
              << "\n";
}

// main function is where program begins
int main()
{
    func(); // Calling the function
    // variables used to represent some number or value
    // x-  unique identifier
    // integers store a whole number
    int x; // declaration
    x = 5; // initialization / assignment
    int age = 23;
    std::cout << x << std::endl;

    int days = 7.5;
    std::cout << days << std::endl; // the decimal portion of the output will be truncated
                                    // double - number including decimal
    double price = 10.99;
    double temparature = 26.1;
    double gpa = 9.0;
    printf("%.1f %.1f %.1f\n", price, temparature, gpa);

    // char stores a single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    // boolean has two values true and false
    bool student = false;
    bool power = true;
    bool forSale = true;

    // Strings - objects that represent squence of text, strings are provided from the standard namespace
    std::string name = "Bro";
    std::string day = "Sunday";
    std::string food = "Biriyani";
    std::string address = "123 Fake Street";
    std::cout << name << std::endl;

    // String literal - litertaly printing a string
    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " Years old." << std::endl;

    // std means standard, cout means character output << - left shift operator endl - endline
    // \n - new line character, endline flush the output buffer
    std::cout << "Hello World" << std::endl;
    std::cout << "Hello World" << std::endl;

    // returning 0 indicates no problem with the program returning 1 indicates problems
    return 0;
}