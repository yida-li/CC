#include "0014.h"
class infant : public baby
{

public:
    infant(string a, string b, double c, double d, double e, string f) : baby(a, b, c, d, e, f)
    {
    }
    infant(string a, string b, string x, double c, double d, double e, string f) : baby(a, b, c, d, e, f)
    {
        secondType = x;
    }

    void learn(string x)
    {
        move2 = x;
    }

    void help()
    {

        printPokedex();

        if (secondType != "")
            cout << "\nsecond type is :" << secondType;
        if (move2 != "")
            cout << "\nsecond special move is : " << move2;
    }

private:
    string secondType = "";
    string move2 = "";
};
