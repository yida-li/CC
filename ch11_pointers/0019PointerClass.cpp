#include <iostream>


int main(){
class hox{
public:
int yida;
char Yida;

};
hox ox;
hox * pox;

pox=&ox;

(*pox).yida=24;
(*pox).Yida='y';

std::cout<< (*pox).yida<<' '<< (*pox).Yida<<' ';
ox.yida= 48;
ox.Yida='U';

std::cout<< ox.yida <<' '<< ox.Yida<<' ';


pox->yida=12;
pox->Yida='r';

std::cout<< pox->yida<<' '<< pox->Yida<<' ';
std::cout<<"\n\nOk from what i've understood, we create a class called Pigi, then we declare an object of that class, then we declare a pointer of that class then target it to the location of the object.\nOK now I can use the pointer to do things like pointer->i=5;or things like (*pointer).i=5; or simply just object.i=5;\n";

return 0;

};
