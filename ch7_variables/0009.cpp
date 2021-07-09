#include <iostream>
using namespace std;
int main()
{

    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;
    int array[20];
    int *ptr = array;

    cout << "\nsize of a character is = " << sizeof(c);
    cout << "\nsize of a short is = " << sizeof(s);
    cout << "\nsize of a integer is = " << sizeof(i);
    cout << "\nsize of a long is = " << sizeof(l);
    cout << "\nsize of a float is = " << sizeof(f);
    cout << "\nsize of a double is = " << sizeof(d);
    cout << "\nsize of a long double is = " << sizeof(ld);
    cout << "\nsize of a array containing 20 integers is = " << sizeof(array);
    cout << "\nsize of a pointer of type integer is = " << sizeof(ptr);

    return 0;
}