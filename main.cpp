# include <iostream>
# include <cstdio>
#include "colour.h"


using std::cout;
using std::endl;

int main(int argc, char** argv)
{
    cout << "Hello World" << endl;

    colour test(200, 150, 75);

    cout << "Red = " << test.GetRed() << endl;
    cout << "Blue = " << test.GetGreen() << endl;
    cout << "Green = " << test.GetBlue() << endl;

    test.SetRed(1);
    test.SetGreen(2);
    test.SetBlue(3);

    cout << "Red = " << test.GetRed() << endl;
    cout << "Blue = " << test.GetGreen() << endl;
    cout << "Green = " << test.GetBlue() << endl;

    exit(0);
}