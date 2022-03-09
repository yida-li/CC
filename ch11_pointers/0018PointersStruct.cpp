#include <iostream>
using namespace std;


struct nuclear
{

int i;
char c;
};


int main(){


nuclear nuc;
nuclear* nuca;

nuca=& nuc;

(*nuca).i=5;

(*nuca).c='a';

cout<<nuc.i<<' '<<nuc.c<<endl;


nuca->i=15;
nuca->c='A';

 cout<<nuca->i<<' '<<nuca->c<<endl;	

cout<<"Now the question is, would it work with class?";
return 0;}

