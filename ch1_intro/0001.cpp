#include <iostream>
using namespace std;
int main()
{

    float x = 0;
    float y = 0;
    cout << "enter 2 float to compare\n";
    cin >> x >> y;

    if (x == y)
        cout << "=";
    if (x < y)
        cout << x << " < " << y << endl;
    else
        cout << x << " > " << y << endl;

    return 0;
}