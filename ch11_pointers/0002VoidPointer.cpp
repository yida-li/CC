// attemping to deference a non-initialized pointer variable will give undefined and unpredictable results. Merely declaring a pointer variable does not give it an initial value. This is a common error which has kept many C++ programmer up at night trying to debug.

#include <iostream>
#include <string>
using namespace std;

int main(){


cout<<"A void pointer may be assigned the address of any type!\n";
cout<<"A void pointer maybe be only dereferenced provided they are cast to a Pointer of the appropriate data type by using cast operator\n\n";
void * x;
void * y;



int a;
float b;
string c;

x=&a;
y=&b;

*(int*)x=2;
*(float*)y=3;
cout<<"\n\n";
cout<<a<<' '<<b<<' ';
cout<<"\n\n";
cout<<*(int*)x<<' '<<*(float*)y<<'\n';


cout<<"So the summary of this code is basically saying that for every void pointer, we must cast the pointer to a type right?\n";





return 0;
}

