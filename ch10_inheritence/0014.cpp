#include <iostream>
#include "1400.h"
using namespace std;

int main()
{

    baby c("fire", "Torchick", 16, 13, 33, "ember");
    c.printPokedex();

    infant c1("fire", "Combusken", "fighting", 32, 41, 75, "ember");
    c1.learn("flamethrower");
    c1.help();

    kid c2("fire", "Blaziken", "ground", 132, 12, 150, "blast burn");
    c2.learn("ice punch", "thunderpunch", "earthwake");
    c2.help();

    return 0;
}