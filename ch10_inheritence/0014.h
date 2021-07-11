
#include <iostream>
#include <string>
using std::cout;
using std::string;
class baby
{

public:
    baby(string a, string b, double c, double d, double e, string f)
    {
        type = a;
        name = b;
        attack = c;
        hp = d;
        defence = e;
        move1 = f;
    }
    void printPokedex()
    {

        cout << "\n\nPokemon found: " << name;
        cout << "\nType is :" << type;
        cout << "\nAttack : " << attack;
        cout << "\tHitpoint : " << hp;
        cout << "\tDefence : " << defence;
        cout << "\nSpecial move : " << move1;
    }

private:
    string type;
    string name;
    string move1;
    double attack;
    double hp;
    double defence;
};
