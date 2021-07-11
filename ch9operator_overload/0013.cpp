#include <iomanip>
#include "0013.h"
#include <iostream>

using namespace std;

ostream &operator<<(ostream &x, const phone &y)
{

    x << "(" << y.area << ") " << y.exchange << "-" << y.line;
    return x;
};

istream &operator>>(istream &x, phone &y)
{

    x >> setw(3) >> y.area;

    x >> setw(3) >> y.exchange;

    x >> setw(4) >> y.line;
    return x;
};

int main()
{

    phone cell;
    cout << " please enter your cellular number :" << endl;
    cin >> cell;

    cout << " The phone number entered was: ";
    cout << cell << endl;
}