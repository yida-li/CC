#include <iostream>
#include "Admission.h"
#include "Adoption.h"
using namespace std;
int main()
{
    Animals animal1(234, "dog", "female", "23DF");
    Animals animal2(235, "femur", "female", "63FF");
    Adopter adopter1("M2W2V2Q2R2", "friedrich nietzsche", 2111, "rocken", "3V3R1V", "lutzen", 1234321223, 4);
    Adopter adopter2("M1M2MQ43", "Carl Jung", 1711, "kesswil", "2M7M5Y", "thurgau", 4234331253, 2);
    Adopter adopter3("8M2Q1W2E", "sigmund freud", 8888, "novy", "8W2V3R", "Moravian", 6234821723, 41);
    HSO_Location h1(4241, "the begining", 71, "zurich", "M4M4V4", "monster");
    Admission admission1(19930303, adopter1, animal1, h1);
    Adoption adoption1(20210404, adopter2, animal2);
    return 0;
}