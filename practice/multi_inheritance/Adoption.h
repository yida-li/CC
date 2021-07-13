#include <iostream>
#include <string>
#include "Animals.h"
#include "Adopter.h"
#include "HSO_Location.h"
using std::string;
class Adoption : public Adopter, public Animals, public HSO_Location
{

public:
    Adoption(int a, Adopter b, Animals c)
    {
        adoptDate = a;
        SIN = b.getSIN();
        animalID = c.getAID();
    }

private:
    int adoptDate;
    int animalID;
    string SIN;
};