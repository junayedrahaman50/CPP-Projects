#include <iostream>
#include <vector>

/* this long data type is used to create a pairlist, since it is long we are gonna give it an alias using typedef, a common naming covention while using typedef is the new identifier ends with _t */
typedef std::vector<std::pair<std::string, int>> pairlist_t;
// create identifier for standard string
// typedef std::string text_t;
// typedef int number_t;
// doing same thing with 'using' keyword
using text_t = std::string;
using number_t = int;
int main()
{

    /* typedef = reserved keyword used to create an additional name (alias) for another data type. New identifier for an existing type. Helps with readability and reduces typos. Kind of like nick name. It is replaced with 'using' keyword cause ;using keyword works better with templates */

    // instead using original data type we can use the identifier we created
    // std::vector<std::pair<std::string, int>> pairlist;

    pairlist_t pairlist;
    text_t firstname = "Junayed"; // std::string = text_t
    number_t age = 23;
    std::cout << firstname << " is " << age << " years old.";
    return 0;
}