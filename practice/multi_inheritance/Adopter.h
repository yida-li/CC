#include <iostream>
#include <string>
using std::string;
class Adopter
{

public:
    Adopter();
    Adopter(string a, string b, int c, string d, string e, string f, int g, int h)
    {
        SIN = a;
        name = b;
        address = c;
        city = d;
        postal = e;
        province = f;
        phone = g;
        animalCount = h;
    };

    string getSIN()
    {
        return SIN;
    };

private:
    string SIN;
    string name;
    int address;
    string city;
    string postal;
    string province;
    int phone;
    int animalCount;
};