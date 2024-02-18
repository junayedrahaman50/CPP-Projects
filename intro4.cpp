// Arithmetic Operators
#include <iostream>
using std::cout;
using std::endl;
/* arithmetic operators =  return the result of as specific arithmetic operation (+, -, *, /) */
int main()
{

    int students = 20;
    students += 1; // students = students + 1;
    students++;    // to only add 1
    students -= 1;
    students--; // decrement students by 1
    students *= 2;

    // if we want the decimal portion of division we specify students as double
    students /= 2;

    // for remainder modulous operator is used
    int remainder = students % 3;
    // odd-even
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            cout << i << " is even" << '\n';
        else
            cout << i << " is odd" << '\n';
    }
    cout << "remainder: " << remainder << endl;
    cout << students << endl;

    // Operator Precedence
    // Parenthesis
    // Multiplication and Division
    // Addition and Subtraction

    int cats = 6 - 5 + 4 * 3 / 2;
    int newCats = 6 - (5 + 4) * 3 / 2; // expression inside parenthesis will occur first
    cout << cats << " " << newCats << endl;

    /* Type conversion = converting a value from one data type to another
    Implicit = automatic
    Explicit = precede value with new data type (int)
    */

    int x = 3.14;         // x is implicitly converted to 3
    double y = (int)3.14; // x is now int and value is 3
    char z = 100;         // Implicit conversion of number 100 into char which is d(ASCII)
    // doing it explicitly
    cout << (char)100 << endl;
    cout << x << " " << y << " " << z << endl;

    // exam score calculation

    int correct = 8;
    int questions = 10;
    /* since we are performing integer division answer will be 0%. Decimal portion of 0.8 is truncated so we are left with 0. 0*100 = 0 */
    // double score = correct/questions*100;
    // fix this using explicit conversion
    double score = correct / (double)questions * 100;
    // type conversion is useful while doing integer division
    cout << "Score: " << score << '%' << endl;
    cout << 8 / 10.0 << endl;
    cout << 8.0 / 10;
    return 0;
}