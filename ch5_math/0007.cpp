#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    float x, y;
    cout << "Enter a very special number ";
    cin >> x;

    cout << "\n\n";
    cout << " \nceil of the special number is" << ceil(x);
    cout << " \ncos of the special number is" << cos(x);
    cout << " \nexp of the special number is" << exp(x);
    cout << " \nfabs of the special number is" << fabs(x);
    cout << " \nfloor of the special number is" << floor(x);
    cout << " \nlog of the special number is" << log(x);
    cout << " \nlog10 of the special number is" << log10(x);
    cout << " \nsin of the special number is" << sin(x);
    cout << " \nsqrt of the special number is" << sqrt(x);
    cout << " \ntan of the special number is" << tan(x);

    cout << "\n\nNow enter it's soul mate";
    cin >> y;
    cout << " \nthe remainder of special number and its divisor is " << fmod(x, y);
    cout << " \nthe exponent of the soulmate and its base is " << pow(x, y);

    return 0;
}
