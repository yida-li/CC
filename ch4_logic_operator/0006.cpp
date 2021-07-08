#include <iostream>
using namespace std;
int main()
{
    cout << "\n\nAND gate logic\n";
    cout << "\nfalse && false =" << (false && false);
    cout << "\ntrue && false =" << (true && false);
    cout << "\nfalse && true =" << (false && true);
    cout << "\ntrue && true =" << (true && true);

    cout << "\n\nOR gate logic\n";
    cout << "\nfalse || false =" << (false || false);
    cout << "\ntrue || false =" << (true || false);
    cout << "\nfalse || true =" << (false || true);
    cout << "\ntrue || true =" << (true || true);

    cout << " using stream manipulator to change binary value to boolean string representation\n";
    cout << boolalpha << "\n\nAND gate logic\n";
    cout << "\nfalse && false =" << (false && false);
    cout << "\ntrue && false =" << (true && false);
    cout << "\nfalse && true =" << (false && true);
    cout << "\ntrue && true =" << (true && true);

    cout << "\n\nOR gate logic\n";
    cout << "\nfalse || false =" << (false || false);
    cout << "\ntrue || false =" << (true || false);
    cout << "\nfalse || true =" << (false || true);
    cout << "\ntrue || true =" << (true || true);
    return 0;
}