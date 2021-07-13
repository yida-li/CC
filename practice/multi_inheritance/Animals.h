#include <iostream>
#include <string>
using std::string;
class Animals
{

public:
    Animals();
    Animals(int a, string b, string c, string d)
    {
        aID = a;
        type = b;
        gender = c;
        chipNo = d;
    }

    int getAID()
    {
        return aID;
    }

private:
    int aID;
    string type;
    string gender;
    string chipNo;
};