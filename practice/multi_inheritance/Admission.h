#include <iostream>
#include <string>
#include "Animals.h"
#include "Adopter.h"
#include "HSO_Location.h"
using std::string;
class Admission : public Adopter, public Animals, public HSO_Location
{

public:
    Admission(int a, Adopter b, Animals c, HSO_Location d)
    {
        date = a;
        prevOwnerSIN = b.getSIN();
        animalID = c.getAID();
        locID = d.getLocID();
    };

private:
    int date;
    string prevOwnerSIN;
    string animalID;
    int locID;
};