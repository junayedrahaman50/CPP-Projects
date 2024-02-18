#include<iostream>
// below is evil line don't use it cause std contains lots of entities that may cause conflict
// using namespace std;
/* Use this instead */
using std::cout;
using std::endl;
using std::string;

/*  we can have different versions of same variable as long as they are within different namespace  */

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

void test(){
    /* implies we are using first namespace */
    using namespace first;
    cout<<x<<endl;
    string name = "Bro";
    cout<<"Whats up "<<name<<"..\n";
}


/* The const keyword specifies a variable's value as constant, tells the compiler to prevent anything from modifying it (read only) */
int main(){
// variable that we don't want to change at all (prefix the keyword const)
// const naming convention is to make all the letters uppercase (PI)
    const double PI = 3.14159;
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    double radius = 10;
    double circumference = 2 * PI * radius;
    cout<<circumference<<"cm"<<'\n';

/*  Namespace = provides a solution for preventing name conflicts in large projects. Each entity needs a unique name. A namespace allows for identically named entites as long as the namespaces are different  */

/* // we will run into error as each entity needs a unique name
if we use namespaces two or more entities can share the same name */
int x = 0;
// int x = 2;


/* 
if we don't specify which namespace we are using we will use local version of the entity */

/* to print the verson of x found within first namespace prefix x with first::x */
cout<<x<<" "<<first::x<<" "<<second::x<<endl;

/* Entities can have same name as long as they are within different nmaespace.
if we have some entity without the prefix of the namespace it's assumed that we are using entity found within that particular namespace  */
test();
    return 0;
}