#include <iostream>
#include "0003.h"
using namespace std;

person::person(string x)
{
    setName(x);
}

void person::setName(string x)
{
    if (x.size() <= 3)
        name = "boring" + x;

    else if (x.size() <= 20)
        name = x;

    else
    {
        name = x.substr(0, 20);
        name += "umbass";
    }
}

string person::getName() const
{

    return name;
}

void person::sayMyName() const
{

    cout << " The name is : " << getName() << endl;
}

/*
int main()
{
    person p1("John doe");
    person p2("Satoshinakamotoistobehiddenforever");

    p1.sayMyName();
    p2.sayMyName();

    return 0;
}

*/