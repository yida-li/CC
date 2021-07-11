#include "0140.h"
class kid : public infant
{

public:
    kid(string a, string b, double c, double d, double e, string f) : infant(a, b, c, d, e, f)
    {
    }
    kid(string a, string b, string x, double c, double d, double e, string f) : infant(a, b, x, c, d, e, f)
    {
        secondType = x;
    }

    kid(string a, string b, string x, string w, double c, double d, double e, string f) : infant(a, b, x, c, d, e, f)
    {
        thirdType = w;
    }

    void learn(string x, string y, string z)

    {
        move4 = z;
        move3 = y;
        move2 = x;
    }

    void learn(string x, string y)

    {

        move3 = y;
        move2 = x;
    }

    void help()
    {

        printPokedex();

        if (secondType != "")
        {
            cout << "\nsecond type is :" << secondType;
            if (thirdType != "")
                cout << "\nthird type is :" << thirdType;
        }

        if (move2 != "")
            cout << "\nsecond special move is : " << move2;
        if (move3 != "")
            cout << "\nthird special move is : " << move3;
        if (move4 != "")
            cout << "\nfourth special move is : " << move4;
    }

private:
    string secondType = "";
    string thirdType = "";

    string move2 = "";
    string move3 = "";
    string move4 = "";
};
