
#include <iostream>
#include <string>
using std::string;
class phone
{

    friend std::ostream &operator<<(std::ostream &, const phone &);
    friend std::istream &operator>>(std::istream &, phone &);

private:
    string area;
    string exchange;
    string line;
};
