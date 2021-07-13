#include <iostream>
#include <string>
using std::string;
class HSO_Location
{

public:
    HSO_Location();
    HSO_Location(int a, string b, int c, string d, string e, string f)
    {
        locID = a;
        locName = b;
        address = c;
        city = d;
        postal = e;
        province = f;
    }

    int getLocID()
    {
        return locID;
    }

private:
    int locID;
    string locName;
    int address;
    string city;
    string postal;
    string province;
};