#include<iostream>

using namespace std;



int main(){


cout<<"C++ allows for the declaration of constant pointers. A constant pointer must be assigned an address when it is declared, and once it has been assigned this, the address cannot be subsequently changed to another address... weell duh\n\n";

int alibaba;
int* const ppptr=&alibaba;
 // this pointer called ppptr cant point anywhere else anymore!!

alibaba=44;

cout<<*ppptr<<ppptr<<endl;



return 0;
}

