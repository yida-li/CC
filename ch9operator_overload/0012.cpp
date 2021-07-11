#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1(" hello ");
    string s2(" world ");
    string s3;

    cout << " s1 is \"" << s1 << "\";s2 is\"" << s2 << "\";s3 is\"" << s3 << '\"';
    cout << "\ns2 == s1 =" << (s2 == s1 ? "true" : "false");
    cout << "\ns2 != s1 =" << (s2 != s1 ? "true" : "false");
    cout << "\ns2 > s1 =" << (s2 > s1 ? "true" : "false");
    cout << "\ns2 < s1 =" << (s2 < s1 ? "true" : "false");
    cout << "\ns2 >= s1 =" << (s2 >= s1 ? "true" : "false");
    cout << "\ns2 <= s1 =" << (s2 <= s1 ? "true" : "false");

    cout << "\n\nTesting s3.empty():" << endl;
    if (s3.empty())
    {
        cout << "s3 is empty; assigning s1 to s3;" << endl;
        s3 = s1;
        cout << "s3 is \"" << s3 << "\"";
    }

    cout << "\n\ns1+=s2 yields s1 = ";
    s1 += s2;
    cout << s1;

    cout << " \n\ns1 += \" from chapter \" yields " << endl;
    s1 += " one";
    cout << "s1= " << s1 << "now\n\n\n";

    cout << " The substring of s1 starting at location at location 0 for \n";
    cout << " 14 characters, s1.substr(0,14), is:\n";
    cout << s1.substr(0, 14) << "\n\n";

    cout << "The substring of s1 starting at the location 15, s1.substring(15) , is:\n";
    cout << s1.substr(15) << endl;

    s1[0] = 'H';
    s1[6] = 'B';
    cout << "\nsl after s1[0] = 'H' and s1[6] = 'B' is: " << s1 << "\n\n\n";

    try
    {
        cout << "attemping something stupid like s1.at(400) = 's'\n\n";
        s1.at(400) = 's';
    }
    catch (out_of_range &ex)

    {
        std::cerr << "An stupidity has occured:" << ex.what() << endl;
    }

    return 0;
}